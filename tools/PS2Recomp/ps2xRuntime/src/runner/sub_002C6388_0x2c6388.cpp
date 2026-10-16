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

// Function: sub_002C6388
// Address: 0x2c6388 - 0x2c68c8
void sub_002C6388_0x2c6388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6388_0x2c6388");
#endif

    switch (ctx->pc) {
        case 0x2c6458u: goto label_2c6458;
        case 0x2c6464u: goto label_2c6464;
        case 0x2c6480u: goto label_2c6480;
        case 0x2c6634u: goto label_2c6634;
        case 0x2c67fcu: goto label_2c67fc;
        default: break;
    }

    ctx->pc = 0x2c6388u;

    // 0x2c6388: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c6388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c638c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2c638cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6390: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2c6390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2c6394: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2c6394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2c6398: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c6398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c639c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2c639cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2c63a0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2c63a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c63a4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2c63a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2c63a8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2c63a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2c63ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c63acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c63b0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2c63b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2c63b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c63b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c63b8: 0x8e08003c  lw          $t0, 0x3C($s0)
    ctx->pc = 0x2c63b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2c63bc: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2c63bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2c63c0: 0x25030010  addiu       $v1, $t0, 0x10
    ctx->pc = 0x2c63c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2c63c4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c63c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c63c8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C63C8u;
    {
        const bool branch_taken_0x2c63c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63C8u;
        // 0x2c63cc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c63c8) {
            ctx->pc = 0x2C63E4u;
            goto label_2c63e4;
        }
    }
    ctx->pc = 0x2C63D0u;
    // 0x2c63d0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2c63d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c63d4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2c63d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2c63d8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c63d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c63dc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C63DCu;
    {
        const bool branch_taken_0x2c63dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c63dc) {
            ctx->pc = 0x2C63E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C63DCu;
            // 0x2c63e0: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C63F4u;
            goto label_2c63f4;
        }
    }
    ctx->pc = 0x2C63E4u;
label_2c63e4:
    // 0x2c63e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c63e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c63e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c63e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c63ec: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x2C63ECu;
    {
        const bool branch_taken_0x2c63ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C63F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63ECu;
        // 0x2c63f0: 0xae030078  sw          $v1, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c63ec) {
            ctx->pc = 0x2C689Cu;
            goto label_2c689c;
        }
    }
    ctx->pc = 0x2C63F4u;
label_2c63f4:
    // 0x2c63f4: 0x24070120  addiu       $a3, $zero, 0x120
    ctx->pc = 0x2c63f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x2c63f8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x2c63f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2c63fc: 0x673818  mult        $a3, $v1, $a3
    ctx->pc = 0x2c63fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2c6400: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2c6400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c6404: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2c6404u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2c6408: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2c6408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c640c: 0x8c64005c  lw          $a0, 0x5C($v1)
    ctx->pc = 0x2c640cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2c6410: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x2c6410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2c6414: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x2c6414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2c6418: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2c6418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2c641c: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x2c641cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2c6420: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2c6420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2c6424: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2c6424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2c6428: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2c6428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2c642c: 0x8d320070  lw          $s2, 0x70($t1)
    ctx->pc = 0x2c642cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 112)));
    // 0x2c6430: 0x878821  addu        $s1, $a0, $a3
    ctx->pc = 0x2c6430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2c6434: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2c6434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2c6438: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x2c6438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x2c643c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2C643Cu;
    {
        const bool branch_taken_0x2c643c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C643Cu;
        // 0x2c6440: 0xc60d0074  lwc1        $f13, 0x74($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c643c) {
            ctx->pc = 0x2C646Cu;
            goto label_2c646c;
        }
    }
    ctx->pc = 0x2C6444u;
    // 0x2c6444: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2c6444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c6448: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c6448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c644c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c644cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c6450: 0xc0b448c  jal         func_2D1230
    ctx->pc = 0x2C6450u;
    SET_GPR_U32(ctx, 31, 0x2C6458u);
    ctx->pc = 0x2C6454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6450u;
    // 0x2c6454: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D1230u, 0x2C6450u, 0x2C6458u)) {
        return;
    }
    ctx->pc = 0x2C6458u;
label_2c6458:
    // 0x2c6458: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2c6458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c645c: 0xc0b51de  jal         func_2D4778
    ctx->pc = 0x2C645Cu;
    SET_GPR_U32(ctx, 31, 0x2C6464u);
    ctx->pc = 0x2C6460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C645Cu;
    // 0x2c6460: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4778u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D4778u, 0x2C645Cu, 0x2C6464u)) {
        return;
    }
    ctx->pc = 0x2C6464u;
label_2c6464:
    // 0x2c6464: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6464u;
    {
        const bool branch_taken_0x2c6464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6464u;
        // 0x2c6468: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6464) {
            ctx->pc = 0x2C6488u;
            goto label_2c6488;
        }
    }
    ctx->pc = 0x2C646Cu;
label_2c646c:
    // 0x2c646c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2c646cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c6470: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c6470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6474: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c6474u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c6478: 0xc0b3b1e  jal         func_2CEC78
    ctx->pc = 0x2C6478u;
    SET_GPR_U32(ctx, 31, 0x2C6480u);
    ctx->pc = 0x2C647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6478u;
    // 0x2c647c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEC78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CEC78u, 0x2C6478u, 0x2C6480u)) {
        return;
    }
    ctx->pc = 0x2C6480u;
label_2c6480:
    // 0x2c6480: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c6480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6484: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c6484u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6488:
    // 0x2c6488: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6488u;
    {
        const bool branch_taken_0x2c6488 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6488) {
            ctx->pc = 0x2C64A4u;
            goto label_2c64a4;
        }
    }
    ctx->pc = 0x2C6490u;
    // 0x2c6490: 0xc6200110  lwc1        $f0, 0x110($s1)
    ctx->pc = 0x2c6490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6494: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2c6494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6498: 0x0  nop
    ctx->pc = 0x2c6498u;
    // NOP
    // 0x2c649c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C649Cu;
    {
        const bool branch_taken_0x2c649c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c649c) {
            ctx->pc = 0x2C64A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C649Cu;
            // 0x2c64a0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C64A4u;
            goto label_2c64a4;
        }
    }
    ctx->pc = 0x2C64A4u;
label_2c64a4:
    // 0x2c64a4: 0x12a000fd  beqz        $s5, . + 4 + (0xFD << 2)
    ctx->pc = 0x2C64A4u;
    {
        const bool branch_taken_0x2c64a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C64A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C64A4u;
        // 0x2c64a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c64a4) {
            ctx->pc = 0x2C689Cu;
            goto label_2c689c;
        }
    }
    ctx->pc = 0x2C64ACu;
    // 0x2c64ac: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2c64acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c64b0: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x2c64b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2c64b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c64b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c64b8: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x2c64b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c64bc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C64BCu;
    {
        const bool branch_taken_0x2c64bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C64C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C64BCu;
        // 0x2c64c0: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c64bc) {
            ctx->pc = 0x2C64CCu;
            goto label_2c64cc;
        }
    }
    ctx->pc = 0x2C64C4u;
    // 0x2c64c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c64c8: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x2c64c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
label_2c64cc:
    // 0x2c64cc: 0x96220054  lhu         $v0, 0x54($s1)
    ctx->pc = 0x2c64ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2c64d0: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2c64d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c64d4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C64D4u;
    {
        const bool branch_taken_0x2c64d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c64d4) {
            ctx->pc = 0x2C64D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C64D4u;
            // 0x2c64d8: 0x962200d4  lhu         $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C64F0u;
            goto label_2c64f0;
        }
    }
    ctx->pc = 0x2C64DCu;
    // 0x2c64dc: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2c64dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2c64e0: 0x96230054  lhu         $v1, 0x54($s1)
    ctx->pc = 0x2c64e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2c64e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c64e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c64e8: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2c64e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x2c64ec: 0x962200d4  lhu         $v0, 0xD4($s1)
    ctx->pc = 0x2c64ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 212)));
label_2c64f0:
    // 0x2c64f0: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2c64f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c64f4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C64F4u;
    {
        const bool branch_taken_0x2c64f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c64f4) {
            ctx->pc = 0x2C64F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C64F4u;
            // 0x2c64f8: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6510u;
            goto label_2c6510;
        }
    }
    ctx->pc = 0x2C64FCu;
    // 0x2c64fc: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2c64fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2c6500: 0x962300d4  lhu         $v1, 0xD4($s1)
    ctx->pc = 0x2c6500u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x2c6504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c6504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c6508: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2c6508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x2c650c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2c650cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2c6510:
    // 0x2c6510: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2c6510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c6514: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2c6514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c6518: 0xb223005f  sdl         $v1, 0x5F($s1)
    ctx->pc = 0x2c6518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c651c: 0xb6230058  sdr         $v1, 0x58($s1)
    ctx->pc = 0x2c651cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c6520: 0xa620007e  sh          $zero, 0x7E($s1)
    ctx->pc = 0x2c6520u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 126), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c6524: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2c6524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c6528: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2c6528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2c652c: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x2c652cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6530: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2c6530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2c6534: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x2c6534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x2c6538: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x2c6538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
    // 0x2c653c: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x2c653cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6540: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2c6540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2c6544: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x2c6544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x2c6548: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x2c6548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2c654c: 0xa623007c  sh          $v1, 0x7C($s1)
    ctx->pc = 0x2c654cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 124), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c6550: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x2c6550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6554: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2C6554u;
    {
        const bool branch_taken_0x2c6554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6554u;
        // 0x2c6558: 0xe6200074  swc1        $f0, 0x74($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6554) {
            ctx->pc = 0x2C66D0u;
            goto label_2c66d0;
        }
    }
    ctx->pc = 0x2C655Cu;
    // 0x2c655c: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x2c655cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c6560: 0x26320060  addiu       $s2, $s1, 0x60
    ctx->pc = 0x2c6560u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2c6564: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x2c6564u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2c6568: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2c6568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c656c: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x2c656cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2c6570: 0x96040048  lhu         $a0, 0x48($s0)
    ctx->pc = 0x2c6570u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c6574: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2c6574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2c6578: 0x10430055  beq         $v0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2C6578u;
    {
        const bool branch_taken_0x2c6578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6578u;
        // 0x2c657c: 0xa624007e  sh          $a0, 0x7E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 126), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6578) {
            ctx->pc = 0x2C66D0u;
            goto label_2c66d0;
        }
    }
    ctx->pc = 0x2C6580u;
    // 0x2c6580: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2c6580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2c6584: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x2c6584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6588: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c6588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c658c: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x2c658cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6590: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x2c6590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6594: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c6594u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6598: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2c6598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c659c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2c659cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2c65a0: 0xc6020038  lwc1        $f2, 0x38($s0)
    ctx->pc = 0x2c65a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c65a4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c65a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c65a8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2c65a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2c65ac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2c65acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c65b0: 0xe6210060  swc1        $f1, 0x60($s1)
    ctx->pc = 0x2c65b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x2c65b4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2c65b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c65b8: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x2c65b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c65bc: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x2c65bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c65c0: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x2c65c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c65c4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c65c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c65c8: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2c65c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c65cc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2c65ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2c65d0: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2c65d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c65d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c65d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c65d8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2c65d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2c65dc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2c65dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2c65e0: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x2c65e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2c65e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c65e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c65e8: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x2c65e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c65ec: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x2c65ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c65f0: 0xc4430018  lwc1        $f3, 0x18($v0)
    ctx->pc = 0x2c65f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c65f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c65f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c65f8: 0xc4440028  lwc1        $f4, 0x28($v0)
    ctx->pc = 0x2c65f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c65fc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2c65fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2c6600: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2c6600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6604: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2c6604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2c6608: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2c6608u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c660c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c660cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6610: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2c6610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c6614: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C6614u;
    {
        const bool branch_taken_0x2c6614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6614u;
        // 0x2c6618: 0xe6410008  swc1        $f1, 0x8($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6614) {
            ctx->pc = 0x2C66D0u;
            goto label_2c66d0;
        }
    }
    ctx->pc = 0x2C661Cu;
    // 0x2c661c: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x2c661cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c6620: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c6620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6624: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2c6624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c6628: 0x37a80004  ori         $t0, $sp, 0x4
    ctx->pc = 0x2c6628u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2c662c: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2C662Cu;
    SET_GPR_U32(ctx, 31, 0x2C6634u);
    ctx->pc = 0x2C6630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C662Cu;
    // 0x2c6630: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2C662Cu, 0x2C6634u)) {
        return;
    }
    ctx->pc = 0x2C6634u;
label_2c6634:
    // 0x2c6634: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2c6634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2c6638: 0xc6040030  lwc1        $f4, 0x30($s0)
    ctx->pc = 0x2c6638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c663c: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x2c663cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6640: 0xc6280060  lwc1        $f8, 0x60($s1)
    ctx->pc = 0x2c6640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c6644: 0xc6490004  lwc1        $f9, 0x4($s2)
    ctx->pc = 0x2c6644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c6648: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2c6648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c664c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c664cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6650: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x2c6650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6654: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2c6654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2c6658: 0xc6060014  lwc1        $f6, 0x14($s0)
    ctx->pc = 0x2c6658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c665c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2c665cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2c6660: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x2c6660u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x2c6664: 0xc64a0008  lwc1        $f10, 0x8($s2)
    ctx->pc = 0x2c6664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2c6668: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x2c6668u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2c666c: 0xc4450038  lwc1        $f5, 0x38($v0)
    ctx->pc = 0x2c666cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c6670: 0xc6070038  lwc1        $f7, 0x38($s0)
    ctx->pc = 0x2c6670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c6674: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x2c6674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6678: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c6678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c667c: 0x460a2942  mul.s       $f5, $f5, $f10
    ctx->pc = 0x2c667cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x2c6680: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x2c6680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6684: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2c6684u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2c6688: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2c6688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c668c: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2c668cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2c6690: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2c6690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2c6694: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2c6694u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2c6698: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c6698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c669c: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x2c669cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2c66a0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2c66a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2c66a4: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x2c66a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c66a8: 0x0  nop
    ctx->pc = 0x2c66a8u;
    // NOP
    // 0x2c66ac: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2C66ACu;
    {
        const bool branch_taken_0x2c66ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c66ac) {
            ctx->pc = 0x2C66B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C66ACu;
            // 0x2c66b0: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C66D4u;
            goto label_2c66d4;
        }
    }
    ctx->pc = 0x2C66B4u;
    // 0x2c66b4: 0x46004007  neg.s       $f0, $f8
    ctx->pc = 0x2c66b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[8]);
    // 0x2c66b8: 0x46004847  neg.s       $f1, $f9
    ctx->pc = 0x2c66b8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[9]);
    // 0x2c66bc: 0x46005087  neg.s       $f2, $f10
    ctx->pc = 0x2c66bcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[10]);
    // 0x2c66c0: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x2c66c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x2c66c4: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2c66c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2c66c8: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x2c66c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2c66cc: 0x0  nop
    ctx->pc = 0x2c66ccu;
    // NOP
label_2c66d0:
    // 0x2c66d0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2c66d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2c66d4:
    // 0x2c66d4: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x2c66d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2c66d8: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x2c66d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c66dc: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x2c66dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c66e0: 0xb22700df  sdl         $a3, 0xDF($s1)
    ctx->pc = 0x2c66e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c66e4: 0xb62700d8  sdr         $a3, 0xD8($s1)
    ctx->pc = 0x2c66e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c66e8: 0xa480007e  sh          $zero, 0x7E($a0)
    ctx->pc = 0x2c66e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 126), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c66ec: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2c66ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c66f0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2c66f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2c66f4: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x2c66f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c66f8: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x2c66f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x2c66fc: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x2c66fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x2c6700: 0xac83006c  sw          $v1, 0x6C($a0)
    ctx->pc = 0x2c6700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 3));
    // 0x2c6704: 0xc4a00054  lwc1        $f0, 0x54($a1)
    ctx->pc = 0x2c6704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6708: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2c6708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2c670c: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x2c670cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x2c6710: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x2c6710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2c6714: 0xa483007c  sh          $v1, 0x7C($a0)
    ctx->pc = 0x2c6714u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 124), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c6718: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x2c6718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c671c: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2C671Cu;
    {
        const bool branch_taken_0x2c671c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C671Cu;
        // 0x2c6720: 0xe4800074  swc1        $f0, 0x74($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c671c) {
            ctx->pc = 0x2C6898u;
            goto label_2c6898;
        }
    }
    ctx->pc = 0x2C6724u;
    // 0x2c6724: 0x8e930004  lw          $s3, 0x4($s4)
    ctx->pc = 0x2c6724u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2c6728: 0x263200e0  addiu       $s2, $s1, 0xE0
    ctx->pc = 0x2c6728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x2c672c: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2c672cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c6730: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2c6730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c6734: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x2c6734u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2c6738: 0x96040048  lhu         $a0, 0x48($s0)
    ctx->pc = 0x2c6738u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c673c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2c673cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2c6740: 0x10430055  beq         $v0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2C6740u;
    {
        const bool branch_taken_0x2c6740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C6744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6740u;
        // 0x2c6744: 0xa62400fe  sh          $a0, 0xFE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 254), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6740) {
            ctx->pc = 0x2C6898u;
            goto label_2c6898;
        }
    }
    ctx->pc = 0x2C6748u;
    // 0x2c6748: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2c6748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2c674c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x2c674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6750: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c6750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6754: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x2c6754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6758: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x2c6758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c675c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c675cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6760: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2c6760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6764: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2c6764u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2c6768: 0xc6020038  lwc1        $f2, 0x38($s0)
    ctx->pc = 0x2c6768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c676c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c676cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c6770: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2c6770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2c6774: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2c6774u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c6778: 0xe62100e0  swc1        $f1, 0xE0($s1)
    ctx->pc = 0x2c6778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
    // 0x2c677c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2c677cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6780: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x2c6780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6784: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x2c6784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6788: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x2c6788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c678c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2c678cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c6790: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2c6790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6794: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2c6794u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2c6798: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2c6798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c679c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c679cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c67a0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2c67a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2c67a4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2c67a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2c67a8: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x2c67a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2c67ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c67acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c67b0: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x2c67b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c67b4: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x2c67b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c67b8: 0xc4430018  lwc1        $f3, 0x18($v0)
    ctx->pc = 0x2c67b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c67bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c67bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c67c0: 0xc4440028  lwc1        $f4, 0x28($v0)
    ctx->pc = 0x2c67c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c67c4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2c67c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2c67c8: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2c67c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c67cc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2c67ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2c67d0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2c67d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c67d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c67d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c67d8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2c67d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c67dc: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C67DCu;
    {
        const bool branch_taken_0x2c67dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67DCu;
        // 0x2c67e0: 0xe6410008  swc1        $f1, 0x8($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c67dc) {
            ctx->pc = 0x2C6898u;
            goto label_2c6898;
        }
    }
    ctx->pc = 0x2C67E4u;
    // 0x2c67e4: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x2c67e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c67e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c67e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c67ec: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2c67ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c67f0: 0x37a8000c  ori         $t0, $sp, 0xC
    ctx->pc = 0x2c67f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x2c67f4: 0xc0aa82a  jal         func_2AA0A8
    ctx->pc = 0x2C67F4u;
    SET_GPR_U32(ctx, 31, 0x2C67FCu);
    ctx->pc = 0x2C67F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C67F4u;
    // 0x2c67f8: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA0A8u, 0x2C67F4u, 0x2C67FCu)) {
        return;
    }
    ctx->pc = 0x2C67FCu;
label_2c67fc:
    // 0x2c67fc: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2c67fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2c6800: 0xc6040030  lwc1        $f4, 0x30($s0)
    ctx->pc = 0x2c6800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6804: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x2c6804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6808: 0xc62800e0  lwc1        $f8, 0xE0($s1)
    ctx->pc = 0x2c6808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c680c: 0xc6490004  lwc1        $f9, 0x4($s2)
    ctx->pc = 0x2c680cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c6810: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2c6810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6814: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c6814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6818: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x2c6818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c681c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2c681cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2c6820: 0xc6060014  lwc1        $f6, 0x14($s0)
    ctx->pc = 0x2c6820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c6824: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x2c6824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x2c6828: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x2c6828u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x2c682c: 0xc64a0008  lwc1        $f10, 0x8($s2)
    ctx->pc = 0x2c682cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2c6830: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x2c6830u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2c6834: 0xc4450038  lwc1        $f5, 0x38($v0)
    ctx->pc = 0x2c6834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c6838: 0xc6070038  lwc1        $f7, 0x38($s0)
    ctx->pc = 0x2c6838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c683c: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x2c683cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6840: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c6840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c6844: 0x460a2942  mul.s       $f5, $f5, $f10
    ctx->pc = 0x2c6844u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x2c6848: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x2c6848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c684c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x2c684cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x2c6850: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2c6850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6854: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2c6854u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2c6858: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2c6858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2c685c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2c685cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2c6860: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c6860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c6864: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x2c6864u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2c6868: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2c6868u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2c686c: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x2c686cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6870: 0x0  nop
    ctx->pc = 0x2c6870u;
    // NOP
    // 0x2c6874: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2C6874u;
    {
        const bool branch_taken_0x2c6874 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6874u;
        // 0x2c6878: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6874) {
            ctx->pc = 0x2C689Cu;
            goto label_2c689c;
        }
    }
    ctx->pc = 0x2C687Cu;
    // 0x2c687c: 0x46004007  neg.s       $f0, $f8
    ctx->pc = 0x2c687cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[8]);
    // 0x2c6880: 0x46004847  neg.s       $f1, $f9
    ctx->pc = 0x2c6880u;
    ctx->f[1] = FPU_NEG_S(ctx->f[9]);
    // 0x2c6884: 0x46005087  neg.s       $f2, $f10
    ctx->pc = 0x2c6884u;
    ctx->f[2] = FPU_NEG_S(ctx->f[10]);
    // 0x2c6888: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x2c6888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
    // 0x2c688c: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2c688cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2c6890: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x2c6890u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2c6894: 0x0  nop
    ctx->pc = 0x2c6894u;
    // NOP
label_2c6898:
    // 0x2c6898: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2c6898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c689c:
    // 0x2c689c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2c689cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c68a0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2c68a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c68a4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2c68a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c68a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c68a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c68ac: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2c68acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c68b0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2c68b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c68b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c68b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c68b8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2c68b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c68bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C68BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C68C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C68BCu;
        // 0x2c68c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C68BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C68C4u;
    // 0x2c68c4: 0x0  nop
    ctx->pc = 0x2c68c4u;
    // NOP
    ctx->pc = 0x2c68c8u;
}
