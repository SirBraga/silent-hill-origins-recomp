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

// Function: sub_001A4FF0
// Address: 0x1a4ff0 - 0x1a5140
void sub_001A4FF0_0x1a4ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4FF0_0x1a4ff0");
#endif

    switch (ctx->pc) {
        case 0x1a500cu: goto label_1a500c;
        case 0x1a5020u: goto label_1a5020;
        case 0x1a5038u: goto label_1a5038;
        case 0x1a5070u: goto label_1a5070;
        case 0x1a5080u: goto label_1a5080;
        case 0x1a509cu: goto label_1a509c;
        case 0x1a50acu: goto label_1a50ac;
        case 0x1a50c8u: goto label_1a50c8;
        case 0x1a50d8u: goto label_1a50d8;
        case 0x1a5118u: goto label_1a5118;
        default: break;
    }

    ctx->pc = 0x1a4ff0u;

    // 0x1a4ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a4ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a4ff4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a4ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1a4ff8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a4ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a4ffc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a4ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5000: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5004: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x1A5004u;
    SET_GPR_U32(ctx, 31, 0x1A500Cu);
    ctx->pc = 0x1A5008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5004u;
    // 0x1a5008: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x1A5004u, 0x1A500Cu)) {
        return;
    }
    ctx->pc = 0x1A500Cu;
label_1a500c:
    // 0x1a500c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1a500cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1a5010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a5010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5014: 0x8c468198  lw          $a2, -0x7E68($v0)
    ctx->pc = 0x1a5014u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6F8198u));
    // 0x1a5018: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1A5018u;
    SET_GPR_U32(ctx, 31, 0x1A5020u);
    ctx->pc = 0x1A501Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5018u;
    // 0x1a501c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1A5018u, 0x1A5020u)) {
        return;
    }
    ctx->pc = 0x1A5020u;
label_1a5020:
    // 0x1a5020: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a5020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5024: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a5024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a5028: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1A5028u;
    {
        const bool branch_taken_0x1a5028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5028u;
        // 0x1a502c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5028) {
            ctx->pc = 0x1A512Cu;
            goto label_1a512c;
        }
    }
    ctx->pc = 0x1A5030u;
    // 0x1a5030: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a5030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5034: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1a5034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a5038:
    // 0x1a5038: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x1a5038u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1a503c: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1A503Cu;
    {
        const bool branch_taken_0x1a503c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A503Cu;
        // 0x1a5040: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a503c) {
            ctx->pc = 0x1A50FCu;
            goto label_1a50fc;
        }
    }
    ctx->pc = 0x1A5044u;
    // 0x1a5044: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a5044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a5048: 0x2442b210  addiu       $v0, $v0, -0x4DF0
    ctx->pc = 0x1a5048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947344));
    // 0x1a504c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a504cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5050: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a5050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a5054: 0x800008  jr          $a0
    ctx->pc = 0x1A5054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A505Cu: goto label_1a505c;
            case 0x1A5088u: goto label_1a5088;
            case 0x1A50B4u: goto label_1a50b4;
            case 0x1A50E0u: goto label_1a50e0;
            case 0x1A50F0u: goto label_1a50f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5054u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A505Cu;
label_1a505c:
    // 0x1a505c: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x1a505cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1a5060: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5060u;
    {
        const bool branch_taken_0x1a5060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5060) {
            ctx->pc = 0x1A5064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5060u;
            // 0x1a5064: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5074u;
            goto label_1a5074;
        }
    }
    ctx->pc = 0x1A5068u;
    // 0x1a5068: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1A5068u;
    SET_GPR_U32(ctx, 31, 0x1A5070u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1A5068u, 0x1A5070u)) {
        return;
    }
    ctx->pc = 0x1A5070u;
label_1a5070:
    // 0x1a5070: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1a5070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5074:
    // 0x1a5074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5078: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1A5078u;
    SET_GPR_U32(ctx, 31, 0x1A5080u);
    ctx->pc = 0x1A507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5078u;
    // 0x1a507c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1A5078u, 0x1A5080u)) {
        return;
    }
    ctx->pc = 0x1A5080u;
label_1a5080:
    // 0x1a5080: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A5080u;
    {
        const bool branch_taken_0x1a5080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5080u;
        // 0x1a5084: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5080) {
            ctx->pc = 0x1A50FCu;
            goto label_1a50fc;
        }
    }
    ctx->pc = 0x1A5088u;
label_1a5088:
    // 0x1a5088: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x1a5088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1a508c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A508Cu;
    {
        const bool branch_taken_0x1a508c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a508c) {
            ctx->pc = 0x1A5090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A508Cu;
            // 0x1a5090: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A50A0u;
            goto label_1a50a0;
        }
    }
    ctx->pc = 0x1A5094u;
    // 0x1a5094: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1A5094u;
    SET_GPR_U32(ctx, 31, 0x1A509Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1A5094u, 0x1A509Cu)) {
        return;
    }
    ctx->pc = 0x1A509Cu;
label_1a509c:
    // 0x1a509c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1a509cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a50a0:
    // 0x1a50a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a50a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a50a4: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1A50A4u;
    SET_GPR_U32(ctx, 31, 0x1A50ACu);
    ctx->pc = 0x1A50A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A50A4u;
    // 0x1a50a8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1A50A4u, 0x1A50ACu)) {
        return;
    }
    ctx->pc = 0x1A50ACu;
label_1a50ac:
    // 0x1a50ac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A50ACu;
    {
        const bool branch_taken_0x1a50ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50ACu;
        // 0x1a50b0: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a50ac) {
            ctx->pc = 0x1A50FCu;
            goto label_1a50fc;
        }
    }
    ctx->pc = 0x1A50B4u;
label_1a50b4:
    // 0x1a50b4: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x1a50b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1a50b8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A50B8u;
    {
        const bool branch_taken_0x1a50b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a50b8) {
            ctx->pc = 0x1A50BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A50B8u;
            // 0x1a50bc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A50CCu;
            goto label_1a50cc;
        }
    }
    ctx->pc = 0x1A50C0u;
    // 0x1a50c0: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1A50C0u;
    SET_GPR_U32(ctx, 31, 0x1A50C8u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1A50C0u, 0x1A50C8u)) {
        return;
    }
    ctx->pc = 0x1A50C8u;
label_1a50c8:
    // 0x1a50c8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1a50c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a50cc:
    // 0x1a50cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a50ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a50d0: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1A50D0u;
    SET_GPR_U32(ctx, 31, 0x1A50D8u);
    ctx->pc = 0x1A50D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A50D0u;
    // 0x1a50d4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1A50D0u, 0x1A50D8u)) {
        return;
    }
    ctx->pc = 0x1A50D8u;
label_1a50d8:
    // 0x1a50d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A50D8u;
    {
        const bool branch_taken_0x1a50d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50D8u;
        // 0x1a50dc: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a50d8) {
            ctx->pc = 0x1A50FCu;
            goto label_1a50fc;
        }
    }
    ctx->pc = 0x1A50E0u;
label_1a50e0:
    // 0x1a50e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a50e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a50e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a50e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A50E8u;
    {
        const bool branch_taken_0x1a50e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A50ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50E8u;
        // 0x1a50ec: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a50e8) {
            ctx->pc = 0x1A50FCu;
            goto label_1a50fc;
        }
    }
    ctx->pc = 0x1A50F0u;
label_1a50f0:
    // 0x1a50f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a50f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a50f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a50f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a50f8: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x1a50f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_1a50fc:
    // 0x1a50fc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a50fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5100: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a5100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5104: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a5104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5108: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a5108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a510c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a510cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5110: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1A5110u;
    SET_GPR_U32(ctx, 31, 0x1A5118u);
    ctx->pc = 0x1A5114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5110u;
    // 0x1a5114: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1A5110u, 0x1A5118u)) {
        return;
    }
    ctx->pc = 0x1A5118u;
label_1a5118:
    // 0x1a5118: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a5118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a511c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a511cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5120: 0x5460ffc5  bnel        $v1, $zero, . + 4 + (-0x3B << 2)
    ctx->pc = 0x1A5120u;
    {
        const bool branch_taken_0x1a5120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5120) {
            ctx->pc = 0x1A5124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5120u;
            // 0x1a5124: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5038;
        }
    }
    ctx->pc = 0x1A5128u;
    // 0x1a5128: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a5128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a512c:
    // 0x1a512c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a512cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5134: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5134u;
        // 0x1a5138: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A513Cu;
    // 0x1a513c: 0x0  nop
    ctx->pc = 0x1a513cu;
    // NOP
    ctx->pc = 0x1a5140u;
}
