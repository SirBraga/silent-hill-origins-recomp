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

// Function: sub_001D78B0
// Address: 0x1d78b0 - 0x1d7dd8
void sub_001D78B0_0x1d78b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D78B0_0x1d78b0");
#endif

    switch (ctx->pc) {
        case 0x1d78dcu: goto label_1d78dc;
        case 0x1d78e4u: goto label_1d78e4;
        case 0x1d78f4u: goto label_1d78f4;
        case 0x1d78fcu: goto label_1d78fc;
        case 0x1d7908u: goto label_1d7908;
        case 0x1d7910u: goto label_1d7910;
        case 0x1d7918u: goto label_1d7918;
        case 0x1d7928u: goto label_1d7928;
        case 0x1d7938u: goto label_1d7938;
        case 0x1d7940u: goto label_1d7940;
        case 0x1d7948u: goto label_1d7948;
        case 0x1d7950u: goto label_1d7950;
        case 0x1d7970u: goto label_1d7970;
        case 0x1d7988u: goto label_1d7988;
        case 0x1d799cu: goto label_1d799c;
        case 0x1d79a8u: goto label_1d79a8;
        case 0x1d79c0u: goto label_1d79c0;
        case 0x1d79d0u: goto label_1d79d0;
        case 0x1d79dcu: goto label_1d79dc;
        case 0x1d79ecu: goto label_1d79ec;
        case 0x1d79f4u: goto label_1d79f4;
        case 0x1d7a04u: goto label_1d7a04;
        case 0x1d7a0cu: goto label_1d7a0c;
        case 0x1d7a1cu: goto label_1d7a1c;
        case 0x1d7a24u: goto label_1d7a24;
        case 0x1d7a34u: goto label_1d7a34;
        case 0x1d7a3cu: goto label_1d7a3c;
        case 0x1d7a44u: goto label_1d7a44;
        case 0x1d7a50u: goto label_1d7a50;
        case 0x1d7a5cu: goto label_1d7a5c;
        case 0x1d7a70u: goto label_1d7a70;
        case 0x1d7a78u: goto label_1d7a78;
        case 0x1d7a80u: goto label_1d7a80;
        case 0x1d7a88u: goto label_1d7a88;
        case 0x1d7a90u: goto label_1d7a90;
        case 0x1d7a98u: goto label_1d7a98;
        case 0x1d7aa0u: goto label_1d7aa0;
        case 0x1d7aa8u: goto label_1d7aa8;
        case 0x1d7ab0u: goto label_1d7ab0;
        case 0x1d7ab8u: goto label_1d7ab8;
        case 0x1d7ac0u: goto label_1d7ac0;
        case 0x1d7ad0u: goto label_1d7ad0;
        case 0x1d7ae0u: goto label_1d7ae0;
        case 0x1d7af0u: goto label_1d7af0;
        case 0x1d7b00u: goto label_1d7b00;
        case 0x1d7b18u: goto label_1d7b18;
        case 0x1d7b30u: goto label_1d7b30;
        case 0x1d7b48u: goto label_1d7b48;
        case 0x1d7b60u: goto label_1d7b60;
        case 0x1d7b78u: goto label_1d7b78;
        case 0x1d7b90u: goto label_1d7b90;
        case 0x1d7bb0u: goto label_1d7bb0;
        case 0x1d7bc8u: goto label_1d7bc8;
        case 0x1d7bd0u: goto label_1d7bd0;
        case 0x1d7bd8u: goto label_1d7bd8;
        case 0x1d7be0u: goto label_1d7be0;
        case 0x1d7be8u: goto label_1d7be8;
        case 0x1d7bf0u: goto label_1d7bf0;
        case 0x1d7bf8u: goto label_1d7bf8;
        case 0x1d7c00u: goto label_1d7c00;
        case 0x1d7c14u: goto label_1d7c14;
        case 0x1d7c1cu: goto label_1d7c1c;
        case 0x1d7c28u: goto label_1d7c28;
        case 0x1d7c30u: goto label_1d7c30;
        case 0x1d7c38u: goto label_1d7c38;
        case 0x1d7c40u: goto label_1d7c40;
        case 0x1d7c48u: goto label_1d7c48;
        case 0x1d7c50u: goto label_1d7c50;
        case 0x1d7c58u: goto label_1d7c58;
        case 0x1d7c60u: goto label_1d7c60;
        case 0x1d7c68u: goto label_1d7c68;
        case 0x1d7c70u: goto label_1d7c70;
        case 0x1d7c7cu: goto label_1d7c7c;
        case 0x1d7c84u: goto label_1d7c84;
        case 0x1d7c8cu: goto label_1d7c8c;
        case 0x1d7c94u: goto label_1d7c94;
        case 0x1d7c9cu: goto label_1d7c9c;
        case 0x1d7ca4u: goto label_1d7ca4;
        case 0x1d7cb0u: goto label_1d7cb0;
        case 0x1d7cb8u: goto label_1d7cb8;
        case 0x1d7cc0u: goto label_1d7cc0;
        case 0x1d7cc8u: goto label_1d7cc8;
        case 0x1d7cd4u: goto label_1d7cd4;
        case 0x1d7cdcu: goto label_1d7cdc;
        case 0x1d7ce4u: goto label_1d7ce4;
        case 0x1d7cf4u: goto label_1d7cf4;
        case 0x1d7d0cu: goto label_1d7d0c;
        case 0x1d7d24u: goto label_1d7d24;
        case 0x1d7d3cu: goto label_1d7d3c;
        case 0x1d7d4cu: goto label_1d7d4c;
        case 0x1d7d5cu: goto label_1d7d5c;
        case 0x1d7d64u: goto label_1d7d64;
        case 0x1d7d6cu: goto label_1d7d6c;
        case 0x1d7d80u: goto label_1d7d80;
        case 0x1d7da0u: goto label_1d7da0;
        case 0x1d7db0u: goto label_1d7db0;
        default: break;
    }

    ctx->pc = 0x1d78b0u;

    // 0x1d78b0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1d78b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1d78b4: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x1d78b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x1d78b8: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x1d78b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x1d78bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d78bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78c0: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x1d78c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x1d78c4: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x1d78c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x1d78c8: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x1d78c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x1d78cc: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x1d78ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x1d78d0: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1d78d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x1d78d4: 0xc076a28  jal         func_1DA8A0
    ctx->pc = 0x1D78D4u;
    SET_GPR_U32(ctx, 31, 0x1D78DCu);
    ctx->pc = 0x1D78D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78D4u;
    // 0x1d78d8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA8A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA8A0u, 0x1D78D4u, 0x1D78DCu)) {
        return;
    }
    ctx->pc = 0x1D78DCu;
label_1d78dc:
    // 0x1d78dc: 0xc07619c  jal         func_1D8670
    ctx->pc = 0x1D78DCu;
    SET_GPR_U32(ctx, 31, 0x1D78E4u);
    ctx->pc = 0x1D78E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78DCu;
    // 0x1d78e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8670u, 0x1D78DCu, 0x1D78E4u)) {
        return;
    }
    ctx->pc = 0x1D78E4u;
label_1d78e4:
    // 0x1d78e4: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x1d78e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x1d78e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d78e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78ec: 0xc08ab32  jal         func_22ACC8
    ctx->pc = 0x1D78ECu;
    SET_GPR_U32(ctx, 31, 0x1D78F4u);
    ctx->pc = 0x1D78F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78ECu;
    // 0x1d78f0: 0x24848290  addiu       $a0, $a0, -0x7D70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ACC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ACC8u, 0x1D78ECu, 0x1D78F4u)) {
        return;
    }
    ctx->pc = 0x1D78F4u;
label_1d78f4:
    // 0x1d78f4: 0xc081a92  jal         func_206A48
    ctx->pc = 0x1D78F4u;
    SET_GPR_U32(ctx, 31, 0x1D78FCu);
    ctx->pc = 0x206A48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206A48u, 0x1D78F4u, 0x1D78FCu)) {
        return;
    }
    ctx->pc = 0x1D78FCu;
label_1d78fc:
    // 0x1d78fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d78fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7900: 0xc07fbfe  jal         func_1FEFF8
    ctx->pc = 0x1D7900u;
    SET_GPR_U32(ctx, 31, 0x1D7908u);
    ctx->pc = 0x1D7904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7900u;
    // 0x1d7904: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFF8u, 0x1D7900u, 0x1D7908u)) {
        return;
    }
    ctx->pc = 0x1D7908u;
label_1d7908:
    // 0x1d7908: 0xc07fe36  jal         func_1FF8D8
    ctx->pc = 0x1D7908u;
    SET_GPR_U32(ctx, 31, 0x1D7910u);
    ctx->pc = 0x1FF8D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF8D8u, 0x1D7908u, 0x1D7910u)) {
        return;
    }
    ctx->pc = 0x1D7910u;
label_1d7910:
    // 0x1d7910: 0xc08163e  jal         func_2058F8
    ctx->pc = 0x1D7910u;
    SET_GPR_U32(ctx, 31, 0x1D7918u);
    ctx->pc = 0x2058F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2058F8u, 0x1D7910u, 0x1D7918u)) {
        return;
    }
    ctx->pc = 0x1D7918u;
label_1d7918:
    // 0x1d7918: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d7918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d791c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d791cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7920: 0xc081754  jal         func_205D50
    ctx->pc = 0x1D7920u;
    SET_GPR_U32(ctx, 31, 0x1D7928u);
    ctx->pc = 0x1D7924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7920u;
    // 0x1d7924: 0x24a51780  addiu       $a1, $a1, 0x1780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205D50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205D50u, 0x1D7920u, 0x1D7928u)) {
        return;
    }
    ctx->pc = 0x1D7928u;
label_1d7928:
    // 0x1d7928: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d7928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d792c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d792cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7930: 0xc081754  jal         func_205D50
    ctx->pc = 0x1D7930u;
    SET_GPR_U32(ctx, 31, 0x1D7938u);
    ctx->pc = 0x1D7934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7930u;
    // 0x1d7934: 0x24a51788  addiu       $a1, $a1, 0x1788 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205D50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205D50u, 0x1D7930u, 0x1D7938u)) {
        return;
    }
    ctx->pc = 0x1D7938u;
label_1d7938:
    // 0x1d7938: 0xc07d822  jal         func_1F6088
    ctx->pc = 0x1D7938u;
    SET_GPR_U32(ctx, 31, 0x1D7940u);
    ctx->pc = 0x1F6088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6088u, 0x1D7938u, 0x1D7940u)) {
        return;
    }
    ctx->pc = 0x1D7940u;
label_1d7940:
    // 0x1d7940: 0xc07ccc4  jal         func_1F3310
    ctx->pc = 0x1D7940u;
    SET_GPR_U32(ctx, 31, 0x1D7948u);
    ctx->pc = 0x1F3310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3310u, 0x1D7940u, 0x1D7948u)) {
        return;
    }
    ctx->pc = 0x1D7948u;
label_1d7948:
    // 0x1d7948: 0xc076198  jal         func_1D8660
    ctx->pc = 0x1D7948u;
    SET_GPR_U32(ctx, 31, 0x1D7950u);
    ctx->pc = 0x1D8660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8660u, 0x1D7948u, 0x1D7950u)) {
        return;
    }
    ctx->pc = 0x1D7950u;
label_1d7950:
    // 0x1d7950: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1d7950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1d7954: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1d7954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1d7958: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d7958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d795c: 0x24841768  addiu       $a0, $a0, 0x1768
    ctx->pc = 0x1d795cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5992));
    // 0x1d7960: 0x24c61778  addiu       $a2, $a2, 0x1778
    ctx->pc = 0x1d7960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6008));
    // 0x1d7964: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d7964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7968: 0xc07cc10  jal         func_1F3040
    ctx->pc = 0x1D7968u;
    SET_GPR_U32(ctx, 31, 0x1D7970u);
    ctx->pc = 0x1D796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7968u;
    // 0x1d796c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3040u, 0x1D7968u, 0x1D7970u)) {
        return;
    }
    ctx->pc = 0x1D7970u;
label_1d7970:
    // 0x1d7970: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1D7970u;
    {
        const bool branch_taken_0x1d7970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7970u;
        // 0x1d7974: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7970) {
            ctx->pc = 0x1D7A48u;
            goto label_1d7a48;
        }
    }
    ctx->pc = 0x1D7978u;
    // 0x1d7978: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d7978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d797c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d797cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7980: 0xc081444  jal         func_205110
    ctx->pc = 0x1D7980u;
    SET_GPR_U32(ctx, 31, 0x1D7988u);
    ctx->pc = 0x1D7984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7980u;
    // 0x1d7984: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205110u, 0x1D7980u, 0x1D7988u)) {
        return;
    }
    ctx->pc = 0x1D7988u;
label_1d7988:
    // 0x1d7988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d7988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d798c: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1D798Cu;
    {
        const bool branch_taken_0x1d798c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D798Cu;
        // 0x1d7990: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d798c) {
            ctx->pc = 0x1D7A48u;
            goto label_1d7a48;
        }
    }
    ctx->pc = 0x1D7994u;
    // 0x1d7994: 0xc081a96  jal         func_206A58
    ctx->pc = 0x1D7994u;
    SET_GPR_U32(ctx, 31, 0x1D799Cu);
    ctx->pc = 0x1D7998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7994u;
    // 0x1d7998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206A58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206A58u, 0x1D7994u, 0x1D799Cu)) {
        return;
    }
    ctx->pc = 0x1D799Cu;
label_1d799c:
    // 0x1d799c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d799cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d79a0: 0xc0817e6  jal         func_205F98
    ctx->pc = 0x1D79A0u;
    SET_GPR_U32(ctx, 31, 0x1D79A8u);
    ctx->pc = 0x1D79A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D79A0u;
    // 0x1d79a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205F98u, 0x1D79A0u, 0x1D79A8u)) {
        return;
    }
    ctx->pc = 0x1D79A8u;
label_1d79a8:
    // 0x1d79a8: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D79A8u;
    {
        const bool branch_taken_0x1d79a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79A8u;
        // 0x1d79ac: 0x24070500  addiu       $a3, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79a8) {
            ctx->pc = 0x1D7A44u;
            goto label_1d7a44;
        }
    }
    ctx->pc = 0x1D79B0u;
    // 0x1d79b0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1d79b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d79b4: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1d79b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1d79b8: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x1D79B8u;
    SET_GPR_U32(ctx, 31, 0x1D79C0u);
    ctx->pc = 0x1D79BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D79B8u;
    // 0x1d79bc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x1D79B8u, 0x1D79C0u)) {
        return;
    }
    ctx->pc = 0x1D79C0u;
label_1d79c0:
    // 0x1d79c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d79c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d79c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d79c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d79c8: 0xc08a066  jal         func_228198
    ctx->pc = 0x1D79C8u;
    SET_GPR_U32(ctx, 31, 0x1D79D0u);
    ctx->pc = 0x1D79CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D79C8u;
    // 0x1d79cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228198u, 0x1D79C8u, 0x1D79D0u)) {
        return;
    }
    ctx->pc = 0x1D79D0u;
label_1d79d0:
    // 0x1d79d0: 0x8e710060  lw          $s1, 0x60($s3)
    ctx->pc = 0x1d79d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1d79d4: 0xc08a100  jal         func_228400
    ctx->pc = 0x1D79D4u;
    SET_GPR_U32(ctx, 31, 0x1D79DCu);
    ctx->pc = 0x1D79D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D79D4u;
    // 0x1d79d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228400u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228400u, 0x1D79D4u, 0x1D79DCu)) {
        return;
    }
    ctx->pc = 0x1D79DCu;
label_1d79dc:
    // 0x1d79dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d79dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d79e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d79e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d79e4: 0xc08a0c0  jal         func_228300
    ctx->pc = 0x1D79E4u;
    SET_GPR_U32(ctx, 31, 0x1D79ECu);
    ctx->pc = 0x1D79E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D79E4u;
    // 0x1d79e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228300u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228300u, 0x1D79E4u, 0x1D79ECu)) {
        return;
    }
    ctx->pc = 0x1D79ECu;
label_1d79ec:
    // 0x1d79ec: 0xc08a13e  jal         func_2284F8
    ctx->pc = 0x1D79ECu;
    SET_GPR_U32(ctx, 31, 0x1D79F4u);
    ctx->pc = 0x2284F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2284F8u, 0x1D79ECu, 0x1D79F4u)) {
        return;
    }
    ctx->pc = 0x1D79F4u;
label_1d79f4:
    // 0x1d79f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d79f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d79f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d79f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d79fc: 0xc08942a  jal         func_2250A8
    ctx->pc = 0x1D79FCu;
    SET_GPR_U32(ctx, 31, 0x1D7A04u);
    ctx->pc = 0x1D7A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D79FCu;
    // 0x1d7a00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2250A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2250A8u, 0x1D79FCu, 0x1D7A04u)) {
        return;
    }
    ctx->pc = 0x1D7A04u;
label_1d7a04:
    // 0x1d7a04: 0xc08a100  jal         func_228400
    ctx->pc = 0x1D7A04u;
    SET_GPR_U32(ctx, 31, 0x1D7A0Cu);
    ctx->pc = 0x1D7A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A04u;
    // 0x1d7a08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228400u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228400u, 0x1D7A04u, 0x1D7A0Cu)) {
        return;
    }
    ctx->pc = 0x1D7A0Cu;
label_1d7a0c:
    // 0x1d7a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a14: 0xc08a0c0  jal         func_228300
    ctx->pc = 0x1D7A14u;
    SET_GPR_U32(ctx, 31, 0x1D7A1Cu);
    ctx->pc = 0x1D7A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A14u;
    // 0x1d7a18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228300u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228300u, 0x1D7A14u, 0x1D7A1Cu)) {
        return;
    }
    ctx->pc = 0x1D7A1Cu;
label_1d7a1c:
    // 0x1d7a1c: 0xc08a13e  jal         func_2284F8
    ctx->pc = 0x1D7A1Cu;
    SET_GPR_U32(ctx, 31, 0x1D7A24u);
    ctx->pc = 0x2284F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2284F8u, 0x1D7A1Cu, 0x1D7A24u)) {
        return;
    }
    ctx->pc = 0x1D7A24u;
label_1d7a24:
    // 0x1d7a24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d7a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7a2c: 0xc08942a  jal         func_2250A8
    ctx->pc = 0x1D7A2Cu;
    SET_GPR_U32(ctx, 31, 0x1D7A34u);
    ctx->pc = 0x1D7A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A2Cu;
    // 0x1d7a30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2250A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2250A8u, 0x1D7A2Cu, 0x1D7A34u)) {
        return;
    }
    ctx->pc = 0x1D7A34u;
label_1d7a34:
    // 0x1d7a34: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x1D7A34u;
    SET_GPR_U32(ctx, 31, 0x1D7A3Cu);
    ctx->pc = 0x1D7A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A34u;
    // 0x1d7a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x1D7A34u, 0x1D7A3Cu)) {
        return;
    }
    ctx->pc = 0x1D7A3Cu;
label_1d7a3c:
    // 0x1d7a3c: 0xc089b96  jal         func_226E58
    ctx->pc = 0x1D7A3Cu;
    SET_GPR_U32(ctx, 31, 0x1D7A44u);
    ctx->pc = 0x1D7A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A3Cu;
    // 0x1d7a40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x1D7A3Cu, 0x1D7A44u)) {
        return;
    }
    ctx->pc = 0x1D7A44u;
label_1d7a44:
    // 0x1d7a44: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1d7a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1d7a48:
    // 0x1d7a48: 0xc081654  jal         func_205950
    ctx->pc = 0x1D7A48u;
    SET_GPR_U32(ctx, 31, 0x1D7A50u);
    ctx->pc = 0x1D7A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A48u;
    // 0x1d7a4c: 0x24841790  addiu       $a0, $a0, 0x1790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205950u, 0x1D7A48u, 0x1D7A50u)) {
        return;
    }
    ctx->pc = 0x1D7A50u;
label_1d7a50:
    // 0x1d7a50: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1d7a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1d7a54: 0xc081654  jal         func_205950
    ctx->pc = 0x1D7A54u;
    SET_GPR_U32(ctx, 31, 0x1D7A5Cu);
    ctx->pc = 0x1D7A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A54u;
    // 0x1d7a58: 0x24841798  addiu       $a0, $a0, 0x1798 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205950u, 0x1D7A54u, 0x1D7A5Cu)) {
        return;
    }
    ctx->pc = 0x1D7A5Cu;
label_1d7a5c:
    // 0x1d7a5c: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1d7a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1d7a60: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1d7a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x1d7a64: 0x24428048  addiu       $v0, $v0, -0x7FB8
    ctx->pc = 0x1d7a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934600));
    // 0x1d7a68: 0xc07f076  jal         func_1FC1D8
    ctx->pc = 0x1D7A68u;
    SET_GPR_U32(ctx, 31, 0x1D7A70u);
    ctx->pc = 0x1D7A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A68u;
    // 0x1d7a6c: 0xac62ff08  sw          $v0, -0xF8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967048), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC1D8u, 0x1D7A68u, 0x1D7A70u)) {
        return;
    }
    ctx->pc = 0x1D7A70u;
label_1d7a70:
    // 0x1d7a70: 0xc07fea8  jal         func_1FFAA0
    ctx->pc = 0x1D7A70u;
    SET_GPR_U32(ctx, 31, 0x1D7A78u);
    ctx->pc = 0x1D7A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A70u;
    // 0x1d7a74: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FFAA0u, 0x1D7A70u, 0x1D7A78u)) {
        return;
    }
    ctx->pc = 0x1D7A78u;
label_1d7a78:
    // 0x1d7a78: 0xc0805fe  jal         func_2017F8
    ctx->pc = 0x1D7A78u;
    SET_GPR_U32(ctx, 31, 0x1D7A80u);
    ctx->pc = 0x1D7A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7A78u;
    // 0x1d7a7c: 0x261017d0  addiu       $s0, $s0, 0x17D0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2017F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2017F8u, 0x1D7A78u, 0x1D7A80u)) {
        return;
    }
    ctx->pc = 0x1D7A80u;
label_1d7a80:
    // 0x1d7a80: 0xc080718  jal         func_201C60
    ctx->pc = 0x1D7A80u;
    SET_GPR_U32(ctx, 31, 0x1D7A88u);
    ctx->pc = 0x201C60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201C60u, 0x1D7A80u, 0x1D7A88u)) {
        return;
    }
    ctx->pc = 0x1D7A88u;
label_1d7a88:
    // 0x1d7a88: 0xc075cae  jal         func_1D72B8
    ctx->pc = 0x1D7A88u;
    SET_GPR_U32(ctx, 31, 0x1D7A90u);
    ctx->pc = 0x1D72B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D72B8u, 0x1D7A88u, 0x1D7A90u)) {
        return;
    }
    ctx->pc = 0x1D7A90u;
label_1d7a90:
    // 0x1d7a90: 0xc075d92  jal         func_1D7648
    ctx->pc = 0x1D7A90u;
    SET_GPR_U32(ctx, 31, 0x1D7A98u);
    ctx->pc = 0x1D7648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7648u, 0x1D7A90u, 0x1D7A98u)) {
        return;
    }
    ctx->pc = 0x1D7A98u;
label_1d7a98:
    // 0x1d7a98: 0xc075d76  jal         func_1D75D8
    ctx->pc = 0x1D7A98u;
    SET_GPR_U32(ctx, 31, 0x1D7AA0u);
    ctx->pc = 0x1D75D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D75D8u, 0x1D7A98u, 0x1D7AA0u)) {
        return;
    }
    ctx->pc = 0x1D7AA0u;
label_1d7aa0:
    // 0x1d7aa0: 0xc0761a2  jal         func_1D8688
    ctx->pc = 0x1D7AA0u;
    SET_GPR_U32(ctx, 31, 0x1D7AA8u);
    ctx->pc = 0x1D8688u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8688u, 0x1D7AA0u, 0x1D7AA8u)) {
        return;
    }
    ctx->pc = 0x1D7AA8u;
label_1d7aa8:
    // 0x1d7aa8: 0xc0761a0  jal         func_1D8680
    ctx->pc = 0x1D7AA8u;
    SET_GPR_U32(ctx, 31, 0x1D7AB0u);
    ctx->pc = 0x1D8680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8680u, 0x1D7AA8u, 0x1D7AB0u)) {
        return;
    }
    ctx->pc = 0x1D7AB0u;
label_1d7ab0:
    // 0x1d7ab0: 0xc0761f6  jal         func_1D87D8
    ctx->pc = 0x1D7AB0u;
    SET_GPR_U32(ctx, 31, 0x1D7AB8u);
    ctx->pc = 0x1D87D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D87D8u, 0x1D7AB0u, 0x1D7AB8u)) {
        return;
    }
    ctx->pc = 0x1D7AB8u;
label_1d7ab8:
    // 0x1d7ab8: 0xc0761f6  jal         func_1D87D8
    ctx->pc = 0x1D7AB8u;
    SET_GPR_U32(ctx, 31, 0x1D7AC0u);
    ctx->pc = 0x1D87D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D87D8u, 0x1D7AB8u, 0x1D7AC0u)) {
        return;
    }
    ctx->pc = 0x1D7AC0u;
label_1d7ac0:
    // 0x1d7ac0: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1d7ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1d7ac4: 0x2404070b  addiu       $a0, $zero, 0x70B
    ctx->pc = 0x1d7ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1803));
    // 0x1d7ac8: 0xc080052  jal         func_200148
    ctx->pc = 0x1D7AC8u;
    SET_GPR_U32(ctx, 31, 0x1D7AD0u);
    ctx->pc = 0x1D7ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AC8u;
    // 0x1d7acc: 0x24a58098  addiu       $a1, $a1, -0x7F68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200148u, 0x1D7AC8u, 0x1D7AD0u)) {
        return;
    }
    ctx->pc = 0x1D7AD0u;
label_1d7ad0:
    // 0x1d7ad0: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1d7ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1d7ad4: 0x2404070c  addiu       $a0, $zero, 0x70C
    ctx->pc = 0x1d7ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1804));
    // 0x1d7ad8: 0xc080052  jal         func_200148
    ctx->pc = 0x1D7AD8u;
    SET_GPR_U32(ctx, 31, 0x1D7AE0u);
    ctx->pc = 0x1D7ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AD8u;
    // 0x1d7adc: 0x24a580f8  addiu       $a1, $a1, -0x7F08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200148u, 0x1D7AD8u, 0x1D7AE0u)) {
        return;
    }
    ctx->pc = 0x1D7AE0u;
label_1d7ae0:
    // 0x1d7ae0: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1d7ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1d7ae4: 0x24040700  addiu       $a0, $zero, 0x700
    ctx->pc = 0x1d7ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x1d7ae8: 0xc080052  jal         func_200148
    ctx->pc = 0x1D7AE8u;
    SET_GPR_U32(ctx, 31, 0x1D7AF0u);
    ctx->pc = 0x1D7AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AE8u;
    // 0x1d7aec: 0x24a58158  addiu       $a1, $a1, -0x7EA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200148u, 0x1D7AE8u, 0x1D7AF0u)) {
        return;
    }
    ctx->pc = 0x1D7AF0u;
label_1d7af0:
    // 0x1d7af0: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1d7af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1d7af4: 0x2404071d  addiu       $a0, $zero, 0x71D
    ctx->pc = 0x1d7af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1821));
    // 0x1d7af8: 0xc080052  jal         func_200148
    ctx->pc = 0x1D7AF8u;
    SET_GPR_U32(ctx, 31, 0x1D7B00u);
    ctx->pc = 0x1D7AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AF8u;
    // 0x1d7afc: 0x24a58240  addiu       $a1, $a1, -0x7DC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200148u, 0x1D7AF8u, 0x1D7B00u)) {
        return;
    }
    ctx->pc = 0x1D7B00u;
label_1d7b00:
    // 0x1d7b00: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7b04: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d7b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d7b08: 0x248488f0  addiu       $a0, $a0, -0x7710
    ctx->pc = 0x1d7b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936816));
    // 0x1d7b0c: 0x24a517a0  addiu       $a1, $a1, 0x17A0
    ctx->pc = 0x1d7b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6048));
    // 0x1d7b10: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D7B10u;
    SET_GPR_U32(ctx, 31, 0x1D7B18u);
    ctx->pc = 0x1D7B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B10u;
    // 0x1d7b14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D7B10u, 0x1D7B18u)) {
        return;
    }
    ctx->pc = 0x1D7B18u;
label_1d7b18:
    // 0x1d7b18: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7b1c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d7b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d7b20: 0x248488f8  addiu       $a0, $a0, -0x7708
    ctx->pc = 0x1d7b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936824));
    // 0x1d7b24: 0x24a517b0  addiu       $a1, $a1, 0x17B0
    ctx->pc = 0x1d7b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6064));
    // 0x1d7b28: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D7B28u;
    SET_GPR_U32(ctx, 31, 0x1D7B30u);
    ctx->pc = 0x1D7B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B28u;
    // 0x1d7b2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D7B28u, 0x1D7B30u)) {
        return;
    }
    ctx->pc = 0x1D7B30u;
label_1d7b30:
    // 0x1d7b30: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7b34: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d7b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d7b38: 0x24848910  addiu       $a0, $a0, -0x76F0
    ctx->pc = 0x1d7b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936848));
    // 0x1d7b3c: 0x24a517c0  addiu       $a1, $a1, 0x17C0
    ctx->pc = 0x1d7b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6080));
    // 0x1d7b40: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D7B40u;
    SET_GPR_U32(ctx, 31, 0x1D7B48u);
    ctx->pc = 0x1D7B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B40u;
    // 0x1d7b44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D7B40u, 0x1D7B48u)) {
        return;
    }
    ctx->pc = 0x1D7B48u;
label_1d7b48:
    // 0x1d7b48: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7b4c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d7b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d7b50: 0x24848918  addiu       $a0, $a0, -0x76E8
    ctx->pc = 0x1d7b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936856));
    // 0x1d7b54: 0x24a517e0  addiu       $a1, $a1, 0x17E0
    ctx->pc = 0x1d7b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6112));
    // 0x1d7b58: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D7B58u;
    SET_GPR_U32(ctx, 31, 0x1D7B60u);
    ctx->pc = 0x1D7B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B58u;
    // 0x1d7b5c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D7B58u, 0x1D7B60u)) {
        return;
    }
    ctx->pc = 0x1D7B60u;
label_1d7b60:
    // 0x1d7b60: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7b64: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d7b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d7b68: 0x24848900  addiu       $a0, $a0, -0x7700
    ctx->pc = 0x1d7b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936832));
    // 0x1d7b6c: 0x24a517f8  addiu       $a1, $a1, 0x17F8
    ctx->pc = 0x1d7b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6136));
    // 0x1d7b70: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D7B70u;
    SET_GPR_U32(ctx, 31, 0x1D7B78u);
    ctx->pc = 0x1D7B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B70u;
    // 0x1d7b74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D7B70u, 0x1D7B78u)) {
        return;
    }
    ctx->pc = 0x1D7B78u;
label_1d7b78:
    // 0x1d7b78: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7b7c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d7b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d7b80: 0x24848908  addiu       $a0, $a0, -0x76F8
    ctx->pc = 0x1d7b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936840));
    // 0x1d7b84: 0x24a51808  addiu       $a1, $a1, 0x1808
    ctx->pc = 0x1d7b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6152));
    // 0x1d7b88: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D7B88u;
    SET_GPR_U32(ctx, 31, 0x1D7B90u);
    ctx->pc = 0x1D7B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B88u;
    // 0x1d7b8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D7B88u, 0x1D7B90u)) {
        return;
    }
    ctx->pc = 0x1D7B90u;
label_1d7b90:
    // 0x1d7b90: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x1d7b90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    // 0x1d7b94: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7b98: 0x26101828  addiu       $s0, $s0, 0x1828
    ctx->pc = 0x1d7b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6184));
    // 0x1d7b9c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d7b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d7ba0: 0x248486c8  addiu       $a0, $a0, -0x7938
    ctx->pc = 0x1d7ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936264));
    // 0x1d7ba4: 0x24a51818  addiu       $a1, $a1, 0x1818
    ctx->pc = 0x1d7ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6168));
    // 0x1d7ba8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D7BA8u;
    SET_GPR_U32(ctx, 31, 0x1D7BB0u);
    ctx->pc = 0x1D7BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7BA8u;
    // 0x1d7bac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D7BA8u, 0x1D7BB0u)) {
        return;
    }
    ctx->pc = 0x1D7BB0u;
label_1d7bb0:
    // 0x1d7bb0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7bb4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d7bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d7bb8: 0x248486d0  addiu       $a0, $a0, -0x7930
    ctx->pc = 0x1d7bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936272));
    // 0x1d7bbc: 0x24a51830  addiu       $a1, $a1, 0x1830
    ctx->pc = 0x1d7bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6192));
    // 0x1d7bc0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1D7BC0u;
    SET_GPR_U32(ctx, 31, 0x1D7BC8u);
    ctx->pc = 0x1D7BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7BC0u;
    // 0x1d7bc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1D7BC0u, 0x1D7BC8u)) {
        return;
    }
    ctx->pc = 0x1D7BC8u;
label_1d7bc8:
    // 0x1d7bc8: 0xc0812b4  jal         func_204AD0
    ctx->pc = 0x1D7BC8u;
    SET_GPR_U32(ctx, 31, 0x1D7BD0u);
    ctx->pc = 0x204AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204AD0u, 0x1D7BC8u, 0x1D7BD0u)) {
        return;
    }
    ctx->pc = 0x1D7BD0u;
label_1d7bd0:
    // 0x1d7bd0: 0xc05ebdc  jal         func_17AF70
    ctx->pc = 0x1D7BD0u;
    SET_GPR_U32(ctx, 31, 0x1D7BD8u);
    ctx->pc = 0x17AF70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17AF70u, 0x1D7BD0u, 0x1D7BD8u)) {
        return;
    }
    ctx->pc = 0x1D7BD8u;
label_1d7bd8:
    // 0x1d7bd8: 0xc044e9e  jal         func_113A78
    ctx->pc = 0x1D7BD8u;
    SET_GPR_U32(ctx, 31, 0x1D7BE0u);
    ctx->pc = 0x113A78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113A78u, 0x1D7BD8u, 0x1D7BE0u)) {
        return;
    }
    ctx->pc = 0x1D7BE0u;
label_1d7be0:
    // 0x1d7be0: 0xc0664a2  jal         func_199288
    ctx->pc = 0x1D7BE0u;
    SET_GPR_U32(ctx, 31, 0x1D7BE8u);
    ctx->pc = 0x199288u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199288u, 0x1D7BE0u, 0x1D7BE8u)) {
        return;
    }
    ctx->pc = 0x1D7BE8u;
label_1d7be8:
    // 0x1d7be8: 0xc0691dc  jal         func_1A4770
    ctx->pc = 0x1D7BE8u;
    SET_GPR_U32(ctx, 31, 0x1D7BF0u);
    ctx->pc = 0x1A4770u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4770u, 0x1D7BE8u, 0x1D7BF0u)) {
        return;
    }
    ctx->pc = 0x1D7BF0u;
label_1d7bf0:
    // 0x1d7bf0: 0xc060354  jal         func_180D50
    ctx->pc = 0x1D7BF0u;
    SET_GPR_U32(ctx, 31, 0x1D7BF8u);
    ctx->pc = 0x180D50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180D50u, 0x1D7BF0u, 0x1D7BF8u)) {
        return;
    }
    ctx->pc = 0x1D7BF8u;
label_1d7bf8:
    // 0x1d7bf8: 0xc0764f6  jal         func_1D93D8
    ctx->pc = 0x1D7BF8u;
    SET_GPR_U32(ctx, 31, 0x1D7C00u);
    ctx->pc = 0x1D93D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D93D8u, 0x1D7BF8u, 0x1D7C00u)) {
        return;
    }
    ctx->pc = 0x1D7C00u;
label_1d7c00:
    // 0x1d7c00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D7C00u;
    {
        const bool branch_taken_0x1d7c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7c00) {
            ctx->pc = 0x1D7C30u;
            goto label_1d7c30;
        }
    }
    ctx->pc = 0x1D7C08u;
    // 0x1d7c08: 0x240413f8  addiu       $a0, $zero, 0x13F8
    ctx->pc = 0x1d7c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5112));
    // 0x1d7c0c: 0xc080858  jal         func_202160
    ctx->pc = 0x1D7C0Cu;
    SET_GPR_U32(ctx, 31, 0x1D7C14u);
    ctx->pc = 0x1D7C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C0Cu;
    // 0x1d7c10: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1D7C0Cu, 0x1D7C14u)) {
        return;
    }
    ctx->pc = 0x1D7C14u;
label_1d7c14:
    // 0x1d7c14: 0xc042f2a  jal         func_10BCA8
    ctx->pc = 0x1D7C14u;
    SET_GPR_U32(ctx, 31, 0x1D7C1Cu);
    ctx->pc = 0x1D7C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C14u;
    // 0x1d7c18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10BCA8u, 0x1D7C14u, 0x1D7C1Cu)) {
        return;
    }
    ctx->pc = 0x1D7C1Cu;
label_1d7c1c:
    // 0x1d7c1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d7c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c20: 0xc0438d0  jal         func_10E340
    ctx->pc = 0x1D7C20u;
    SET_GPR_U32(ctx, 31, 0x1D7C28u);
    ctx->pc = 0x1D7C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C20u;
    // 0x1d7c24: 0xae0282f0  sw          $v0, -0x7D10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294935280), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E340u, 0x1D7C20u, 0x1D7C28u)) {
        return;
    }
    ctx->pc = 0x1D7C28u;
label_1d7c28:
    // 0x1d7c28: 0xc0438e6  jal         func_10E398
    ctx->pc = 0x1D7C28u;
    SET_GPR_U32(ctx, 31, 0x1D7C30u);
    ctx->pc = 0x1D7C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C28u;
    // 0x1d7c2c: 0x8e0482f0  lw          $a0, -0x7D10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E398u, 0x1D7C28u, 0x1D7C30u)) {
        return;
    }
    ctx->pc = 0x1D7C30u;
label_1d7c30:
    // 0x1d7c30: 0xc07d25c  jal         func_1F4970
    ctx->pc = 0x1D7C30u;
    SET_GPR_U32(ctx, 31, 0x1D7C38u);
    ctx->pc = 0x1D7C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C30u;
    // 0x1d7c34: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4970u, 0x1D7C30u, 0x1D7C38u)) {
        return;
    }
    ctx->pc = 0x1D7C38u;
label_1d7c38:
    // 0x1d7c38: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x1D7C38u;
    SET_GPR_U32(ctx, 31, 0x1D7C40u);
    ctx->pc = 0x1D7C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C38u;
    // 0x1d7c3c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CE68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17CE68u, 0x1D7C38u, 0x1D7C40u)) {
        return;
    }
    ctx->pc = 0x1D7C40u;
label_1d7c40:
    // 0x1d7c40: 0xc062132  jal         func_1884C8
    ctx->pc = 0x1D7C40u;
    SET_GPR_U32(ctx, 31, 0x1D7C48u);
    ctx->pc = 0x1884C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1884C8u, 0x1D7C40u, 0x1D7C48u)) {
        return;
    }
    ctx->pc = 0x1D7C48u;
label_1d7c48:
    // 0x1d7c48: 0xc062c8a  jal         func_18B228
    ctx->pc = 0x1D7C48u;
    SET_GPR_U32(ctx, 31, 0x1D7C50u);
    ctx->pc = 0x18B228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18B228u, 0x1D7C48u, 0x1D7C50u)) {
        return;
    }
    ctx->pc = 0x1D7C50u;
label_1d7c50:
    // 0x1d7c50: 0xc06407c  jal         func_1901F0
    ctx->pc = 0x1D7C50u;
    SET_GPR_U32(ctx, 31, 0x1D7C58u);
    ctx->pc = 0x1901F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1901F0u, 0x1D7C50u, 0x1D7C58u)) {
        return;
    }
    ctx->pc = 0x1D7C58u;
label_1d7c58:
    // 0x1d7c58: 0xc05408a  jal         func_150228
    ctx->pc = 0x1D7C58u;
    SET_GPR_U32(ctx, 31, 0x1D7C60u);
    ctx->pc = 0x150228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x150228u, 0x1D7C58u, 0x1D7C60u)) {
        return;
    }
    ctx->pc = 0x1D7C60u;
label_1d7c60:
    // 0x1d7c60: 0xc058b58  jal         func_162D60
    ctx->pc = 0x1D7C60u;
    SET_GPR_U32(ctx, 31, 0x1D7C68u);
    ctx->pc = 0x162D60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x162D60u, 0x1D7C60u, 0x1D7C68u)) {
        return;
    }
    ctx->pc = 0x1D7C68u;
label_1d7c68:
    // 0x1d7c68: 0xc040b66  jal         func_102D98
    ctx->pc = 0x1D7C68u;
    SET_GPR_U32(ctx, 31, 0x1D7C70u);
    ctx->pc = 0x102D98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102D98u, 0x1D7C68u, 0x1D7C70u)) {
        return;
    }
    ctx->pc = 0x1D7C70u;
label_1d7c70:
    // 0x1d7c70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d7c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7c74: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1D7C74u;
    SET_GPR_U32(ctx, 31, 0x1D7C7Cu);
    ctx->pc = 0x1D7C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C74u;
    // 0x1d7c78: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1D7C74u, 0x1D7C7Cu)) {
        return;
    }
    ctx->pc = 0x1D7C7Cu;
label_1d7c7c:
    // 0x1d7c7c: 0xc05866a  jal         func_1619A8
    ctx->pc = 0x1D7C7Cu;
    SET_GPR_U32(ctx, 31, 0x1D7C84u);
    ctx->pc = 0x1D7C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C7Cu;
    // 0x1d7c80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1619A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1619A8u, 0x1D7C7Cu, 0x1D7C84u)) {
        return;
    }
    ctx->pc = 0x1D7C84u;
label_1d7c84:
    // 0x1d7c84: 0xc0561a6  jal         func_158698
    ctx->pc = 0x1D7C84u;
    SET_GPR_U32(ctx, 31, 0x1D7C8Cu);
    ctx->pc = 0x1D7C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C84u;
    // 0x1d7c88: 0xae028654  sw          $v0, -0x79AC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x158698u, 0x1D7C84u, 0x1D7C8Cu)) {
        return;
    }
    ctx->pc = 0x1D7C8Cu;
label_1d7c8c:
    // 0x1d7c8c: 0xc065998  jal         func_196660
    ctx->pc = 0x1D7C8Cu;
    SET_GPR_U32(ctx, 31, 0x1D7C94u);
    ctx->pc = 0x1D7C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C8Cu;
    // 0x1d7c90: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196660u, 0x1D7C8Cu, 0x1D7C94u)) {
        return;
    }
    ctx->pc = 0x1D7C94u;
label_1d7c94:
    // 0x1d7c94: 0xc06c8d4  jal         func_1B2350
    ctx->pc = 0x1D7C94u;
    SET_GPR_U32(ctx, 31, 0x1D7C9Cu);
    ctx->pc = 0x1B2350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2350u, 0x1D7C94u, 0x1D7C9Cu)) {
        return;
    }
    ctx->pc = 0x1D7C9Cu;
label_1d7c9c:
    // 0x1d7c9c: 0xc0756e6  jal         func_1D5B98
    ctx->pc = 0x1D7C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D7CA4u);
    ctx->pc = 0x1D5B98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5B98u, 0x1D7C9Cu, 0x1D7CA4u)) {
        return;
    }
    ctx->pc = 0x1D7CA4u;
label_1d7ca4:
    // 0x1d7ca4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1d7ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1d7ca8: 0xc074b5a  jal         func_1D2D68
    ctx->pc = 0x1D7CA8u;
    SET_GPR_U32(ctx, 31, 0x1D7CB0u);
    ctx->pc = 0x1D7CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CA8u;
    // 0x1d7cac: 0x24841840  addiu       $a0, $a0, 0x1840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2D68u, 0x1D7CA8u, 0x1D7CB0u)) {
        return;
    }
    ctx->pc = 0x1D7CB0u;
label_1d7cb0:
    // 0x1d7cb0: 0xc07b2e4  jal         func_1ECB90
    ctx->pc = 0x1D7CB0u;
    SET_GPR_U32(ctx, 31, 0x1D7CB8u);
    ctx->pc = 0x1ECB90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ECB90u, 0x1D7CB0u, 0x1D7CB8u)) {
        return;
    }
    ctx->pc = 0x1D7CB8u;
label_1d7cb8:
    // 0x1d7cb8: 0xc07be28  jal         func_1EF8A0
    ctx->pc = 0x1D7CB8u;
    SET_GPR_U32(ctx, 31, 0x1D7CC0u);
    ctx->pc = 0x1EF8A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF8A0u, 0x1D7CB8u, 0x1D7CC0u)) {
        return;
    }
    ctx->pc = 0x1D7CC0u;
label_1d7cc0:
    // 0x1d7cc0: 0xc05c27a  jal         func_1709E8
    ctx->pc = 0x1D7CC0u;
    SET_GPR_U32(ctx, 31, 0x1D7CC8u);
    ctx->pc = 0x1709E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1709E8u, 0x1D7CC0u, 0x1D7CC8u)) {
        return;
    }
    ctx->pc = 0x1D7CC8u;
label_1d7cc8:
    // 0x1d7cc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ccc: 0xc07908c  jal         func_1E4230
    ctx->pc = 0x1D7CCCu;
    SET_GPR_U32(ctx, 31, 0x1D7CD4u);
    ctx->pc = 0x1D7CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CCCu;
    // 0x1d7cd0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4230u, 0x1D7CCCu, 0x1D7CD4u)) {
        return;
    }
    ctx->pc = 0x1D7CD4u;
label_1d7cd4:
    // 0x1d7cd4: 0xc051876  jal         func_1461D8
    ctx->pc = 0x1D7CD4u;
    SET_GPR_U32(ctx, 31, 0x1D7CDCu);
    ctx->pc = 0x1461D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1461D8u, 0x1D7CD4u, 0x1D7CDCu)) {
        return;
    }
    ctx->pc = 0x1D7CDCu;
label_1d7cdc:
    // 0x1d7cdc: 0xc07cd68  jal         func_1F35A0
    ctx->pc = 0x1D7CDCu;
    SET_GPR_U32(ctx, 31, 0x1D7CE4u);
    ctx->pc = 0x1F35A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F35A0u, 0x1D7CDCu, 0x1D7CE4u)) {
        return;
    }
    ctx->pc = 0x1D7CE4u;
label_1d7ce4:
    // 0x1d7ce4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1d7ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d7ce8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7cec: 0xc0814aa  jal         func_2052A8
    ctx->pc = 0x1D7CECu;
    SET_GPR_U32(ctx, 31, 0x1D7CF4u);
    ctx->pc = 0x1D7CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CECu;
    // 0x1d7cf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2052A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2052A8u, 0x1D7CECu, 0x1D7CF4u)) {
        return;
    }
    ctx->pc = 0x1D7CF4u;
label_1d7cf4:
    // 0x1d7cf4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1d7cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1d7cf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7cfc: 0x24841718  addiu       $a0, $a0, 0x1718
    ctx->pc = 0x1d7cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5912));
    // 0x1d7d00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d7d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d04: 0xc0814aa  jal         func_2052A8
    ctx->pc = 0x1D7D04u;
    SET_GPR_U32(ctx, 31, 0x1D7D0Cu);
    ctx->pc = 0x1D7D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D04u;
    // 0x1d7d08: 0xac510024  sw          $s1, 0x24($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2052A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2052A8u, 0x1D7D04u, 0x1D7D0Cu)) {
        return;
    }
    ctx->pc = 0x1D7D0Cu;
label_1d7d0c:
    // 0x1d7d0c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1d7d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1d7d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d14: 0x24841720  addiu       $a0, $a0, 0x1720
    ctx->pc = 0x1d7d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5920));
    // 0x1d7d18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d7d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d1c: 0xc0814aa  jal         func_2052A8
    ctx->pc = 0x1D7D1Cu;
    SET_GPR_U32(ctx, 31, 0x1D7D24u);
    ctx->pc = 0x1D7D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D1Cu;
    // 0x1d7d20: 0xac510024  sw          $s1, 0x24($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2052A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2052A8u, 0x1D7D1Cu, 0x1D7D24u)) {
        return;
    }
    ctx->pc = 0x1D7D24u;
label_1d7d24:
    // 0x1d7d24: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1d7d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1d7d28: 0xac510024  sw          $s1, 0x24($v0)
    ctx->pc = 0x1d7d28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 17));
    // 0x1d7d2c: 0x24841730  addiu       $a0, $a0, 0x1730
    ctx->pc = 0x1d7d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5936));
    // 0x1d7d30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d34: 0xc0814aa  jal         func_2052A8
    ctx->pc = 0x1D7D34u;
    SET_GPR_U32(ctx, 31, 0x1D7D3Cu);
    ctx->pc = 0x1D7D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D34u;
    // 0x1d7d38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2052A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2052A8u, 0x1D7D34u, 0x1D7D3Cu)) {
        return;
    }
    ctx->pc = 0x1D7D3Cu;
label_1d7d3c:
    // 0x1d7d3c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1d7d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1d7d40: 0xac510024  sw          $s1, 0x24($v0)
    ctx->pc = 0x1d7d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 17));
    // 0x1d7d44: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1D7D44u;
    SET_GPR_U32(ctx, 31, 0x1D7D4Cu);
    ctx->pc = 0x1D7D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D44u;
    // 0x1d7d48: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1D7D44u, 0x1D7D4Cu)) {
        return;
    }
    ctx->pc = 0x1D7D4Cu;
label_1d7d4c:
    // 0x1d7d4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7D4Cu;
    {
        const bool branch_taken_0x1d7d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7d4c) {
            ctx->pc = 0x1D7D5Cu;
            goto label_1d7d5c;
        }
    }
    ctx->pc = 0x1D7D54u;
    // 0x1d7d54: 0xc07bfda  jal         func_1EFF68
    ctx->pc = 0x1D7D54u;
    SET_GPR_U32(ctx, 31, 0x1D7D5Cu);
    ctx->pc = 0x1D7D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D54u;
    // 0x1d7d58: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFF68u, 0x1D7D54u, 0x1D7D5Cu)) {
        return;
    }
    ctx->pc = 0x1D7D5Cu;
label_1d7d5c:
    // 0x1d7d5c: 0xc06cce6  jal         func_1B3398
    ctx->pc = 0x1D7D5Cu;
    SET_GPR_U32(ctx, 31, 0x1D7D64u);
    ctx->pc = 0x1B3398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3398u, 0x1D7D5Cu, 0x1D7D64u)) {
        return;
    }
    ctx->pc = 0x1D7D64u;
label_1d7d64:
    // 0x1d7d64: 0xc07cd60  jal         func_1F3580
    ctx->pc = 0x1D7D64u;
    SET_GPR_U32(ctx, 31, 0x1D7D6Cu);
    ctx->pc = 0x1F3580u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3580u, 0x1D7D64u, 0x1D7D6Cu)) {
        return;
    }
    ctx->pc = 0x1D7D6Cu;
label_1d7d6c:
    // 0x1d7d6c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d7d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d7d70: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D7D70u;
    {
        const bool branch_taken_0x1d7d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7d70) {
            ctx->pc = 0x1D7D98u;
            goto label_1d7d98;
        }
    }
    ctx->pc = 0x1D7D78u;
    // 0x1d7d78: 0xc07cdd8  jal         func_1F3760
    ctx->pc = 0x1D7D78u;
    SET_GPR_U32(ctx, 31, 0x1D7D80u);
    ctx->pc = 0x1D7D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D78u;
    // 0x1d7d7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3760u, 0x1D7D78u, 0x1D7D80u)) {
        return;
    }
    ctx->pc = 0x1D7D80u;
label_1d7d80:
    // 0x1d7d80: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d7d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d7d84: 0x24429d58  addiu       $v0, $v0, -0x62A8
    ctx->pc = 0x1d7d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942040));
    // 0x1d7d88: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1d7d88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339D78u));
    // 0x1d7d8c: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x1d7d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339D7Cu));
    // 0x1d7d90: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1d7d90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x339D7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339D7Cu, _value); } while (0);
    // 0x1d7d94: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x1d7d94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x339D78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339D78u, _value); } while (0);
label_1d7d98:
    // 0x1d7d98: 0xc07d812  jal         func_1F6048
    ctx->pc = 0x1D7D98u;
    SET_GPR_U32(ctx, 31, 0x1D7DA0u);
    ctx->pc = 0x1F6048u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6048u, 0x1D7D98u, 0x1D7DA0u)) {
        return;
    }
    ctx->pc = 0x1D7DA0u;
label_1d7da0:
    // 0x1d7da0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d7da4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d7da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7da8: 0xc08b736  jal         func_22DCD8
    ctx->pc = 0x1D7DA8u;
    SET_GPR_U32(ctx, 31, 0x1D7DB0u);
    ctx->pc = 0x1D7DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DA8u;
    // 0x1d7dac: 0xac519d94  sw          $s1, -0x626C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942100), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DCD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22DCD8u, 0x1D7DA8u, 0x1D7DB0u)) {
        return;
    }
    ctx->pc = 0x1D7DB0u;
label_1d7db0:
    // 0x1d7db0: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x1d7db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d7db4: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x1d7db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1d7db8: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x1d7db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1d7dbc: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x1d7dbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1d7dc0: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x1d7dc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d7dc4: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x1d7dc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d7dc8: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1d7dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d7dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DCCu;
        // 0x1d7dd0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7DD4u;
    // 0x1d7dd4: 0x0  nop
    ctx->pc = 0x1d7dd4u;
    // NOP
    ctx->pc = 0x1d7dd8u;
}
