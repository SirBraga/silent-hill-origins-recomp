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

// Function: sub_00271968
// Address: 0x271968 - 0x2722b8
void sub_00271968_0x271968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271968_0x271968");
#endif

    switch (ctx->pc) {
        case 0x271a18u: goto label_271a18;
        case 0x271a88u: goto label_271a88;
        case 0x271aa8u: goto label_271aa8;
        case 0x271b04u: goto label_271b04;
        case 0x271b38u: goto label_271b38;
        case 0x271b80u: goto label_271b80;
        case 0x271b98u: goto label_271b98;
        case 0x271c68u: goto label_271c68;
        case 0x271d0cu: goto label_271d0c;
        case 0x271d38u: goto label_271d38;
        case 0x271d78u: goto label_271d78;
        case 0x271dc0u: goto label_271dc0;
        case 0x271e00u: goto label_271e00;
        case 0x271e90u: goto label_271e90;
        case 0x271ebcu: goto label_271ebc;
        case 0x271f4cu: goto label_271f4c;
        case 0x271f70u: goto label_271f70;
        case 0x271fa8u: goto label_271fa8;
        case 0x271fd0u: goto label_271fd0;
        case 0x272088u: goto label_272088;
        case 0x2720d8u: goto label_2720d8;
        case 0x272128u: goto label_272128;
        case 0x272178u: goto label_272178;
        case 0x2721c8u: goto label_2721c8;
        case 0x272220u: goto label_272220;
        default: break;
    }

    ctx->pc = 0x271968u;

    // 0x271968: 0x24ccfffd  addiu       $t4, $a2, -0x3
    ctx->pc = 0x271968u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x27196c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x27196cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x271970: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x271970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x271974: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x271974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x271978: 0x16c502a  slt         $t2, $t3, $t4
    ctx->pc = 0x271978u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x27197c: 0xffb601c0  sd          $s6, 0x1C0($sp)
    ctx->pc = 0x27197cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 22));
    // 0x271980: 0x18a100b  movn        $v0, $t4, $t2
    ctx->pc = 0x271980u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12));
    // 0x271984: 0xafa80144  sw          $t0, 0x144($sp)
    ctx->pc = 0x271984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 8));
    // 0x271988: 0x2b0c3  sra         $s6, $v0, 3
    ctx->pc = 0x271988u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 3));
    // 0x27198c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x27198cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x271990: 0x2463c9f8  addiu       $v1, $v1, -0x3608
    ctx->pc = 0x271990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953464));
    // 0x271994: 0x176582a  slt         $t3, $t3, $s6
    ctx->pc = 0x271994u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x271998: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x271998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x27199c: 0xffb701d0  sd          $s7, 0x1D0($sp)
    ctx->pc = 0x27199cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 23));
    // 0x2719a0: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x2719a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x2719a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2719a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2719a8: 0xffb10170  sd          $s1, 0x170($sp)
    ctx->pc = 0x2719a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 17));
    // 0x2719ac: 0xbb00a  movz        $s6, $zero, $t3
    ctx->pc = 0x2719acu;
    if (GPR_U64(ctx, 11) == 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0));
    // 0x2719b0: 0xffbf01f0  sd          $ra, 0x1F0($sp)
    ctx->pc = 0x2719b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 31));
    // 0x2719b4: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x2719b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2719b8: 0xffbe01e0  sd          $fp, 0x1E0($sp)
    ctx->pc = 0x2719b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 30));
    // 0x2719bc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2719bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2719c0: 0xffb501b0  sd          $s5, 0x1B0($sp)
    ctx->pc = 0x2719c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 21));
    // 0x2719c4: 0x24f1ffff  addiu       $s1, $a3, -0x1
    ctx->pc = 0x2719c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2719c8: 0xffb30190  sd          $s3, 0x190($sp)
    ctx->pc = 0x2719c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 19));
    // 0x2719cc: 0xc39023  subu        $s2, $a2, $v1
    ctx->pc = 0x2719ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2719d0: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x2719d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
    // 0x2719d4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2719d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719d8: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x2719d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x2719dc: 0x2d12823  subu        $a1, $s6, $s1
    ctx->pc = 0x2719dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x2719e0: 0xffb401a0  sd          $s4, 0x1A0($sp)
    ctx->pc = 0x2719e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 20));
    // 0x2719e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2719e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719e8: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2719e8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2719ec: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x2719ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x2719f0: 0x2343821  addu        $a3, $s1, $s4
    ctx->pc = 0x2719f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2719f4: 0x4e00019  bltz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x2719F4u;
    {
        const bool branch_taken_0x2719f4 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x2719F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2719F4u;
        // 0x2719f8: 0xafa90148  sw          $t1, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2719f4) {
            ctx->pc = 0x271A5Cu;
            goto label_271a5c;
        }
    }
    ctx->pc = 0x2719FCu;
    // 0x2719fc: 0x2a820000  slti        $v0, $s4, 0x0
    ctx->pc = 0x2719fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x271a00: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x271a00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x271a04: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x271a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x271a08: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x271a08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x271a0c: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x271a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x271a10: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x271a10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x271a14: 0x0  nop
    ctx->pc = 0x271a14u;
    // NOP
label_271a18:
    // 0x271a18: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x271a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x271a1c: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x271A1Cu;
    {
        const bool branch_taken_0x271a1c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x271A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A1Cu;
        // 0x271a20: 0x1221821  addu        $v1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a1c) {
            ctx->pc = 0x271A40u;
            goto label_271a40;
        }
    }
    ctx->pc = 0x271A24u;
    // 0x271a24: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x271a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x271a28: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x271a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x271a2c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x271a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x271a30: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x271a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271a34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x271a34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x271a38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x271A38u;
    {
        const bool branch_taken_0x271a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A38u;
        // 0x271a3c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a38) {
            ctx->pc = 0x271A44u;
            goto label_271a44;
        }
    }
    ctx->pc = 0x271A40u;
label_271a40:
    // 0x271a40: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x271a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_271a44:
    // 0x271a44: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x271a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x271a48: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x271a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x271a4c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x271A4Cu;
    {
        const bool branch_taken_0x271a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A4Cu;
        // 0x271a50: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a4c) {
            ctx->pc = 0x271A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271a18;
        }
    }
    ctx->pc = 0x271A54u;
    // 0x271a54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x271A54u;
    {
        const bool branch_taken_0x271a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A54u;
        // 0x271a58: 0x8fa80154  lw          $t0, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a54) {
            ctx->pc = 0x271A78u;
            goto label_271a78;
        }
    }
    ctx->pc = 0x271A5Cu;
label_271a5c:
    // 0x271a5c: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x271a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x271a60: 0x2a850000  slti        $a1, $s4, 0x0
    ctx->pc = 0x271a60u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x271a64: 0xafa50154  sw          $a1, 0x154($sp)
    ctx->pc = 0x271a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 5));
    // 0x271a68: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x271a68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x271a6c: 0x28c60003  slti        $a2, $a2, 0x3
    ctx->pc = 0x271a6cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x271a70: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x271a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x271a74: 0x8fa80154  lw          $t0, 0x154($sp)
    ctx->pc = 0x271a74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_271a78:
    // 0x271a78: 0x15000021  bnez        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x271A78u;
    {
        const bool branch_taken_0x271a78 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x271A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A78u;
        // 0x271a7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a78) {
            ctx->pc = 0x271B00u;
            goto label_271b00;
        }
    }
    ctx->pc = 0x271A80u;
    // 0x271a80: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x271a80u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x271a84: 0x0  nop
    ctx->pc = 0x271a84u;
    // NOP
label_271a88:
    // 0x271a88: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x271a88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x271a8c: 0x15600015  bnez        $t3, . + 4 + (0x15 << 2)
    ctx->pc = 0x271A8Cu;
    {
        const bool branch_taken_0x271a8c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x271A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A8Cu;
        // 0x271a90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a8c) {
            ctx->pc = 0x271AE4u;
            goto label_271ae4;
        }
    }
    ctx->pc = 0x271A94u;
    // 0x271a94: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x271a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x271a98: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x271a98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x271a9c: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x271a9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x271aa0: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x271aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x271aa4: 0x0  nop
    ctx->pc = 0x271aa4u;
    // NOP
label_271aa8:
    // 0x271aa8: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x271aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x271aac: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x271aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x271ab0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x271ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x271ab4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x271ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x271ab8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x271ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x271abc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x271abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x271ac0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x271ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271ac4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x271ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x271ac8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x271ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271acc: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x271accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x271ad0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x271ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x271ad4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x271AD4u;
    {
        const bool branch_taken_0x271ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AD4u;
        // 0x271ad8: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ad4) {
            ctx->pc = 0x271AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271aa8;
        }
    }
    ctx->pc = 0x271ADCu;
    // 0x271adc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x271ADCu;
    {
        const bool branch_taken_0x271adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271ADCu;
        // 0x271ae0: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271adc) {
            ctx->pc = 0x271AF0u;
            goto label_271af0;
        }
    }
    ctx->pc = 0x271AE4u;
label_271ae4:
    // 0x271ae4: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x271ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x271ae8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x271ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x271aec: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x271aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_271af0:
    // 0x271af0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x271af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271af4: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x271af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x271af8: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x271AF8u;
    {
        const bool branch_taken_0x271af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AF8u;
        // 0x271afc: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271af8) {
            ctx->pc = 0x271A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271a88;
        }
    }
    ctx->pc = 0x271B00u;
label_271b00:
    // 0x271b00: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x271b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_271b04:
    // 0x271b04: 0x10f080  sll         $fp, $s0, 2
    ctx->pc = 0x271b04u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x271b08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x271b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271b0c: 0x2be1021  addu        $v0, $s5, $fp
    ctx->pc = 0x271b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x271b10: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x271B10u;
    {
        const bool branch_taken_0x271b10 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x271B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B10u;
        // 0x271b14: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b10) {
            ctx->pc = 0x271B74u;
            goto label_271b74;
        }
    }
    ctx->pc = 0x271B18u;
    // 0x271b18: 0x27c2fffc  addiu       $v0, $fp, -0x4
    ctx->pc = 0x271b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
    // 0x271b1c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x271b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x271b20: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x271b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x271b24: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x271b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x271b28: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x271b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x271b2c: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x271b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x271b30: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x271b30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271b34: 0x0  nop
    ctx->pc = 0x271b34u;
    // NOP
label_271b38:
    // 0x271b38: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x271b38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x271b3c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x271b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271b40: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x271b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x271b44: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x271b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x271b48: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x271b48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x271b4c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x271b4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x271b50: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x271b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x271b54: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x271b54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x271b58: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x271b58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x271b5c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x271b5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x271b60: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x271b60u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x271b64: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x271b64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x271b68: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x271b68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x271b6c: 0x1ca0fff2  bgtz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x271B6Cu;
    {
        const bool branch_taken_0x271b6c = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x271B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B6Cu;
        // 0x271b70: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b6c) {
            ctx->pc = 0x271B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271b38;
        }
    }
    ctx->pc = 0x271B74u;
label_271b74:
    // 0x271b74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x271b74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x271b78: 0xc09cb3e  jal         func_272CF8
    ctx->pc = 0x271B78u;
    SET_GPR_U32(ctx, 31, 0x271B80u);
    ctx->pc = 0x271B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271B78u;
    // 0x271b7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CF8u, 0x271B78u, 0x271B80u)) {
        return;
    }
    ctx->pc = 0x271B80u;
label_271b80:
    // 0x271b80: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x271b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x271b84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x271b88: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x271b88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x271b8c: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x271b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x271b90: 0xc09b12a  jal         func_26C4A8
    ctx->pc = 0x271B90u;
    SET_GPR_U32(ctx, 31, 0x271B98u);
    ctx->pc = 0x271B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271B90u;
    // 0x271b94: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C4A8u, 0x271B90u, 0x271B98u)) {
        return;
    }
    ctx->pc = 0x271B98u;
label_271b98:
    // 0x271b98: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x271b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x271b9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x271b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271ba0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x271ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x271ba4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x271ba4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x271ba8: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x271ba8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x271bac: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x271bacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x271bb0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x271bb0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271bb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x271bb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x271bb8: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x271BB8u;
    {
        const bool branch_taken_0x271bb8 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x271BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BB8u;
        // 0x271bbc: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271bb8) {
            ctx->pc = 0x271C00u;
            goto label_271c00;
        }
    }
    ctx->pc = 0x271BC0u;
    // 0x271bc0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x271bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x271bc4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x271bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x271bc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x271bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x271bcc: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x271bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x271bd0: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x271bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x271bd4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x271bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x271bd8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x271bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x271bdc: 0x922023  subu        $a0, $a0, $s2
    ctx->pc = 0x271bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x271be0: 0x623007  srav        $a2, $v0, $v1
    ctx->pc = 0x271be0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x271be4: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x271be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x271be8: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x271be8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x271bec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x271becu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x271bf0: 0x822007  srav        $a0, $v0, $a0
    ctx->pc = 0x271bf0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x271bf4: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x271bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
    // 0x271bf8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x271BF8u;
    {
        const bool branch_taken_0x271bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BF8u;
        // 0x271bfc: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271bf8) {
            ctx->pc = 0x271C3Cu;
            goto label_271c3c;
        }
    }
    ctx->pc = 0x271C00u;
label_271c00:
    // 0x271c00: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x271C00u;
    {
        const bool branch_taken_0x271c00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x271C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C00u;
        // 0x271c04: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c00) {
            ctx->pc = 0x271C20u;
            goto label_271c20;
        }
    }
    ctx->pc = 0x271C08u;
    // 0x271c08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x271c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x271c0c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x271c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x271c10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x271c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271c14: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x271c14u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x271c18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x271C18u;
    {
        const bool branch_taken_0x271c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C18u;
        // 0x271c1c: 0xafa4014c  sw          $a0, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c18) {
            ctx->pc = 0x271C3Cu;
            goto label_271c3c;
        }
    }
    ctx->pc = 0x271C20u;
label_271c20:
    // 0x271c20: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x271c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x271c24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x271c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271c28: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x271c28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271c2c: 0x0  nop
    ctx->pc = 0x271c2cu;
    // NOP
    // 0x271c30: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x271C30u;
    {
        const bool branch_taken_0x271c30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C30u;
        // 0x271c34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c30) {
            ctx->pc = 0x271C3Cu;
            goto label_271c3c;
        }
    }
    ctx->pc = 0x271C38u;
    // 0x271c38: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x271c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_271c3c:
    // 0x271c3c: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x271c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x271c40: 0x18600033  blez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x271C40u;
    {
        const bool branch_taken_0x271c40 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x271c40) {
            ctx->pc = 0x271D10u;
            goto label_271d10;
        }
    }
    ctx->pc = 0x271C48u;
    // 0x271c48: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x271c48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x271c4c: 0x1a000011  blez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x271C4Cu;
    {
        const bool branch_taken_0x271c4c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x271C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C4Cu;
        // 0x271c50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c4c) {
            ctx->pc = 0x271C94u;
            goto label_271c94;
        }
    }
    ctx->pc = 0x271C54u;
    // 0x271c54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x271c54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x271c58: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x271c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x271c5c: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x271c5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x271c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c64: 0x0  nop
    ctx->pc = 0x271c64u;
    // NOP
label_271c68:
    // 0x271c68: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x271C68u;
    {
        const bool branch_taken_0x271c68 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x271C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C68u;
        // 0x271c6c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c68) {
            ctx->pc = 0x271C80u;
            goto label_271c80;
        }
    }
    ctx->pc = 0x271C70u;
    // 0x271c70: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x271C70u;
    {
        const bool branch_taken_0x271c70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C70u;
        // 0x271c74: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c70) {
            ctx->pc = 0x271C88u;
            goto label_271c88;
        }
    }
    ctx->pc = 0x271C78u;
    // 0x271c78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x271C78u;
    {
        const bool branch_taken_0x271c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C78u;
        // 0x271c7c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c78) {
            ctx->pc = 0x271C84u;
            goto label_271c84;
        }
    }
    ctx->pc = 0x271C80u;
label_271c80:
    // 0x271c80: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x271c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_271c84:
    // 0x271c84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x271c84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_271c88:
    // 0x271c88: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x271c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x271c8c: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x271C8Cu;
    {
        const bool branch_taken_0x271c8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x271C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C8Cu;
        // 0x271c90: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c8c) {
            ctx->pc = 0x271C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271c68;
        }
    }
    ctx->pc = 0x271C94u;
label_271c94:
    // 0x271c94: 0x1a400013  blez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x271C94u;
    {
        const bool branch_taken_0x271c94 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x271C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C94u;
        // 0x271c98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c94) {
            ctx->pc = 0x271CE4u;
            goto label_271ce4;
        }
    }
    ctx->pc = 0x271C9Cu;
    // 0x271c9c: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x271C9Cu;
    {
        const bool branch_taken_0x271c9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x271CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C9Cu;
        // 0x271ca0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c9c) {
            ctx->pc = 0x271CB4u;
            goto label_271cb4;
        }
    }
    ctx->pc = 0x271CA4u;
    // 0x271ca4: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x271CA4u;
    {
        const bool branch_taken_0x271ca4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x271CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CA4u;
        // 0x271ca8: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ca4) {
            ctx->pc = 0x271CCCu;
            goto label_271ccc;
        }
    }
    ctx->pc = 0x271CACu;
    // 0x271cac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x271CACu;
    {
        const bool branch_taken_0x271cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271cac) {
            ctx->pc = 0x271CECu;
            goto label_271cec;
        }
    }
    ctx->pc = 0x271CB4u;
label_271cb4:
    // 0x271cb4: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x271cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x271cb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x271cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x271cbc: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x271cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x271cc0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x271cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x271cc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x271CC4u;
    {
        const bool branch_taken_0x271cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CC4u;
        // 0x271cc8: 0x3063007f  andi        $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cc4) {
            ctx->pc = 0x271CE0u;
            goto label_271ce0;
        }
    }
    ctx->pc = 0x271CCCu;
label_271ccc:
    // 0x271ccc: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x271cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x271cd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x271cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x271cd4: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x271cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x271cd8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x271cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x271cdc: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x271cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_271ce0:
    // 0x271ce0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x271ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_271ce4:
    // 0x271ce4: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x271ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x271ce8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x271ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_271cec:
    // 0x271cec: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x271CECu;
    {
        const bool branch_taken_0x271cec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x271cec) {
            ctx->pc = 0x271D10u;
            goto label_271d10;
        }
    }
    ctx->pc = 0x271CF4u;
    // 0x271cf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x271cf8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x271cfc: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x271CFCu;
    {
        const bool branch_taken_0x271cfc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CFCu;
        // 0x271d00: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cfc) {
            ctx->pc = 0x271D10u;
            goto label_271d10;
        }
    }
    ctx->pc = 0x271D04u;
    // 0x271d04: 0xc09cb3e  jal         func_272CF8
    ctx->pc = 0x271D04u;
    SET_GPR_U32(ctx, 31, 0x271D0Cu);
    ctx->pc = 0x271D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271D04u;
    // 0x271d08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CF8u, 0x271D04u, 0x271D0Cu)) {
        return;
    }
    ctx->pc = 0x271D0Cu;
label_271d0c:
    // 0x271d0c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x271d0cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_271d10:
    // 0x271d10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x271d10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271d14: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x271d14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271d18: 0x0  nop
    ctx->pc = 0x271d18u;
    // NOP
    // 0x271d1c: 0x45000053  bc1f        . + 4 + (0x53 << 2)
    ctx->pc = 0x271D1Cu;
    {
        const bool branch_taken_0x271d1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D1Cu;
        // 0x271d20: 0x2606ffff  addiu       $a2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d1c) {
            ctx->pc = 0x271E6Cu;
            goto label_271e6c;
        }
    }
    ctx->pc = 0x271D24u;
    // 0x271d24: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x271d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x271d28: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x271D28u;
    {
        const bool branch_taken_0x271d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D28u;
        // 0x271d2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d28) {
            ctx->pc = 0x271D54u;
            goto label_271d54;
        }
    }
    ctx->pc = 0x271D30u;
    // 0x271d30: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x271d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x271d34: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x271d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_271d38:
    // 0x271d38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x271d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x271d3c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x271d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x271d40: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x271d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x271d44: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x271d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x271d48: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x271d48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x271d4c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x271D4Cu;
    {
        const bool branch_taken_0x271d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271d4c) {
            ctx->pc = 0x271D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271d38;
        }
    }
    ctx->pc = 0x271D54u;
label_271d54:
    // 0x271d54: 0x14a00042  bnez        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x271D54u;
    {
        const bool branch_taken_0x271d54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x271D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D54u;
        // 0x271d58: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d54) {
            ctx->pc = 0x271E60u;
            goto label_271e60;
        }
    }
    ctx->pc = 0x271D5Cu;
    // 0x271d5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x271d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x271d60: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x271d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x271d64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x271d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271d68: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x271D68u;
    {
        const bool branch_taken_0x271d68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x271D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D68u;
        // 0x271d6c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d68) {
            ctx->pc = 0x271D9Cu;
            goto label_271d9c;
        }
    }
    ctx->pc = 0x271D70u;
    // 0x271d70: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x271d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x271d74: 0x0  nop
    ctx->pc = 0x271d74u;
    // NOP
label_271d78:
    // 0x271d78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x271d78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x271d7c: 0x2881023  subu        $v0, $s4, $t0
    ctx->pc = 0x271d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x271d80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x271d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x271d84: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x271d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x271d88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x271d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271d8c: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x271D8Cu;
    {
        const bool branch_taken_0x271d8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x271d8c) {
            ctx->pc = 0x271D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271d78;
        }
    }
    ctx->pc = 0x271D94u;
    // 0x271d94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271D94u;
    {
        const bool branch_taken_0x271d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D94u;
        // 0x271d98: 0x2082021  addu        $a0, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d94) {
            ctx->pc = 0x271DA4u;
            goto label_271da4;
        }
    }
    ctx->pc = 0x271D9Cu;
label_271d9c:
    // 0x271d9c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x271d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x271da0: 0x2082021  addu        $a0, $s0, $t0
    ctx->pc = 0x271da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_271da4:
    // 0x271da4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x271da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271da8: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x271da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x271dac: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x271DACu;
    {
        const bool branch_taken_0x271dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DACu;
        // 0x271db0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271dac) {
            ctx->pc = 0x271B04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271b04;
        }
    }
    ctx->pc = 0x271DB4u;
    // 0x271db4: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x271db4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x271db8: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x271db8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x271dbc: 0x0  nop
    ctx->pc = 0x271dbcu;
    // NOP
label_271dc0:
    // 0x271dc0: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x271dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x271dc4: 0x2c61021  addu        $v0, $s6, $a2
    ctx->pc = 0x271dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x271dc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x271dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x271dcc: 0x2265021  addu        $t2, $s1, $a2
    ctx->pc = 0x271dccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x271dd0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x271dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x271dd4: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x271dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x271dd8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x271dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271ddc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x271ddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x271de0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x271de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x271de4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x271de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271de8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x271de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x271dec: 0x15600013  bnez        $t3, . + 4 + (0x13 << 2)
    ctx->pc = 0x271DECu;
    {
        const bool branch_taken_0x271dec = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x271DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DECu;
        // 0x271df0: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271dec) {
            ctx->pc = 0x271E3Cu;
            goto label_271e3c;
        }
    }
    ctx->pc = 0x271DF4u;
    // 0x271df4: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x271df4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x271df8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x271df8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x271dfc: 0x0  nop
    ctx->pc = 0x271dfcu;
    // NOP
label_271e00:
    // 0x271e00: 0x1451023  subu        $v0, $t2, $a1
    ctx->pc = 0x271e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x271e04: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x271e04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x271e08: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x271e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x271e0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x271e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x271e10: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x271e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x271e14: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x271e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x271e18: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x271e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271e1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x271e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x271e20: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x271e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271e24: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x271e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x271e28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x271e28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x271e2c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x271E2Cu;
    {
        const bool branch_taken_0x271e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E2Cu;
        // 0x271e30: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e2c) {
            ctx->pc = 0x271E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271e00;
        }
    }
    ctx->pc = 0x271E34u;
    // 0x271e34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x271E34u;
    {
        const bool branch_taken_0x271e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E34u;
        // 0x271e38: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e34) {
            ctx->pc = 0x271E48u;
            goto label_271e48;
        }
    }
    ctx->pc = 0x271E3Cu;
label_271e3c:
    // 0x271e3c: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x271e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x271e40: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x271e40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x271e44: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x271e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_271e48:
    // 0x271e48: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x271e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e4c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x271e4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x271e50: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x271E50u;
    {
        const bool branch_taken_0x271e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E50u;
        // 0x271e54: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e50) {
            ctx->pc = 0x271DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271dc0;
        }
    }
    ctx->pc = 0x271E58u;
    // 0x271e58: 0x1000ff2a  b           . + 4 + (-0xD6 << 2)
    ctx->pc = 0x271E58u;
    {
        const bool branch_taken_0x271e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E58u;
        // 0x271e5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e58) {
            ctx->pc = 0x271B04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271b04;
        }
    }
    ctx->pc = 0x271E60u;
label_271e60:
    // 0x271e60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x271e60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271e64: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x271e64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271e68: 0x0  nop
    ctx->pc = 0x271e68u;
    // NOP
label_271e6c:
    // 0x271e6c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x271E6Cu;
    {
        const bool branch_taken_0x271e6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E6Cu;
        // 0x271e70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e6c) {
            ctx->pc = 0x271EB4u;
            goto label_271eb4;
        }
    }
    ctx->pc = 0x271E74u;
    // 0x271e74: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x271e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x271e78: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x271e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x271e7c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x271e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x271e80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x271e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271e84: 0x1480002c  bnez        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x271E84u;
    {
        const bool branch_taken_0x271e84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x271E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271E84u;
        // 0x271e88: 0x2652fff8  addiu       $s2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e84) {
            ctx->pc = 0x271F38u;
            goto label_271f38;
        }
    }
    ctx->pc = 0x271E8Cu;
    // 0x271e8c: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x271e8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_271e90:
    // 0x271e90: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x271e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x271e94: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x271e94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x271e98: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x271e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x271e9c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x271e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x271ea0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x271ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271ea4: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x271EA4u;
    {
        const bool branch_taken_0x271ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x271ea4) {
            ctx->pc = 0x271E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271e90;
        }
    }
    ctx->pc = 0x271EACu;
    // 0x271eac: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x271EACu;
    {
        const bool branch_taken_0x271eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271eac) {
            ctx->pc = 0x271F3Cu;
            goto label_271f3c;
        }
    }
    ctx->pc = 0x271EB4u;
label_271eb4:
    // 0x271eb4: 0xc09cb3e  jal         func_272CF8
    ctx->pc = 0x271EB4u;
    SET_GPR_U32(ctx, 31, 0x271EBCu);
    ctx->pc = 0x271EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271EB4u;
    // 0x271eb8: 0x122023  negu        $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CF8u, 0x271EB4u, 0x271EBCu)) {
        return;
    }
    ctx->pc = 0x271EBCu;
label_271ebc:
    // 0x271ebc: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x271ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x271ec0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x271ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271ec4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x271ec4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x271ec8: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x271ec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271ecc: 0x0  nop
    ctx->pc = 0x271eccu;
    // NOP
    // 0x271ed0: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x271ED0u;
    {
        const bool branch_taken_0x271ed0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271ED0u;
        // 0x271ed4: 0x3be2021  addu        $a0, $sp, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ed0) {
            ctx->pc = 0x271F24u;
            goto label_271f24;
        }
    }
    ctx->pc = 0x271ED8u;
    // 0x271ed8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x271ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x271edc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x271edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271ee0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x271ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x271ee4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x271ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x271ee8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x271ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x271eec: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x271eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x271ef0: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x271ef0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x271ef4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x271ef4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x271ef8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x271ef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x271efc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x271efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x271f00: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x271f00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x271f04: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x271f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x271f08: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x271f08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x271f0c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x271f0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x271f10: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x271f10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x271f14: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x271f14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x271f18: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x271f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x271f1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x271F1Cu;
    {
        const bool branch_taken_0x271f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F1Cu;
        // 0x271f20: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f1c) {
            ctx->pc = 0x271F3Cu;
            goto label_271f3c;
        }
    }
    ctx->pc = 0x271F24u;
label_271f24:
    // 0x271f24: 0x3be1021  addu        $v0, $sp, $fp
    ctx->pc = 0x271f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
    // 0x271f28: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x271f28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x271f2c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x271f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x271f30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x271F30u;
    {
        const bool branch_taken_0x271f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F30u;
        // 0x271f34: 0x32710007  andi        $s1, $s3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f30) {
            ctx->pc = 0x271F3Cu;
            goto label_271f3c;
        }
    }
    ctx->pc = 0x271F38u;
label_271f38:
    // 0x271f38: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x271f38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_271f3c:
    // 0x271f3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x271f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x271f40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x271f44: 0xc09cb3e  jal         func_272CF8
    ctx->pc = 0x271F44u;
    SET_GPR_U32(ctx, 31, 0x271F4Cu);
    ctx->pc = 0x271F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F44u;
    // 0x271f48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CF8u, 0x271F44u, 0x271F4Cu)) {
        return;
    }
    ctx->pc = 0x271F4Cu;
label_271f4c:
    // 0x271f4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x271f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f50: 0x4c00011  bltz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x271F50u;
    {
        const bool branch_taken_0x271f50 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x271F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F50u;
        // 0x271f54: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f50) {
            ctx->pc = 0x271F98u;
            goto label_271f98;
        }
    }
    ctx->pc = 0x271F58u;
    // 0x271f58: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x271f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x271f5c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x271f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x271f60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x271f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271f64: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x271f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x271f68: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x271f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x271f6c: 0x0  nop
    ctx->pc = 0x271f6cu;
    // NOP
label_271f70:
    // 0x271f70: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x271f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271f74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x271f74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x271f78: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x271f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x271f7c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x271f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x271f80: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x271f80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x271f84: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x271f84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x271f88: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x271f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x271f8c: 0x4c1fff8  bgez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x271F8Cu;
    {
        const bool branch_taken_0x271f8c = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x271F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F8Cu;
        // 0x271f90: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f8c) {
            ctx->pc = 0x271F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271f70;
        }
    }
    ctx->pc = 0x271F94u;
    // 0x271f94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x271f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271f98:
    // 0x271f98: 0x4c20027  bltzl       $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x271F98u;
    {
        const bool branch_taken_0x271f98 = (GPR_S64(ctx, 6) < 0);
        if (branch_taken_0x271f98) {
            ctx->pc = 0x271F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271F98u;
            // 0x271f9c: 0x8fa30150  lw          $v1, 0x150($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272038u;
            goto label_272038;
        }
    }
    ctx->pc = 0x271FA0u;
    // 0x271fa0: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x271fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x271fa4: 0x0  nop
    ctx->pc = 0x271fa4u;
    // NOP
label_271fa8:
    // 0x271fa8: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x271fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x271fac: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x271facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x271fb0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x271FB0u;
    {
        const bool branch_taken_0x271fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FB0u;
        // 0x271fb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fb0) {
            ctx->pc = 0x272018u;
            goto label_272018;
        }
    }
    ctx->pc = 0x271FB8u;
    // 0x271fb8: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x271fb8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x271fbc: 0x5200017  bltz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x271FBCu;
    {
        const bool branch_taken_0x271fbc = (GPR_S64(ctx, 9) < 0);
        ctx->pc = 0x271FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FBCu;
        // 0x271fc0: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fbc) {
            ctx->pc = 0x27201Cu;
            goto label_27201c;
        }
    }
    ctx->pc = 0x271FC4u;
    // 0x271fc4: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x271fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x271fc8: 0x3c0b006b  lui         $t3, 0x6B
    ctx->pc = 0x271fc8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)107 << 16));
    // 0x271fcc: 0x0  nop
    ctx->pc = 0x271fccu;
    // NOP
label_271fd0:
    // 0x271fd0: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x271fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x271fd4: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x271fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x271fd8: 0x2562ca08  addiu       $v0, $t3, -0x35F8
    ctx->pc = 0x271fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294953480));
    // 0x271fdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x271fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x271fe0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x271fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x271fe4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x271fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x271fe8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x271fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271fec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x271fecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x271ff0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x271ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271ff4: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x271ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x271ff8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x271ff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x271ffc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x271FFCu;
    {
        const bool branch_taken_0x271ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FFCu;
        // 0x272000: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ffc) {
            ctx->pc = 0x272020u;
            goto label_272020;
        }
    }
    ctx->pc = 0x272004u;
    // 0x272004: 0x148102a  slt         $v0, $t2, $t0
    ctx->pc = 0x272004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x272008: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x272008u;
    {
        const bool branch_taken_0x272008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272008u;
        // 0x27200c: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272008) {
            ctx->pc = 0x271FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271fd0;
        }
    }
    ctx->pc = 0x272010u;
    // 0x272010: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x272010u;
    {
        const bool branch_taken_0x272010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272010u;
        // 0x272014: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272010) {
            ctx->pc = 0x272028u;
            goto label_272028;
        }
    }
    ctx->pc = 0x272018u;
label_272018:
    // 0x272018: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x272018u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_27201c:
    // 0x27201c: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x27201cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_272020:
    // 0x272020: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x272020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x272024: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x272024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_272028:
    // 0x272028: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x272028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x27202c: 0x4c1ffde  bgez        $a2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x27202Cu;
    {
        const bool branch_taken_0x27202c = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x272030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27202Cu;
        // 0x272030: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27202c) {
            ctx->pc = 0x271FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271fa8;
        }
    }
    ctx->pc = 0x272034u;
    // 0x272034: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x272034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_272038:
    // 0x272038: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x272038u;
    {
        const bool branch_taken_0x272038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272038u;
        // 0x27203c: 0x8fa40144  lw          $a0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272038) {
            ctx->pc = 0x272058u;
            goto label_272058;
        }
    }
    ctx->pc = 0x272040u;
    // 0x272040: 0x5c80001f  bgtzl       $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x272040u;
    {
        const bool branch_taken_0x272040 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x272040) {
            ctx->pc = 0x272044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272040u;
            // 0x272044: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2720C0u;
            goto label_2720c0;
        }
    }
    ctx->pc = 0x272048u;
    // 0x272048: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x272048u;
    {
        const bool branch_taken_0x272048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272048u;
        // 0x27204c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272048) {
            ctx->pc = 0x272070u;
            goto label_272070;
        }
    }
    ctx->pc = 0x272050u;
    // 0x272050: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x272050u;
    {
        const bool branch_taken_0x272050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272050u;
        // 0x272054: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272050) {
            ctx->pc = 0x272284u;
            goto label_272284;
        }
    }
    ctx->pc = 0x272058u;
label_272058:
    // 0x272058: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x272058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x27205c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27205cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x272060: 0x10a20040  beq         $a1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x272060u;
    {
        const bool branch_taken_0x272060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x272064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272060u;
        // 0x272064: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272060) {
            ctx->pc = 0x272164u;
            goto label_272164;
        }
    }
    ctx->pc = 0x272068u;
    // 0x272068: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x272068u;
    {
        const bool branch_taken_0x272068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272068u;
        // 0x27206c: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272068) {
            ctx->pc = 0x272284u;
            goto label_272284;
        }
    }
    ctx->pc = 0x272070u;
label_272070:
    // 0x272070: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x272070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272074: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x272074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x272078: 0x4c2000b  bltzl       $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x272078u;
    {
        const bool branch_taken_0x272078 = (GPR_S64(ctx, 6) < 0);
        if (branch_taken_0x272078) {
            ctx->pc = 0x27207Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272078u;
            // 0x27207c: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2720A8u;
            goto label_2720a8;
        }
    }
    ctx->pc = 0x272080u;
    // 0x272080: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x272080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x272084: 0x0  nop
    ctx->pc = 0x272084u;
    // NOP
label_272088:
    // 0x272088: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x272088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x27208c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x27208cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x272090: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x272090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x272094: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x272094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272098: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x272098u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27209c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27209Cu;
    {
        const bool branch_taken_0x27209c = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x27209c) {
            ctx->pc = 0x272088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272088;
        }
    }
    ctx->pc = 0x2720A4u;
    // 0x2720a4: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x2720a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_2720a8:
    // 0x2720a8: 0x8fa6014c  lw          $a2, 0x14C($sp)
    ctx->pc = 0x2720a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2720ac: 0x10c00074  beqz        $a2, . + 4 + (0x74 << 2)
    ctx->pc = 0x2720ACu;
    {
        const bool branch_taken_0x2720ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720ACu;
        // 0x2720b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720ac) {
            ctx->pc = 0x272280u;
            goto label_272280;
        }
    }
    ctx->pc = 0x2720B4u;
    // 0x2720b4: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2720b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x2720b8: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2720B8u;
    {
        const bool branch_taken_0x2720b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720B8u;
        // 0x2720bc: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720b8) {
            ctx->pc = 0x272280u;
            goto label_272280;
        }
    }
    ctx->pc = 0x2720C0u;
label_2720c0:
    // 0x2720c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2720c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2720c4: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2720C4u;
    {
        const bool branch_taken_0x2720c4 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2720C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720C4u;
        // 0x2720c8: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720c4) {
            ctx->pc = 0x2720FCu;
            goto label_2720fc;
        }
    }
    ctx->pc = 0x2720CCu;
    // 0x2720cc: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2720ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2720d0: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x2720d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x2720d4: 0x0  nop
    ctx->pc = 0x2720d4u;
    // NOP
label_2720d8:
    // 0x2720d8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2720d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2720dc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2720dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2720e0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2720e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2720e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2720e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2720e8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2720e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2720ec: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2720ECu;
    {
        const bool branch_taken_0x2720ec = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x2720ec) {
            ctx->pc = 0x2720D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2720d8;
        }
    }
    ctx->pc = 0x2720F4u;
    // 0x2720f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2720F4u;
    {
        const bool branch_taken_0x2720f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2720F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720F4u;
        // 0x2720f8: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2720f4) {
            ctx->pc = 0x272104u;
            goto label_272104;
        }
    }
    ctx->pc = 0x2720FCu;
label_2720fc:
    // 0x2720fc: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x2720fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x272100: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x272100u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_272104:
    // 0x272104: 0x8fa8014c  lw          $t0, 0x14C($sp)
    ctx->pc = 0x272104u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x272108: 0x51000004  beql        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x272108u;
    {
        const bool branch_taken_0x272108 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x272108) {
            ctx->pc = 0x27210Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272108u;
            // 0x27210c: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27211Cu;
            goto label_27211c;
        }
    }
    ctx->pc = 0x272110u;
    // 0x272110: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x272110u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x272114: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x272114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x272118: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x272118u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_27211c:
    // 0x27211c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x27211Cu;
    {
        const bool branch_taken_0x27211c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27211Cu;
        // 0x272120: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27211c) {
            ctx->pc = 0x272148u;
            goto label_272148;
        }
    }
    ctx->pc = 0x272124u;
    // 0x272124: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x272124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_272128:
    // 0x272128: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x272128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x27212c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x27212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x272130: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x272130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x272134: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x272134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272138: 0x206182a  slt         $v1, $s0, $a2
    ctx->pc = 0x272138u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x27213c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27213cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x272140: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x272140u;
    {
        const bool branch_taken_0x272140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x272140) {
            ctx->pc = 0x272128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272128;
        }
    }
    ctx->pc = 0x272148u;
label_272148:
    // 0x272148: 0xe6e20004  swc1        $f2, 0x4($s7)
    ctx->pc = 0x272148u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x27214c: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x27214cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x272150: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x272150u;
    {
        const bool branch_taken_0x272150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272150u;
        // 0x272154: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272150) {
            ctx->pc = 0x272280u;
            goto label_272280;
        }
    }
    ctx->pc = 0x272158u;
    // 0x272158: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x272158u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x27215c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x27215Cu;
    {
        const bool branch_taken_0x27215c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27215Cu;
        // 0x272160: 0xe6e00004  swc1        $f0, 0x4($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27215c) {
            ctx->pc = 0x272280u;
            goto label_272280;
        }
    }
    ctx->pc = 0x272164u;
label_272164:
    // 0x272164: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x272164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272168: 0x18c00013  blez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x272168u;
    {
        const bool branch_taken_0x272168 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x27216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272168u;
        // 0x27216c: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272168) {
            ctx->pc = 0x2721B8u;
            goto label_2721b8;
        }
    }
    ctx->pc = 0x272170u;
    // 0x272170: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x272170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x272174: 0x0  nop
    ctx->pc = 0x272174u;
    // NOP
label_272178:
    // 0x272178: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x272178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x27217c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x27217cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x272180: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x272180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x272184: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x272184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x272188: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x272188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x27218c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x27218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272190: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x272190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272194: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x272194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272198: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x272198u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27219c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x27219cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2721a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2721a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2721a4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2721a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2721a8: 0x1cc0fff3  bgtz        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x2721A8u;
    {
        const bool branch_taken_0x2721a8 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x2721ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721A8u;
        // 0x2721ac: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2721a8) {
            ctx->pc = 0x272178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272178;
        }
    }
    ctx->pc = 0x2721B0u;
    // 0x2721b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2721b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2721b4: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x2721b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_2721b8:
    // 0x2721b8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2721B8u;
    {
        const bool branch_taken_0x2721b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2721b8) {
            ctx->pc = 0x2721BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2721B8u;
            // 0x2721bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272208u;
            goto label_272208;
        }
    }
    ctx->pc = 0x2721C0u;
    // 0x2721c0: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2721c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2721c4: 0x0  nop
    ctx->pc = 0x2721c4u;
    // NOP
label_2721c8:
    // 0x2721c8: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x2721c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2721cc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2721ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2721d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2721d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2721d4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2721d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2721d8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2721d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2721dc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2721dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2721e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2721e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2721e4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2721e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2721e8: 0x28c50002  slti        $a1, $a2, 0x2
    ctx->pc = 0x2721e8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2721ec: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x2721ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2721f0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2721f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2721f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2721f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2721f8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2721f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2721fc: 0x10a0fff2  beqz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2721FCu;
    {
        const bool branch_taken_0x2721fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x272200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721FCu;
        // 0x272200: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2721fc) {
            ctx->pc = 0x2721C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2721c8;
        }
    }
    ctx->pc = 0x272204u;
    // 0x272204: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x272204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272208:
    // 0x272208: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x272208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27220c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x27220cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x272210: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x272210u;
    {
        const bool branch_taken_0x272210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272210u;
        // 0x272214: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x272210) {
            ctx->pc = 0x272248u;
            goto label_272248;
        }
    }
    ctx->pc = 0x272218u;
    // 0x272218: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x272218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x27221c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x27221cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272220:
    // 0x272220: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x272220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x272224: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x272224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x272228: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x272228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x27222c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272230: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x272230u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x272234: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x272234u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x272238: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x272238u;
    {
        const bool branch_taken_0x272238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x272238) {
            ctx->pc = 0x272220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272220;
        }
    }
    ctx->pc = 0x272240u;
    // 0x272240: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x272240u;
    {
        const bool branch_taken_0x272240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272240u;
        // 0x272244: 0x8fa3014c  lw          $v1, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272240) {
            ctx->pc = 0x272250u;
            goto label_272250;
        }
    }
    ctx->pc = 0x272248u;
label_272248:
    // 0x272248: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x272248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27224c: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x27224cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_272250:
    // 0x272250: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x272250u;
    {
        const bool branch_taken_0x272250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x272250) {
            ctx->pc = 0x272254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272250u;
            // 0x272254: 0x46001807  neg.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x272268u;
            goto label_272268;
        }
    }
    ctx->pc = 0x272258u;
    // 0x272258: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x272258u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x27225c: 0xe6e30000  swc1        $f3, 0x0($s7)
    ctx->pc = 0x27225cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x272260: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x272260u;
    {
        const bool branch_taken_0x272260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272260u;
        // 0x272264: 0xe6e10004  swc1        $f1, 0x4($s7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x272260) {
            ctx->pc = 0x27227Cu;
            goto label_27227c;
        }
    }
    ctx->pc = 0x272268u;
label_272268:
    // 0x272268: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x272268u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x27226c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x27226cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x272270: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x272270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x272274: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x272274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x272278: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x272278u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_27227c:
    // 0x27227c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27227cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272280:
    // 0x272280: 0xdfbf01f0  ld          $ra, 0x1F0($sp)
    ctx->pc = 0x272280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
label_272284:
    // 0x272284: 0xdfbe01e0  ld          $fp, 0x1E0($sp)
    ctx->pc = 0x272284u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x272288: 0xdfb701d0  ld          $s7, 0x1D0($sp)
    ctx->pc = 0x272288u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x27228c: 0xdfb601c0  ld          $s6, 0x1C0($sp)
    ctx->pc = 0x27228cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x272290: 0xdfb501b0  ld          $s5, 0x1B0($sp)
    ctx->pc = 0x272290u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x272294: 0xdfb401a0  ld          $s4, 0x1A0($sp)
    ctx->pc = 0x272294u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x272298: 0xdfb30190  ld          $s3, 0x190($sp)
    ctx->pc = 0x272298u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x27229c: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x27229cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2722a0: 0xdfb10170  ld          $s1, 0x170($sp)
    ctx->pc = 0x2722a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2722a4: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x2722a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2722a8: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x2722a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2722ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2722ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2722B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722ACu;
        // 0x2722b0: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2722ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2722B4u;
    // 0x2722b4: 0x0  nop
    ctx->pc = 0x2722b4u;
    // NOP
    ctx->pc = 0x2722b8u;
}
