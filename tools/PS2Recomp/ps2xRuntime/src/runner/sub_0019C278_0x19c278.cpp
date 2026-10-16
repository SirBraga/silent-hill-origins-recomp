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

// Function: sub_0019C278
// Address: 0x19c278 - 0x19c2f0
void sub_0019C278_0x19c278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C278_0x19c278");
#endif

    switch (ctx->pc) {
        case 0x19c2a0u: goto label_19c2a0;
        case 0x19c2c4u: goto label_19c2c4;
        case 0x19c2dcu: goto label_19c2dc;
        default: break;
    }

    ctx->pc = 0x19c278u;

    // 0x19c278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c27c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19c27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x19c280: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c284: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19C284u;
    {
        const bool branch_taken_0x19c284 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C284u;
        // 0x19c288: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c284) {
            ctx->pc = 0x19C2DCu;
            goto label_19c2dc;
        }
    }
    ctx->pc = 0x19C28Cu;
    // 0x19c28c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x19C28Cu;
    {
        const bool branch_taken_0x19c28c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C28Cu;
        // 0x19c290: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c28c) {
            ctx->pc = 0x19C2CCu;
            goto label_19c2cc;
        }
    }
    ctx->pc = 0x19C294u;
    // 0x19c294: 0x2610a290  addiu       $s0, $s0, -0x5D70
    ctx->pc = 0x19c294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943376));
    // 0x19c298: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x19C298u;
    SET_GPR_U32(ctx, 31, 0x19C2A0u);
    ctx->pc = 0x19C29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C298u;
    // 0x19c29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x19C298u, 0x19C2A0u)) {
        return;
    }
    ctx->pc = 0x19C2A0u;
label_19c2a0:
    // 0x19c2a0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x19c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x19c2a4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19c2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19c2a8: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19c2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19c2ac: 0xac628160  sw          $v0, -0x7EA0($v1)
    ctx->pc = 0x19c2acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6F8160u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8160u, _value); } while (0);
    // 0x19c2b0: 0x24848168  addiu       $a0, $a0, -0x7E98
    ctx->pc = 0x19c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934888));
    // 0x19c2b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19c2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c2b8: 0x24c6c2f0  addiu       $a2, $a2, -0x3D10
    ctx->pc = 0x19c2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951664));
    // 0x19c2bc: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x19C2BCu;
    SET_GPR_U32(ctx, 31, 0x19C2C4u);
    ctx->pc = 0x19C2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C2BCu;
    // 0x19c2c0: 0x2407007c  addiu       $a3, $zero, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x19C2BCu, 0x19C2C4u)) {
        return;
    }
    ctx->pc = 0x19C2C4u;
label_19c2c4:
    // 0x19c2c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19C2C4u;
    {
        const bool branch_taken_0x19c2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2C4u;
        // 0x19c2c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c2c4) {
            ctx->pc = 0x19C2E0u;
            goto label_19c2e0;
        }
    }
    ctx->pc = 0x19C2CCu;
label_19c2cc:
    // 0x19c2cc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19c2d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19c2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c2d4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x19C2D4u;
    SET_GPR_U32(ctx, 31, 0x19C2DCu);
    ctx->pc = 0x19C2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C2D4u;
    // 0x19c2d8: 0x24848168  addiu       $a0, $a0, -0x7E98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x19C2D4u, 0x19C2DCu)) {
        return;
    }
    ctx->pc = 0x19C2DCu;
label_19c2dc:
    // 0x19c2dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c2dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19c2e0:
    // 0x19c2e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x19C2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2E4u;
        // 0x19c2e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C2ECu;
    // 0x19c2ec: 0x0  nop
    ctx->pc = 0x19c2ecu;
    // NOP
    ctx->pc = 0x19c2f0u;
}
