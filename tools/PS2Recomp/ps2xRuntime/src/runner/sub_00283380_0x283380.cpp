#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00283380
// Address: 0x283380 - 0x283610
void sub_00283380_0x283380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283380_0x283380");
#endif

    switch (ctx->pc) {
        case 0x2833acu: goto label_2833ac;
        case 0x2833f0u: goto label_2833f0;
        case 0x2834f8u: goto label_2834f8;
        default: break;
    }

    ctx->pc = 0x283380u;

    // 0x283380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x283380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x283384: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x283384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x283388: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x283388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28338c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28338cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x283390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x283390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283394: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x283394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x283398: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x283398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28339c: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x28339Cu;
    {
        const bool branch_taken_0x28339c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2833A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28339Cu;
        // 0x2833a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28339c) {
            ctx->pc = 0x283600u;
            goto label_283600;
        }
    }
    ctx->pc = 0x2833A4u;
    // 0x2833a4: 0xc0a0b9c  jal         func_282E70
    ctx->pc = 0x2833A4u;
    SET_GPR_U32(ctx, 31, 0x2833ACu);
    ctx->pc = 0x282E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282E70u, 0x2833A4u, 0x2833ACu)) {
        return;
    }
    ctx->pc = 0x2833ACu;
label_2833ac:
    // 0x2833ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2833acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2833b0: 0x8e0c0014  lw          $t4, 0x14($s0)
    ctx->pc = 0x2833b0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2833b4: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x2833b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2833b8: 0x8ce40018  lw          $a0, 0x18($a3)
    ctx->pc = 0x2833b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2833bc: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x2833bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2833c0: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x2833c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x2833c4: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x2833c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x2833c8: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x2833c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
    // 0x2833cc: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2833CCu;
    {
        const bool branch_taken_0x2833cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2833D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833CCu;
        // 0x2833d0: 0xace00028  sw          $zero, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833cc) {
            ctx->pc = 0x2834D4u;
            goto label_2834d4;
        }
    }
    ctx->pc = 0x2833D4u;
    // 0x2833d4: 0x11800089  beqz        $t4, . + 4 + (0x89 << 2)
    ctx->pc = 0x2833D4u;
    {
        const bool branch_taken_0x2833d4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2833D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833D4u;
        // 0x2833d8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833d4) {
            ctx->pc = 0x2835FCu;
            goto label_2835fc;
        }
    }
    ctx->pc = 0x2833DCu;
    // 0x2833dc: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2833dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2833e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2833e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2833e4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2833e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2833e8: 0x3508fc00  ori         $t0, $t0, 0xFC00
    ctx->pc = 0x2833e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64512);
    // 0x2833ec: 0x0  nop
    ctx->pc = 0x2833ecu;
    // NOP
label_2833f0:
    // 0x2833f0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2833f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2833f4: 0x24e5001c  addiu       $a1, $a3, 0x1C
    ctx->pc = 0x2833f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x2833f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2833f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2833fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2833fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x283400: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x283400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283404: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x283404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x283408: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x283408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x28340c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28340cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x283410: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x283410u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283414: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x283414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x283418: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x283418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28341c: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x28341cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x283420: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x283420u;
    {
        const bool branch_taken_0x283420 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x283424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283420u;
        // 0x283424: 0x681824  and         $v1, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283420) {
            ctx->pc = 0x283430u;
            goto label_283430;
        }
    }
    ctx->pc = 0x283428u;
    // 0x283428: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x283428u;
    {
        const bool branch_taken_0x283428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283428u;
        // 0x28342c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283428) {
            ctx->pc = 0x283440u;
            goto label_283440;
        }
    }
    ctx->pc = 0x283430u;
label_283430:
    // 0x283430: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x283430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x283434: 0x24e50020  addiu       $a1, $a3, 0x20
    ctx->pc = 0x283434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x283438: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x283438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28343c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28343cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_283440:
    // 0x283440: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x283440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283444: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x283444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x283448: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x283448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x28344c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x28344cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283450: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x283450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x283454: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x283454u;
    {
        const bool branch_taken_0x283454 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x283458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283454u;
        // 0x283458: 0x681824  and         $v1, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283454) {
            ctx->pc = 0x283464u;
            goto label_283464;
        }
    }
    ctx->pc = 0x28345Cu;
    // 0x28345c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28345Cu;
    {
        const bool branch_taken_0x28345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28345Cu;
        // 0x283460: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28345c) {
            ctx->pc = 0x283474u;
            goto label_283474;
        }
    }
    ctx->pc = 0x283464u;
label_283464:
    // 0x283464: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x283464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x283468: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x283468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x28346c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28346cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x283470: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x283470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_283474:
    // 0x283474: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x283474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283478: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x283478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x28347c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x28347cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x283480: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x283480u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283484: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x283484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x283488: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x283488u;
    {
        const bool branch_taken_0x283488 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283488u;
        // 0x28348c: 0x681824  and         $v1, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283488) {
            ctx->pc = 0x283498u;
            goto label_283498;
        }
    }
    ctx->pc = 0x283490u;
    // 0x283490: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x283490u;
    {
        const bool branch_taken_0x283490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283490u;
        // 0x283494: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283490) {
            ctx->pc = 0x2834A8u;
            goto label_2834a8;
        }
    }
    ctx->pc = 0x283498u;
label_283498:
    // 0x283498: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x283498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28349c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x28349cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2834a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2834a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2834a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2834a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2834a8:
    // 0x2834a8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2834a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2834ac: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2834acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2834b0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2834b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2834b4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2834b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2834b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2834b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2834bc: 0x14c182b  sltu        $v1, $t2, $t4
    ctx->pc = 0x2834bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x2834c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2834c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2834c4: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2834C4u;
    {
        const bool branch_taken_0x2834c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2834C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834C4u;
        // 0x2834c8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834c4) {
            ctx->pc = 0x2833F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2833f0;
        }
    }
    ctx->pc = 0x2834CCu;
    // 0x2834cc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2834CCu;
    {
        const bool branch_taken_0x2834cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2834D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834CCu;
        // 0x2834d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834cc) {
            ctx->pc = 0x283600u;
            goto label_283600;
        }
    }
    ctx->pc = 0x2834D4u;
label_2834d4:
    // 0x2834d4: 0x11800049  beqz        $t4, . + 4 + (0x49 << 2)
    ctx->pc = 0x2834D4u;
    {
        const bool branch_taken_0x2834d4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2834D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834D4u;
        // 0x2834d8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834d4) {
            ctx->pc = 0x2835FCu;
            goto label_2835fc;
        }
    }
    ctx->pc = 0x2834DCu;
    // 0x2834dc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2834dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2834e0: 0x8ceb0038  lw          $t3, 0x38($a3)
    ctx->pc = 0x2834e0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x2834e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2834e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2834e8: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2834e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2834ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2834ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2834f0: 0x3529fc00  ori         $t1, $t1, 0xFC00
    ctx->pc = 0x2834f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)64512);
    // 0x2834f4: 0x0  nop
    ctx->pc = 0x2834f4u;
    // NOP
label_2834f8:
    // 0x2834f8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2834f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2834fc: 0x24e6001c  addiu       $a2, $a3, 0x1C
    ctx->pc = 0x2834fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x283500: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x283500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x283504: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x283504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x283508: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x283508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28350c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x28350cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283510: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x283510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x283514: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x283514u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283518: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x283518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28351c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28351cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x283520: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x283520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x283524: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x283524u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x283528: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x283528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28352c: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x28352cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x283530: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x283530u;
    {
        const bool branch_taken_0x283530 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x283534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283530u;
        // 0x283534: 0x892024  and         $a0, $a0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283530) {
            ctx->pc = 0x283540u;
            goto label_283540;
        }
    }
    ctx->pc = 0x283538u;
    // 0x283538: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x283538u;
    {
        const bool branch_taken_0x283538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283538u;
        // 0x28353c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283538) {
            ctx->pc = 0x283558u;
            goto label_283558;
        }
    }
    ctx->pc = 0x283540u;
label_283540:
    // 0x283540: 0x1621821  addu        $v1, $t3, $v0
    ctx->pc = 0x283540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x283544: 0x24e60020  addiu       $a2, $a3, 0x20
    ctx->pc = 0x283544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x283548: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x283548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28354c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x283550: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x283550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x283554: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x283554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_283558:
    // 0x283558: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x283558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28355c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x28355cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x283560: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x283560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x283564: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x283564u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283568: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x283568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x28356c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x28356Cu;
    {
        const bool branch_taken_0x28356c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x283570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28356Cu;
        // 0x283570: 0x892024  and         $a0, $a0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28356c) {
            ctx->pc = 0x28357Cu;
            goto label_28357c;
        }
    }
    ctx->pc = 0x283574u;
    // 0x283574: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x283574u;
    {
        const bool branch_taken_0x283574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283574u;
        // 0x283578: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283574) {
            ctx->pc = 0x283598u;
            goto label_283598;
        }
    }
    ctx->pc = 0x28357Cu;
label_28357c:
    // 0x28357c: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x28357cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x283580: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x283580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x283584: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x283584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x283588: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x283588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28358c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28358cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x283590: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x283590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x283594: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x283594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_283598:
    // 0x283598: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x283598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28359c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x28359cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x2835a0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2835a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2835a4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2835a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2835a8: 0x91020003  lbu         $v0, 0x3($t0)
    ctx->pc = 0x2835a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x2835ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2835ACu;
    {
        const bool branch_taken_0x2835ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2835B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835ACu;
        // 0x2835b0: 0x892024  and         $a0, $a0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835ac) {
            ctx->pc = 0x2835BCu;
            goto label_2835bc;
        }
    }
    ctx->pc = 0x2835B4u;
    // 0x2835b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2835B4u;
    {
        const bool branch_taken_0x2835b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2835B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835B4u;
        // 0x2835b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835b4) {
            ctx->pc = 0x2835D8u;
            goto label_2835d8;
        }
    }
    ctx->pc = 0x2835BCu;
label_2835bc:
    // 0x2835bc: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x2835bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x2835c0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2835c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2835c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2835c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2835c8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2835c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2835cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2835ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2835d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2835d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2835d4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2835d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2835d8:
    // 0x2835d8: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x2835d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x2835dc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2835dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2835e0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2835e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2835e4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2835e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2835e8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2835e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2835ec: 0x14c182b  sltu        $v1, $t2, $t4
    ctx->pc = 0x2835ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x2835f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2835f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2835f4: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2835F4u;
    {
        const bool branch_taken_0x2835f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2835F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835F4u;
        // 0x2835f8: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835f4) {
            ctx->pc = 0x2834F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2834f8;
        }
    }
    ctx->pc = 0x2835FCu;
label_2835fc:
    // 0x2835fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2835fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_283600:
    // 0x283600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283604: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x283604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283608: 0x3e00008  jr          $ra
    ctx->pc = 0x283608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283608u;
        // 0x28360c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283610u;
}
