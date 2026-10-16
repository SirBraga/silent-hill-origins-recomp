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

// Function: sub_0014A208
// Address: 0x14a208 - 0x14a2f0
void sub_0014A208_0x14a208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A208_0x14a208");
#endif

    switch (ctx->pc) {
        case 0x14a230u: goto label_14a230;
        case 0x14a23cu: goto label_14a23c;
        case 0x14a248u: goto label_14a248;
        case 0x14a254u: goto label_14a254;
        case 0x14a264u: goto label_14a264;
        case 0x14a288u: goto label_14a288;
        case 0x14a29cu: goto label_14a29c;
        case 0x14a2acu: goto label_14a2ac;
        case 0x14a2bcu: goto label_14a2bc;
        case 0x14a2ccu: goto label_14a2cc;
        case 0x14a2dcu: goto label_14a2dc;
        default: break;
    }

    ctx->pc = 0x14a208u;

    // 0x14a208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a20c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14a20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14a210: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14a210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14a214: 0x14a20031  bne         $a1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x14A214u;
    {
        const bool branch_taken_0x14a214 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x14A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A214u;
        // 0x14a218: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a214) {
            ctx->pc = 0x14A2DCu;
            goto label_14a2dc;
        }
    }
    ctx->pc = 0x14A21Cu;
    // 0x14a21c: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x14A21Cu;
    {
        const bool branch_taken_0x14a21c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a21c) {
            ctx->pc = 0x14A220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A21Cu;
            // 0x14a220: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A290u;
            goto label_14a290;
        }
    }
    ctx->pc = 0x14A224u;
    // 0x14a224: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14a224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14a228: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14A228u;
    SET_GPR_U32(ctx, 31, 0x14A230u);
    ctx->pc = 0x14A22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A228u;
    // 0x14a22c: 0x2484eea0  addiu       $a0, $a0, -0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14A228u, 0x14A230u)) {
        return;
    }
    ctx->pc = 0x14A230u;
label_14a230:
    // 0x14a230: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14a230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14a234: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14A234u;
    SET_GPR_U32(ctx, 31, 0x14A23Cu);
    ctx->pc = 0x14A238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A234u;
    // 0x14a238: 0x2484eea8  addiu       $a0, $a0, -0x1158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14A234u, 0x14A23Cu)) {
        return;
    }
    ctx->pc = 0x14A23Cu;
label_14a23c:
    // 0x14a23c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14a23cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14a240: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14A240u;
    SET_GPR_U32(ctx, 31, 0x14A248u);
    ctx->pc = 0x14A244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A240u;
    // 0x14a244: 0x2484eeb0  addiu       $a0, $a0, -0x1150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14A240u, 0x14A248u)) {
        return;
    }
    ctx->pc = 0x14A248u;
label_14a248:
    // 0x14a248: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14a248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14a24c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14A24Cu;
    SET_GPR_U32(ctx, 31, 0x14A254u);
    ctx->pc = 0x14A250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A24Cu;
    // 0x14a250: 0x2484eeb8  addiu       $a0, $a0, -0x1148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14A24Cu, 0x14A254u)) {
        return;
    }
    ctx->pc = 0x14A254u;
label_14a254:
    // 0x14a254: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x14a254u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x14a258: 0x26101ad8  addiu       $s0, $s0, 0x1AD8
    ctx->pc = 0x14a258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6872));
    // 0x14a25c: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x14A25Cu;
    SET_GPR_U32(ctx, 31, 0x14A264u);
    ctx->pc = 0x14A260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A25Cu;
    // 0x14a260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x14A25Cu, 0x14A264u)) {
        return;
    }
    ctx->pc = 0x14A264u;
label_14a264:
    // 0x14a264: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14a264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14a268: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14a268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14a26c: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x14a26cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x14a270: 0xac62eec0  sw          $v0, -0x1140($v1)
    ctx->pc = 0x14a270u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BEEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BEEC0u, _value); } while (0);
    // 0x14a274: 0x2484eec8  addiu       $a0, $a0, -0x1138
    ctx->pc = 0x14a274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962888));
    // 0x14a278: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14a278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a27c: 0x24c6a2f0  addiu       $a2, $a2, -0x5D10
    ctx->pc = 0x14a27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943472));
    // 0x14a280: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x14A280u;
    SET_GPR_U32(ctx, 31, 0x14A288u);
    ctx->pc = 0x14A284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A280u;
    // 0x14a284: 0x24070078  addiu       $a3, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x14A280u, 0x14A288u)) {
        return;
    }
    ctx->pc = 0x14A288u;
label_14a288:
    // 0x14a288: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14A288u;
    {
        const bool branch_taken_0x14a288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A288u;
        // 0x14a28c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a288) {
            ctx->pc = 0x14A2E0u;
            goto label_14a2e0;
        }
    }
    ctx->pc = 0x14A290u;
label_14a290:
    // 0x14a290: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14a290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a294: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x14A294u;
    SET_GPR_U32(ctx, 31, 0x14A29Cu);
    ctx->pc = 0x14A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A294u;
    // 0x14a298: 0x2484eec8  addiu       $a0, $a0, -0x1138 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x14A294u, 0x14A29Cu)) {
        return;
    }
    ctx->pc = 0x14A29Cu;
label_14a29c:
    // 0x14a29c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14a2a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14a2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a2a4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x14A2A4u;
    SET_GPR_U32(ctx, 31, 0x14A2ACu);
    ctx->pc = 0x14A2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A2A4u;
    // 0x14a2a8: 0x2484eeb8  addiu       $a0, $a0, -0x1148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x14A2A4u, 0x14A2ACu)) {
        return;
    }
    ctx->pc = 0x14A2ACu;
label_14a2ac:
    // 0x14a2ac: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14a2acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14a2b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14a2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a2b4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x14A2B4u;
    SET_GPR_U32(ctx, 31, 0x14A2BCu);
    ctx->pc = 0x14A2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A2B4u;
    // 0x14a2b8: 0x2484eeb0  addiu       $a0, $a0, -0x1150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x14A2B4u, 0x14A2BCu)) {
        return;
    }
    ctx->pc = 0x14A2BCu;
label_14a2bc:
    // 0x14a2bc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14a2c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14a2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a2c4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x14A2C4u;
    SET_GPR_U32(ctx, 31, 0x14A2CCu);
    ctx->pc = 0x14A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A2C4u;
    // 0x14a2c8: 0x2484eea8  addiu       $a0, $a0, -0x1158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x14A2C4u, 0x14A2CCu)) {
        return;
    }
    ctx->pc = 0x14A2CCu;
label_14a2cc:
    // 0x14a2cc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14a2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14a2d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14a2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a2d4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x14A2D4u;
    SET_GPR_U32(ctx, 31, 0x14A2DCu);
    ctx->pc = 0x14A2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A2D4u;
    // 0x14a2d8: 0x2484eea0  addiu       $a0, $a0, -0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x14A2D4u, 0x14A2DCu)) {
        return;
    }
    ctx->pc = 0x14A2DCu;
label_14a2dc:
    // 0x14a2dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14a2dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14a2e0:
    // 0x14a2e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x14A2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A2E4u;
        // 0x14a2e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A2ECu;
    // 0x14a2ec: 0x0  nop
    ctx->pc = 0x14a2ecu;
    // NOP
    ctx->pc = 0x14a2f0u;
}
