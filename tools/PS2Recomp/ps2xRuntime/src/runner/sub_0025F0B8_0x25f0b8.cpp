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

// Function: sub_0025F0B8
// Address: 0x25f0b8 - 0x25f1c0
void sub_0025F0B8_0x25f0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F0B8_0x25f0b8");
#endif

    switch (ctx->pc) {
        case 0x25f0dcu: goto label_25f0dc;
        case 0x25f0e8u: goto label_25f0e8;
        case 0x25f0f4u: goto label_25f0f4;
        case 0x25f100u: goto label_25f100;
        case 0x25f10cu: goto label_25f10c;
        case 0x25f150u: goto label_25f150;
        case 0x25f15cu: goto label_25f15c;
        case 0x25f168u: goto label_25f168;
        case 0x25f174u: goto label_25f174;
        case 0x25f180u: goto label_25f180;
        case 0x25f18cu: goto label_25f18c;
        case 0x25f198u: goto label_25f198;
        default: break;
    }

    ctx->pc = 0x25f0b8u;

    // 0x25f0b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25f0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25f0bc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x25f0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x25f0c0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25f0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x25f0c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25f0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25f0c8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x25f0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x25f0cc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x25f0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x25f0d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25f0d4: 0xc097bfe  jal         func_25EFF8
    ctx->pc = 0x25F0D4u;
    SET_GPR_U32(ctx, 31, 0x25F0DCu);
    ctx->pc = 0x25EFF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EFF8u, 0x25F0D4u, 0x25F0DCu)) {
        return;
    }
    ctx->pc = 0x25F0DCu;
label_25f0dc:
    // 0x25f0dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25f0dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0e0: 0xc09945a  jal         func_265168
    ctx->pc = 0x25F0E0u;
    SET_GPR_U32(ctx, 31, 0x25F0E8u);
    ctx->pc = 0x25F0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F0E0u;
    // 0x25f0e4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265168u, 0x25F0E0u, 0x25F0E8u)) {
        return;
    }
    ctx->pc = 0x25F0E8u;
label_25f0e8:
    // 0x25f0e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25f0e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0ec: 0xc09945a  jal         func_265168
    ctx->pc = 0x25F0ECu;
    SET_GPR_U32(ctx, 31, 0x25F0F4u);
    ctx->pc = 0x25F0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F0ECu;
    // 0x25f0f0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265168u, 0x25F0ECu, 0x25F0F4u)) {
        return;
    }
    ctx->pc = 0x25F0F4u;
label_25f0f4:
    // 0x25f0f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25f0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0f8: 0xc09945a  jal         func_265168
    ctx->pc = 0x25F0F8u;
    SET_GPR_U32(ctx, 31, 0x25F100u);
    ctx->pc = 0x25F0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F0F8u;
    // 0x25f0fc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265168u, 0x25F0F8u, 0x25F100u)) {
        return;
    }
    ctx->pc = 0x25F100u;
label_25f100:
    // 0x25f100: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25f100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f104: 0xc09945a  jal         func_265168
    ctx->pc = 0x25F104u;
    SET_GPR_U32(ctx, 31, 0x25F10Cu);
    ctx->pc = 0x25F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F104u;
    // 0x25f108: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265168u, 0x25F104u, 0x25F10Cu)) {
        return;
    }
    ctx->pc = 0x25F10Cu;
label_25f10c:
    // 0x25f10c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x25f10cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x25f110: 0x8ca54188  lw          $a1, 0x4188($a1)
    ctx->pc = 0x25f110u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4188u));
    // 0x25f114: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25f114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x25f118: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x25f118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x25f11c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25f11cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f120: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x25f120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25f124: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f128: 0xacb20044  sw          $s2, 0x44($a1)
    ctx->pc = 0x25f128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 18));
    // 0x25f12c: 0xacb40040  sw          $s4, 0x40($a1)
    ctx->pc = 0x25f12cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 20));
    // 0x25f130: 0xacb30020  sw          $s3, 0x20($a1)
    ctx->pc = 0x25f130u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 19));
    // 0x25f134: 0xacb00024  sw          $s0, 0x24($a1)
    ctx->pc = 0x25f134u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 16));
    // 0x25f138: 0xacb00028  sw          $s0, 0x28($a1)
    ctx->pc = 0x25f138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 16));
    // 0x25f13c: 0xacb0002c  sw          $s0, 0x2C($a1)
    ctx->pc = 0x25f13cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 16));
    // 0x25f140: 0xacb10030  sw          $s1, 0x30($a1)
    ctx->pc = 0x25f140u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 17));
    // 0x25f144: 0xacb10034  sw          $s1, 0x34($a1)
    ctx->pc = 0x25f144u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 17));
    // 0x25f148: 0xc092156  jal         func_248558
    ctx->pc = 0x25F148u;
    SET_GPR_U32(ctx, 31, 0x25F150u);
    ctx->pc = 0x25F14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F148u;
    // 0x25f14c: 0xacb1003c  sw          $s1, 0x3C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248558u, 0x25F148u, 0x25F150u)) {
        return;
    }
    ctx->pc = 0x25F150u;
label_25f150:
    // 0x25f150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f154: 0xc09216e  jal         func_2485B8
    ctx->pc = 0x25F154u;
    SET_GPR_U32(ctx, 31, 0x25F15Cu);
    ctx->pc = 0x25F158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F154u;
    // 0x25f158: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2485B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2485B8u, 0x25F154u, 0x25F15Cu)) {
        return;
    }
    ctx->pc = 0x25F15Cu;
label_25f15c:
    // 0x25f15c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f160: 0xc09216e  jal         func_2485B8
    ctx->pc = 0x25F160u;
    SET_GPR_U32(ctx, 31, 0x25F168u);
    ctx->pc = 0x25F164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F160u;
    // 0x25f164: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2485B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2485B8u, 0x25F160u, 0x25F168u)) {
        return;
    }
    ctx->pc = 0x25F168u;
label_25f168:
    // 0x25f168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f16c: 0xc09216e  jal         func_2485B8
    ctx->pc = 0x25F16Cu;
    SET_GPR_U32(ctx, 31, 0x25F174u);
    ctx->pc = 0x25F170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F16Cu;
    // 0x25f170: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2485B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2485B8u, 0x25F16Cu, 0x25F174u)) {
        return;
    }
    ctx->pc = 0x25F174u;
label_25f174:
    // 0x25f174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f178: 0xc09216e  jal         func_2485B8
    ctx->pc = 0x25F178u;
    SET_GPR_U32(ctx, 31, 0x25F180u);
    ctx->pc = 0x25F17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F178u;
    // 0x25f17c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2485B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2485B8u, 0x25F178u, 0x25F180u)) {
        return;
    }
    ctx->pc = 0x25F180u;
label_25f180:
    // 0x25f180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f184: 0xc09216e  jal         func_2485B8
    ctx->pc = 0x25F184u;
    SET_GPR_U32(ctx, 31, 0x25F18Cu);
    ctx->pc = 0x25F188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F184u;
    // 0x25f188: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2485B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2485B8u, 0x25F184u, 0x25F18Cu)) {
        return;
    }
    ctx->pc = 0x25F18Cu;
label_25f18c:
    // 0x25f18c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f190: 0xc09216e  jal         func_2485B8
    ctx->pc = 0x25F190u;
    SET_GPR_U32(ctx, 31, 0x25F198u);
    ctx->pc = 0x25F194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F190u;
    // 0x25f194: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2485B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2485B8u, 0x25F190u, 0x25F198u)) {
        return;
    }
    ctx->pc = 0x25F198u;
label_25f198:
    // 0x25f198: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x25f198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25f1a0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25f1a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f1a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25f1a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f1a8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x25f1a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f1ac: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x25f1acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f1b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x25F1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1B4u;
        // 0x25f1b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F1BCu;
    // 0x25f1bc: 0x0  nop
    ctx->pc = 0x25f1bcu;
    // NOP
    ctx->pc = 0x25f1c0u;
}
