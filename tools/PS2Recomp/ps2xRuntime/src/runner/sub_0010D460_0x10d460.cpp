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

// Function: sub_0010D460
// Address: 0x10d460 - 0x10d908
void sub_0010D460_0x10d460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D460_0x10d460");
#endif

    switch (ctx->pc) {
        case 0x10d4d4u: goto label_10d4d4;
        case 0x10d528u: goto label_10d528;
        case 0x10d588u: goto label_10d588;
        case 0x10d59cu: goto label_10d59c;
        case 0x10d5c4u: goto label_10d5c4;
        case 0x10d6a8u: goto label_10d6a8;
        case 0x10d6b4u: goto label_10d6b4;
        case 0x10d6f0u: goto label_10d6f0;
        case 0x10d76cu: goto label_10d76c;
        case 0x10d7b4u: goto label_10d7b4;
        case 0x10d800u: goto label_10d800;
        case 0x10d848u: goto label_10d848;
        case 0x10d874u: goto label_10d874;
        case 0x10d888u: goto label_10d888;
        case 0x10d894u: goto label_10d894;
        case 0x10d8a4u: goto label_10d8a4;
        default: break;
    }

    ctx->pc = 0x10d460u;

    // 0x10d460: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10d460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10d464: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x10d464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x10d468: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x10d468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x10d46c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10d46cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d470: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x10d470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x10d474: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10d474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d478: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x10d478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x10d47c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x10d47cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d480: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x10d480u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x10d484: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x10d484u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d488: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x10d488u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x10d48c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x10d48cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x10d490: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x10d490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x10d494: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x10d494u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x10d498: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x10d498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x10d49c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x10D49Cu;
    {
        const bool branch_taken_0x10d49c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D49Cu;
        // 0x10d4a0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d49c) {
            ctx->pc = 0x10D4CCu;
            goto label_10d4cc;
        }
    }
    ctx->pc = 0x10D4A4u;
    // 0x10d4a4: 0x1260010d  beqz        $s3, . + 4 + (0x10D << 2)
    ctx->pc = 0x10D4A4u;
    {
        const bool branch_taken_0x10d4a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D4A4u;
        // 0x10d4a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d4a4) {
            ctx->pc = 0x10D8DCu;
            goto label_10d8dc;
        }
    }
    ctx->pc = 0x10D4ACu;
    // 0x10d4ac: 0x1280010c  beqz        $s4, . + 4 + (0x10C << 2)
    ctx->pc = 0x10D4ACu;
    {
        const bool branch_taken_0x10d4ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D4ACu;
        // 0x10d4b0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d4ac) {
            ctx->pc = 0x10D8E0u;
            goto label_10d8e0;
        }
    }
    ctx->pc = 0x10D4B4u;
    // 0x10d4b4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x10d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x10d4b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D4B8u;
    {
        const bool branch_taken_0x10d4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D4B8u;
        // 0x10d4bc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d4b8) {
            ctx->pc = 0x10D4CCu;
            goto label_10d4cc;
        }
    }
    ctx->pc = 0x10D4C0u;
    // 0x10d4c0: 0x8c4382f4  lw          $v1, -0x7D0C($v0)
    ctx->pc = 0x10d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935284)));
    // 0x10d4c4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D4C4u;
    {
        const bool branch_taken_0x10d4c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D4C4u;
        // 0x10d4c8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d4c4) {
            ctx->pc = 0x10D4DCu;
            goto label_10d4dc;
        }
    }
    ctx->pc = 0x10D4CCu;
label_10d4cc:
    // 0x10d4cc: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x10D4CCu;
    {
        const bool branch_taken_0x10d4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D4CCu;
        // 0x10d4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d4cc) {
            ctx->pc = 0x10D8DCu;
            goto label_10d8dc;
        }
    }
    ctx->pc = 0x10D4D4u;
label_10d4d4:
    // 0x10d4d4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x10D4D4u;
    {
        const bool branch_taken_0x10d4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D4D4u;
        // 0x10d4d8: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d4d4) {
            ctx->pc = 0x10D578u;
            goto label_10d578;
        }
    }
    ctx->pc = 0x10D4DCu;
label_10d4dc:
    // 0x10d4dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10d4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10d4e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d4e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d4e4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x10d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x10d4e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10d4e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d4ec: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x10d4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x10d4f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10d4f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d4f4: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x10d4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10d4f8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x10d4f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d4fc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10d4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10d500: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10d500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d504: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x10d504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x10d508: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x10d508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x10d50c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x10d50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x10d510: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10d510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x10d514: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x10d514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x10d518: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x10d518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x10d51c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10d51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10d520: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x10d520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x10d524: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x10d524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_10d528:
    // 0x10d528: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x10d528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10d52c: 0x144a0006  bne         $v0, $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D52Cu;
    {
        const bool branch_taken_0x10d52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x10D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D52Cu;
        // 0x10d530: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d52c) {
            ctx->pc = 0x10D548u;
            goto label_10d548;
        }
    }
    ctx->pc = 0x10D534u;
    // 0x10d534: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x10d534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10d538: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x10d538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d53c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x10d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x10d540: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x10d540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x10d544: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x10d544u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_10d548:
    // 0x10d548: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D548u;
    {
        const bool branch_taken_0x10d548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D548u;
        // 0x10d54c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d548) {
            ctx->pc = 0x10D564u;
            goto label_10d564;
        }
    }
    ctx->pc = 0x10D550u;
    // 0x10d550: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x10d550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d554: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x10d554u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10d558: 0x0  nop
    ctx->pc = 0x10d558u;
    // NOP
    // 0x10d55c: 0x4501ffdd  bc1t        . + 4 + (-0x23 << 2)
    ctx->pc = 0x10D55Cu;
    {
        const bool branch_taken_0x10d55c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D55Cu;
        // 0x10d560: 0x24c20020  addiu       $v0, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d55c) {
            ctx->pc = 0x10D4D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d4d4;
        }
    }
    ctx->pc = 0x10D564u;
label_10d564:
    // 0x10d564: 0x24c6002c  addiu       $a2, $a2, 0x2C
    ctx->pc = 0x10d564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
    // 0x10d568: 0x2ce20040  sltiu       $v0, $a3, 0x40
    ctx->pc = 0x10d568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x10d56c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x10D56Cu;
    {
        const bool branch_taken_0x10d56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D56Cu;
        // 0x10d570: 0x24a5002c  addiu       $a1, $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d56c) {
            ctx->pc = 0x10D528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d528;
        }
    }
    ctx->pc = 0x10D574u;
    // 0x10d574: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10d574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d578:
    // 0x10d578: 0x120000d7  beqz        $s0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x10D578u;
    {
        const bool branch_taken_0x10d578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D578u;
        // 0x10d57c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d578) {
            ctx->pc = 0x10D8D8u;
            goto label_10d8d8;
        }
    }
    ctx->pc = 0x10D580u;
    // 0x10d580: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x10D580u;
    SET_GPR_U32(ctx, 31, 0x10D588u);
    ctx->pc = 0x1D9760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9760u, 0x10D580u, 0x10D588u)) {
        return;
    }
    ctx->pc = 0x10D588u;
label_10d588:
    // 0x10d588: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x10D588u;
    {
        const bool branch_taken_0x10d588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D588u;
        // 0x10d58c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d588) {
            ctx->pc = 0x10D8D8u;
            goto label_10d8d8;
        }
    }
    ctx->pc = 0x10D590u;
    // 0x10d590: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x10d590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x10d594: 0xc0c580c  jal         func_316030
    ctx->pc = 0x10D594u;
    SET_GPR_U32(ctx, 31, 0x10D59Cu);
    ctx->pc = 0x10D598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D594u;
    // 0x10d598: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x10D594u, 0x10D59Cu)) {
        return;
    }
    ctx->pc = 0x10D59Cu;
label_10d59c:
    // 0x10d59c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x10d59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x10d5a0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x10d5a0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10d5a4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10D5A4u;
    {
        const bool branch_taken_0x10d5a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d5a4) {
            ctx->pc = 0x10D5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D5A4u;
            // 0x10d5a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D5ACu;
            goto label_10d5ac;
        }
    }
    ctx->pc = 0x10D5ACu;
label_10d5ac:
    // 0x10d5ac: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x10d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x10d5b0: 0x2810  mfhi        $a1
    ctx->pc = 0x10d5b0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x10d5b4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x10d5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x10d5b8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10d5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10d5bc: 0xc07658e  jal         func_1D9638
    ctx->pc = 0x10D5BCu;
    SET_GPR_U32(ctx, 31, 0x10D5C4u);
    ctx->pc = 0x10D5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D5BCu;
    // 0x10d5c0: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9638u, 0x10D5BCu, 0x10D5C4u)) {
        return;
    }
    ctx->pc = 0x10D5C4u;
label_10d5c4:
    // 0x10d5c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10d5c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d5c8: 0x126000b4  beqz        $s3, . + 4 + (0xB4 << 2)
    ctx->pc = 0x10D5C8u;
    {
        const bool branch_taken_0x10d5c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d5c8) {
            ctx->pc = 0x10D89Cu;
            goto label_10d89c;
        }
    }
    ctx->pc = 0x10D5D0u;
    // 0x10d5d0: 0x6a620033  ldl         $v0, 0x33($s3)
    ctx->pc = 0x10d5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x10d5d4: 0x6e62002c  ldr         $v0, 0x2C($s3)
    ctx->pc = 0x10d5d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x10d5d8: 0x6a63003b  ldl         $v1, 0x3B($s3)
    ctx->pc = 0x10d5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x10d5dc: 0x6e630034  ldr         $v1, 0x34($s3)
    ctx->pc = 0x10d5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x10d5e0: 0x6a640043  ldl         $a0, 0x43($s3)
    ctx->pc = 0x10d5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x10d5e4: 0x6e64003c  ldr         $a0, 0x3C($s3)
    ctx->pc = 0x10d5e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x10d5e8: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x10d5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x10d5ec: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x10d5ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10d5f0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x10d5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10d5f4: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x10d5f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10d5f8: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x10d5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10d5fc: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x10d5fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10d600: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x10d600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10d604: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x10d604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x10d608: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10d608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d60c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D60Cu;
    {
        const bool branch_taken_0x10d60c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x10D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D60Cu;
        // 0x10d610: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d60c) {
            ctx->pc = 0x10D628u;
            goto label_10d628;
        }
    }
    ctx->pc = 0x10D614u;
    // 0x10d614: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10d614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10d618: 0x0  nop
    ctx->pc = 0x10d618u;
    // NOP
    // 0x10d61c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10d61cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10d620: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10D620u;
    {
        const bool branch_taken_0x10d620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D620u;
        // 0x10d624: 0xc6200014  lwc1        $f0, 0x14($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d620) {
            ctx->pc = 0x10D644u;
            goto label_10d644;
        }
    }
    ctx->pc = 0x10D628u;
label_10d628:
    // 0x10d628: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10d628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10d62c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10d62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10d630: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10d630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10d634: 0x0  nop
    ctx->pc = 0x10d634u;
    // NOP
    // 0x10d638: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10d638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10d63c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x10d63cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x10d640: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x10d640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10d644:
    // 0x10d644: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x10d644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10d648: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x10d648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x10d64c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x10d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x10d650: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x10d650u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x10d654: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x10d654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x10d658: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x10d658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x10d65c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D65Cu;
    {
        const bool branch_taken_0x10d65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d65c) {
            ctx->pc = 0x10D660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D65Cu;
            // 0x10d660: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D678u;
            goto label_10d678;
        }
    }
    ctx->pc = 0x10D664u;
    // 0x10d664: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10d664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d668: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x10d668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x10d66c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x10d66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x10d670: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10D670u;
    {
        const bool branch_taken_0x10d670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D670u;
        // 0x10d674: 0xac62004c  sw          $v0, 0x4C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d670) {
            ctx->pc = 0x10D68Cu;
            goto label_10d68c;
        }
    }
    ctx->pc = 0x10D678u;
label_10d678:
    // 0x10d678: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x10d678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x10d67c: 0x3463fffb  ori         $v1, $v1, 0xFFFB
    ctx->pc = 0x10d67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65531);
    // 0x10d680: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x10d680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x10d684: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10d684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10d688: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x10d688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
label_10d68c:
    // 0x10d68c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d690: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x10d690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10d694: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D694u;
    {
        const bool branch_taken_0x10d694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D694u;
        // 0x10d698: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d694) {
            ctx->pc = 0x10D6A8u;
            goto label_10d6a8;
        }
    }
    ctx->pc = 0x10D69Cu;
    // 0x10d69c: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x10d69cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x10d6a0: 0xc0b6710  jal         func_2D9C40
    ctx->pc = 0x10D6A0u;
    SET_GPR_U32(ctx, 31, 0x10D6A8u);
    ctx->pc = 0x10D6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D6A0u;
    // 0x10d6a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9C40u, 0x10D6A0u, 0x10D6A8u)) {
        return;
    }
    ctx->pc = 0x10D6A8u;
label_10d6a8:
    // 0x10d6a8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x10d6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10d6ac: 0xc043b2a  jal         func_10ECA8
    ctx->pc = 0x10D6ACu;
    SET_GPR_U32(ctx, 31, 0x10D6B4u);
    ctx->pc = 0x10D6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D6ACu;
    // 0x10d6b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ECA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10ECA8u, 0x10D6ACu, 0x10D6B4u)) {
        return;
    }
    ctx->pc = 0x10D6B4u;
label_10d6b4:
    // 0x10d6b4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x10d6b4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x10d6b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d6bc: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x10d6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d6c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10d6c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10d6c4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10d6c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x10d6c8: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x10d6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x10d6cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10d6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d6d0: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x10d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x10d6d4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D6D4u;
    {
        const bool branch_taken_0x10d6d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6D4u;
        // 0x10d6d8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6d4) {
            ctx->pc = 0x10D6F0u;
            goto label_10d6f0;
        }
    }
    ctx->pc = 0x10D6DCu;
    // 0x10d6dc: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x10d6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10d6e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d6e4: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x10d6e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x10d6e8: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10D6E8u;
    SET_GPR_U32(ctx, 31, 0x10D6F0u);
    ctx->pc = 0x10D6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D6E8u;
    // 0x10d6ec: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10D6E8u, 0x10D6F0u)) {
        return;
    }
    ctx->pc = 0x10D6F0u;
label_10d6f0:
    // 0x10d6f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d6f4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x10d6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d6f8: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x10d6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x10d6fc: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x10d6fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
    // 0x10d700: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10d700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10d704: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x10d704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x10d708: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x10d708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x10d70c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x10d70cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10d710: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d714: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x10d714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d718: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x10d718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x10d71c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x10d71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10d720: 0x46150b02  mul.s       $f12, $f1, $f21
    ctx->pc = 0x10d720u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x10d724: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x10d724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10d728: 0x0  nop
    ctx->pc = 0x10d728u;
    // NOP
    // 0x10d72c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x10D72Cu;
    {
        const bool branch_taken_0x10d72c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10d72c) {
            ctx->pc = 0x10D73Cu;
            goto label_10d73c;
        }
    }
    ctx->pc = 0x10D734u;
    // 0x10d734: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10D734u;
    {
        const bool branch_taken_0x10d734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D734u;
        // 0x10d738: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d734) {
            ctx->pc = 0x10D74Cu;
            goto label_10d74c;
        }
    }
    ctx->pc = 0x10D73Cu;
label_10d73c:
    // 0x10d73c: 0x46036034  c.lt.s      $f12, $f3
    ctx->pc = 0x10d73cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10d740: 0x0  nop
    ctx->pc = 0x10d740u;
    // NOP
    // 0x10d744: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10D744u;
    {
        const bool branch_taken_0x10d744 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10d744) {
            ctx->pc = 0x10D748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D744u;
            // 0x10d748: 0x46001b06  mov.s       $f12, $f3 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D74Cu;
            goto label_10d74c;
        }
    }
    ctx->pc = 0x10D74Cu;
label_10d74c:
    // 0x10d74c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d750: 0xe44c0054  swc1        $f12, 0x54($v0)
    ctx->pc = 0x10d750u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x10d754: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10d754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d758: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x10d758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x10d75c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D75Cu;
    {
        const bool branch_taken_0x10d75c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D75Cu;
        // 0x10d760: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d75c) {
            ctx->pc = 0x10D770u;
            goto label_10d770;
        }
    }
    ctx->pc = 0x10D764u;
    // 0x10d764: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10D764u;
    SET_GPR_U32(ctx, 31, 0x10D76Cu);
    ctx->pc = 0x10D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D764u;
    // 0x10d768: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10D764u, 0x10D76Cu)) {
        return;
    }
    ctx->pc = 0x10D76Cu;
label_10d76c:
    // 0x10d76c: 0x0  nop
    ctx->pc = 0x10d76cu;
    // NOP
label_10d770:
    // 0x10d770: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x10d770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x10d774: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x10d774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x10d778: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x10D778u;
    {
        const bool branch_taken_0x10d778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D778u;
        // 0x10d77c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d778) {
            ctx->pc = 0x10D850u;
            goto label_10d850;
        }
    }
    ctx->pc = 0x10D780u;
    // 0x10d780: 0x6a860007  ldl         $a2, 0x7($s4)
    ctx->pc = 0x10d780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x10d784: 0x6e860000  ldr         $a2, 0x0($s4)
    ctx->pc = 0x10d784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x10d788: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x10d788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x10d78c: 0xb0460077  sdl         $a2, 0x77($v0)
    ctx->pc = 0x10d78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10d790: 0xb4460070  sdr         $a2, 0x70($v0)
    ctx->pc = 0x10d790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10d794: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x10d794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x10d798: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10d798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d79c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x10d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x10d7a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D7A0u;
    {
        const bool branch_taken_0x10d7a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7A0u;
        // 0x10d7a4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d7a0) {
            ctx->pc = 0x10D7B8u;
            goto label_10d7b8;
        }
    }
    ctx->pc = 0x10D7A8u;
    // 0x10d7a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10d7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d7ac: 0xc0b66fa  jal         func_2D9BE8
    ctx->pc = 0x10D7ACu;
    SET_GPR_U32(ctx, 31, 0x10D7B4u);
    ctx->pc = 0x10D7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D7ACu;
    // 0x10d7b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9BE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9BE8u, 0x10D7ACu, 0x10D7B4u)) {
        return;
    }
    ctx->pc = 0x10D7B4u;
label_10d7b4:
    // 0x10d7b4: 0x0  nop
    ctx->pc = 0x10d7b4u;
    // NOP
label_10d7b8:
    // 0x10d7b8: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x10d7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10d7bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10d7bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10d7c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10d7c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d7c4: 0x0  nop
    ctx->pc = 0x10d7c4u;
    // NOP
    // 0x10d7c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10d7c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10d7cc: 0x0  nop
    ctx->pc = 0x10d7ccu;
    // NOP
    // 0x10d7d0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x10D7D0u;
    {
        const bool branch_taken_0x10d7d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10d7d0) {
            ctx->pc = 0x10D800u;
            goto label_10d800;
        }
    }
    ctx->pc = 0x10D7D8u;
    // 0x10d7d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d7dc: 0xe4410088  swc1        $f1, 0x88($v0)
    ctx->pc = 0x10d7dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x10d7e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d7e4: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x10d7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x10d7e8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D7E8u;
    {
        const bool branch_taken_0x10d7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7E8u;
        // 0x10d7ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d7e8) {
            ctx->pc = 0x10D800u;
            goto label_10d800;
        }
    }
    ctx->pc = 0x10D7F0u;
    // 0x10d7f0: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x10d7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10d7f4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x10d7f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x10d7f8: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10D7F8u;
    SET_GPR_U32(ctx, 31, 0x10D800u);
    ctx->pc = 0x10D7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D7F8u;
    // 0x10d7fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10D7F8u, 0x10D800u)) {
        return;
    }
    ctx->pc = 0x10D800u;
label_10d800:
    // 0x10d800: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x10d800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10d804: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10d804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10d808: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10d808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d80c: 0x0  nop
    ctx->pc = 0x10d80cu;
    // NOP
    // 0x10d810: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10d810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10d814: 0x0  nop
    ctx->pc = 0x10d814u;
    // NOP
    // 0x10d818: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x10D818u;
    {
        const bool branch_taken_0x10d818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10d818) {
            ctx->pc = 0x10D81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D818u;
            // 0x10d81c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D87Cu;
            goto label_10d87c;
        }
    }
    ctx->pc = 0x10D820u;
    // 0x10d820: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10d820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d824: 0xe441008c  swc1        $f1, 0x8C($v0)
    ctx->pc = 0x10d824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
    // 0x10d828: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10d828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d82c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x10d82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x10d830: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10D830u;
    {
        const bool branch_taken_0x10d830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D830u;
        // 0x10d834: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d830) {
            ctx->pc = 0x10D878u;
            goto label_10d878;
        }
    }
    ctx->pc = 0x10D838u;
    // 0x10d838: 0xc62c001c  lwc1        $f12, 0x1C($s1)
    ctx->pc = 0x10d838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10d83c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x10d83cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x10d840: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10D840u;
    SET_GPR_U32(ctx, 31, 0x10D848u);
    ctx->pc = 0x10D844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D840u;
    // 0x10d844: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10D840u, 0x10D848u)) {
        return;
    }
    ctx->pc = 0x10D848u;
label_10d848:
    // 0x10d848: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10D848u;
    {
        const bool branch_taken_0x10d848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D848u;
        // 0x10d84c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d848) {
            ctx->pc = 0x10D87Cu;
            goto label_10d87c;
        }
    }
    ctx->pc = 0x10D850u;
label_10d850:
    // 0x10d850: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x10d850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d854: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x10d854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x10d858: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10d858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d85c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x10d85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x10d860: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D860u;
    {
        const bool branch_taken_0x10d860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D860u;
        // 0x10d864: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d860) {
            ctx->pc = 0x10D878u;
            goto label_10d878;
        }
    }
    ctx->pc = 0x10D868u;
    // 0x10d868: 0xc62c002c  lwc1        $f12, 0x2C($s1)
    ctx->pc = 0x10d868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10d86c: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10D86Cu;
    SET_GPR_U32(ctx, 31, 0x10D874u);
    ctx->pc = 0x10D870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D86Cu;
    // 0x10d870: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10D86Cu, 0x10D874u)) {
        return;
    }
    ctx->pc = 0x10D874u;
label_10d874:
    // 0x10d874: 0x0  nop
    ctx->pc = 0x10d874u;
    // NOP
label_10d878:
    // 0x10d878: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10d878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10d87c:
    // 0x10d87c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10d87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d880: 0xc0b87b0  jal         func_2E1EC0
    ctx->pc = 0x10D880u;
    SET_GPR_U32(ctx, 31, 0x10D888u);
    ctx->pc = 0x10D884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D880u;
    // 0x10d884: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1EC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1EC0u, 0x10D880u, 0x10D888u)) {
        return;
    }
    ctx->pc = 0x10D888u;
label_10d888:
    // 0x10d888: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10d888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d88c: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x10D88Cu;
    SET_GPR_U32(ctx, 31, 0x10D894u);
    ctx->pc = 0x10D890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D88Cu;
    // 0x10d890: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x10D88Cu, 0x10D894u)) {
        return;
    }
    ctx->pc = 0x10D894u;
label_10d894:
    // 0x10d894: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10D894u;
    {
        const bool branch_taken_0x10d894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D894u;
        // 0x10d898: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d894) {
            ctx->pc = 0x10D8DCu;
            goto label_10d8dc;
        }
    }
    ctx->pc = 0x10D89Cu;
label_10d89c:
    // 0x10d89c: 0xc0765ea  jal         func_1D97A8
    ctx->pc = 0x10D89Cu;
    SET_GPR_U32(ctx, 31, 0x10D8A4u);
    ctx->pc = 0x10D8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D89Cu;
    // 0x10d8a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D97A8u, 0x10D89Cu, 0x10D8A4u)) {
        return;
    }
    ctx->pc = 0x10D8A4u;
label_10d8a4:
    // 0x10d8a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10d8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10d8a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10d8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d8ac: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x10d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x10d8b0: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x10d8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x10d8b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10d8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10d8b8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10d8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10d8bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10d8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10d8c0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x10d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x10d8c4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x10d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x10d8c8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x10d8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x10d8cc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x10d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x10d8d0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x10d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x10d8d4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x10d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_10d8d8:
    // 0x10d8d8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x10d8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10d8dc:
    // 0x10d8dc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x10d8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_10d8e0:
    // 0x10d8e0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x10d8e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10d8e4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x10d8e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d8e8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x10d8e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10d8ec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x10d8ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d8f0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x10d8f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d8f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10d8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d8f8: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x10d8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10d8fc: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x10d8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10d900: 0x3e00008  jr          $ra
    ctx->pc = 0x10D900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D900u;
        // 0x10d904: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D908u;
}
