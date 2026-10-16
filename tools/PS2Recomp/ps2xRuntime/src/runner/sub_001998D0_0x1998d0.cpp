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

// Function: sub_001998D0
// Address: 0x1998d0 - 0x199ab8
void sub_001998D0_0x1998d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001998D0_0x1998d0");
#endif

    switch (ctx->pc) {
        case 0x1998f0u: goto label_1998f0;
        case 0x199908u: goto label_199908;
        case 0x19993cu: goto label_19993c;
        case 0x199974u: goto label_199974;
        case 0x199980u: goto label_199980;
        case 0x1999a0u: goto label_1999a0;
        case 0x1999acu: goto label_1999ac;
        case 0x1999d0u: goto label_1999d0;
        case 0x1999dcu: goto label_1999dc;
        case 0x199a00u: goto label_199a00;
        case 0x199a08u: goto label_199a08;
        case 0x199a20u: goto label_199a20;
        case 0x199a50u: goto label_199a50;
        case 0x199a7cu: goto label_199a7c;
        case 0x199a98u: goto label_199a98;
        default: break;
    }

    ctx->pc = 0x1998d0u;

    // 0x1998d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1998d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1998d4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1998d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1998d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1998d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1998dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1998dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998e0: 0x8c468100  lw          $a2, -0x7F00($v0)
    ctx->pc = 0x1998e0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6F8100u));
    // 0x1998e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1998e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1998e8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1998E8u;
    SET_GPR_U32(ctx, 31, 0x1998F0u);
    ctx->pc = 0x1998ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1998E8u;
    // 0x1998ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1998E8u, 0x1998F0u)) {
        return;
    }
    ctx->pc = 0x1998F0u;
label_1998f0:
    // 0x1998f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1998f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1998f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1998f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1998f8: 0x5040006c  beql        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x1998F8u;
    {
        const bool branch_taken_0x1998f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1998f8) {
            ctx->pc = 0x1998FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1998F8u;
            // 0x1998fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199AACu;
            goto label_199aac;
        }
    }
    ctx->pc = 0x199900u;
    // 0x199900: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x199900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199904: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x199904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_199908:
    // 0x199908: 0x2c83000c  sltiu       $v1, $a0, 0xC
    ctx->pc = 0x199908u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x19990c: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x19990Cu;
    {
        const bool branch_taken_0x19990c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19990Cu;
        // 0x199910: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19990c) {
            ctx->pc = 0x199A7Cu;
            goto label_199a7c;
        }
    }
    ctx->pc = 0x199914u;
    // 0x199914: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x199914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x199918: 0x24429d90  addiu       $v0, $v0, -0x6270
    ctx->pc = 0x199918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942096));
    // 0x19991c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19991cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x199920: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x199920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199924: 0x800008  jr          $a0
    ctx->pc = 0x199924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19992Cu: goto label_19992c;
            case 0x199964u: goto label_199964;
            case 0x199990u: goto label_199990;
            case 0x1999C0u: goto label_1999c0;
            case 0x1999F0u: goto label_1999f0;
            case 0x199A08u: goto label_199a08;
            case 0x199A18u: goto label_199a18;
            case 0x199A28u: goto label_199a28;
            case 0x199A38u: goto label_199a38;
            case 0x199A58u: goto label_199a58;
            case 0x199A68u: goto label_199a68;
            case 0x199A7Cu: goto label_199a7c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199924u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19992Cu;
label_19992c:
    // 0x19992c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199930: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x199930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199934: 0xc076642  jal         func_1D9908
    ctx->pc = 0x199934u;
    SET_GPR_U32(ctx, 31, 0x19993Cu);
    ctx->pc = 0x199938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199934u;
    // 0x199938: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9908u, 0x199934u, 0x19993Cu)) {
        return;
    }
    ctx->pc = 0x19993Cu;
label_19993c:
    // 0x19993c: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x19993cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199940: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x199940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x199944: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x199944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x199948: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x199948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19994c: 0x0  nop
    ctx->pc = 0x19994cu;
    // NOP
    // 0x199950: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x199950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x199954: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x199954u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x199958: 0xe44106a0  swc1        $f1, 0x6A0($v0)
    ctx->pc = 0x199958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1696), bits); }
    // 0x19995c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x19995Cu;
    {
        const bool branch_taken_0x19995c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19995Cu;
        // 0x199960: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19995c) {
            ctx->pc = 0x199A80u;
            goto label_199a80;
        }
    }
    ctx->pc = 0x199964u;
label_199964:
    // 0x199964: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x199964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199968: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x199968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19996c: 0xc076646  jal         func_1D9918
    ctx->pc = 0x19996Cu;
    SET_GPR_U32(ctx, 31, 0x199974u);
    ctx->pc = 0x199970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19996Cu;
    // 0x199970: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9918u, 0x19996Cu, 0x199974u)) {
        return;
    }
    ctx->pc = 0x199974u;
label_199974:
    // 0x199974: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x199974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199978: 0xc076646  jal         func_1D9918
    ctx->pc = 0x199978u;
    SET_GPR_U32(ctx, 31, 0x199980u);
    ctx->pc = 0x19997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199978u;
    // 0x19997c: 0xe4400080  swc1        $f0, 0x80($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9918u, 0x199978u, 0x199980u)) {
        return;
    }
    ctx->pc = 0x199980u;
label_199980:
    // 0x199980: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x199980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x199984: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x199984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x199988: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x199988u;
    {
        const bool branch_taken_0x199988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199988u;
        // 0x19998c: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199988) {
            ctx->pc = 0x199A7Cu;
            goto label_199a7c;
        }
    }
    ctx->pc = 0x199990u;
label_199990:
    // 0x199990: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x199990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199994: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x199994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199998: 0xc076646  jal         func_1D9918
    ctx->pc = 0x199998u;
    SET_GPR_U32(ctx, 31, 0x1999A0u);
    ctx->pc = 0x19999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199998u;
    // 0x19999c: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9918u, 0x199998u, 0x1999A0u)) {
        return;
    }
    ctx->pc = 0x1999A0u;
label_1999a0:
    // 0x1999a0: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x1999a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1999a4: 0xc076646  jal         func_1D9918
    ctx->pc = 0x1999A4u;
    SET_GPR_U32(ctx, 31, 0x1999ACu);
    ctx->pc = 0x1999A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1999A4u;
    // 0x1999a8: 0xe4400084  swc1        $f0, 0x84($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9918u, 0x1999A4u, 0x1999ACu)) {
        return;
    }
    ctx->pc = 0x1999ACu;
label_1999ac:
    // 0x1999ac: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x1999acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1999b0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1999b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1999b4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1999B4u;
    {
        const bool branch_taken_0x1999b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1999B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999B4u;
        // 0x1999b8: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1999b4) {
            ctx->pc = 0x199A7Cu;
            goto label_199a7c;
        }
    }
    ctx->pc = 0x1999BCu;
    // 0x1999bc: 0x0  nop
    ctx->pc = 0x1999bcu;
    // NOP
label_1999c0:
    // 0x1999c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1999c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1999c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1999c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1999c8: 0xc076646  jal         func_1D9918
    ctx->pc = 0x1999C8u;
    SET_GPR_U32(ctx, 31, 0x1999D0u);
    ctx->pc = 0x1999CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1999C8u;
    // 0x1999cc: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9918u, 0x1999C8u, 0x1999D0u)) {
        return;
    }
    ctx->pc = 0x1999D0u;
label_1999d0:
    // 0x1999d0: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x1999d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1999d4: 0xc076646  jal         func_1D9918
    ctx->pc = 0x1999D4u;
    SET_GPR_U32(ctx, 31, 0x1999DCu);
    ctx->pc = 0x1999D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1999D4u;
    // 0x1999d8: 0xe440007c  swc1        $f0, 0x7C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9918u, 0x1999D4u, 0x1999DCu)) {
        return;
    }
    ctx->pc = 0x1999DCu;
label_1999dc:
    // 0x1999dc: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x1999dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1999e0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1999e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1999e4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1999E4u;
    {
        const bool branch_taken_0x1999e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1999E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999E4u;
        // 0x1999e8: 0xac430088  sw          $v1, 0x88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1999e4) {
            ctx->pc = 0x199A7Cu;
            goto label_199a7c;
        }
    }
    ctx->pc = 0x1999ECu;
    // 0x1999ec: 0x0  nop
    ctx->pc = 0x1999ecu;
    // NOP
label_1999f0:
    // 0x1999f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1999f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1999f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1999f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999f8: 0xc0667ba  jal         func_199EE8
    ctx->pc = 0x1999F8u;
    SET_GPR_U32(ctx, 31, 0x199A00u);
    ctx->pc = 0x1999FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1999F8u;
    // 0x1999fc: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199EE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199EE8u, 0x1999F8u, 0x199A00u)) {
        return;
    }
    ctx->pc = 0x199A00u;
label_199a00:
    // 0x199a00: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x199A00u;
    {
        const bool branch_taken_0x199a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A00u;
        // 0x199a04: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a00) {
            ctx->pc = 0x199A80u;
            goto label_199a80;
        }
    }
    ctx->pc = 0x199A08u;
label_199a08:
    // 0x199a08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x199a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199a0c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x199a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x199a10: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x199A10u;
    {
        const bool branch_taken_0x199a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A10u;
        // 0x199a14: 0xae030058  sw          $v1, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a10) {
            ctx->pc = 0x199A7Cu;
            goto label_199a7c;
        }
    }
    ctx->pc = 0x199A18u;
label_199a18:
    // 0x199a18: 0xc076604  jal         func_1D9810
    ctx->pc = 0x199A18u;
    SET_GPR_U32(ctx, 31, 0x199A20u);
    ctx->pc = 0x1D9810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9810u, 0x199A18u, 0x199A20u)) {
        return;
    }
    ctx->pc = 0x199A20u;
label_199a20:
    // 0x199a20: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x199A20u;
    {
        const bool branch_taken_0x199a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A20u;
        // 0x199a24: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a20) {
            ctx->pc = 0x199A80u;
            goto label_199a80;
        }
    }
    ctx->pc = 0x199A28u;
label_199a28:
    // 0x199a28: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x199a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199a2c: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x199a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x199a30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x199A30u;
    {
        const bool branch_taken_0x199a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A30u;
        // 0x199a34: 0x26050068  addiu       $a1, $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a30) {
            ctx->pc = 0x199A44u;
            goto label_199a44;
        }
    }
    ctx->pc = 0x199A38u;
label_199a38:
    // 0x199a38: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x199a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199a3c: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x199a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x199a40: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x199a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_199a44:
    // 0x199a44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a48: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x199A48u;
    SET_GPR_U32(ctx, 31, 0x199A50u);
    ctx->pc = 0x199A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199A48u;
    // 0x199a4c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x199A48u, 0x199A50u)) {
        return;
    }
    ctx->pc = 0x199A50u;
label_199a50:
    // 0x199a50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x199A50u;
    {
        const bool branch_taken_0x199a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A50u;
        // 0x199a54: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a50) {
            ctx->pc = 0x199A80u;
            goto label_199a80;
        }
    }
    ctx->pc = 0x199A58u;
label_199a58:
    // 0x199a58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x199a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199a5c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x199a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199a60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x199A60u;
    {
        const bool branch_taken_0x199a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A60u;
        // 0x199a64: 0xe600005c  swc1        $f0, 0x5C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a60) {
            ctx->pc = 0x199A7Cu;
            goto label_199a7c;
        }
    }
    ctx->pc = 0x199A68u;
label_199a68:
    // 0x199a68: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x199a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199a6c: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x199a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x199a70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a74: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x199A74u;
    SET_GPR_U32(ctx, 31, 0x199A7Cu);
    ctx->pc = 0x199A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199A74u;
    // 0x199a78: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x199A74u, 0x199A7Cu)) {
        return;
    }
    ctx->pc = 0x199A7Cu;
label_199a7c:
    // 0x199a7c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x199a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_199a80:
    // 0x199a80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x199a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x199a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199a88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199a8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x199a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x199a90: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x199A90u;
    SET_GPR_U32(ctx, 31, 0x199A98u);
    ctx->pc = 0x199A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199A90u;
    // 0x199a94: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x199A90u, 0x199A98u)) {
        return;
    }
    ctx->pc = 0x199A98u;
label_199a98:
    // 0x199a98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x199a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199a9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199aa0: 0x5460ff99  bnel        $v1, $zero, . + 4 + (-0x67 << 2)
    ctx->pc = 0x199AA0u;
    {
        const bool branch_taken_0x199aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199aa0) {
            ctx->pc = 0x199AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199AA0u;
            // 0x199aa4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199908;
        }
    }
    ctx->pc = 0x199AA8u;
    // 0x199aa8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x199aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_199aac:
    // 0x199aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x199aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x199AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AB0u;
        // 0x199ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199AB8u;
}
