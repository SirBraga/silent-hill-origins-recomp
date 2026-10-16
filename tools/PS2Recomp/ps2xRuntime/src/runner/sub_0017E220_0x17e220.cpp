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

// Function: sub_0017E220
// Address: 0x17e220 - 0x17e2d8
void sub_0017E220_0x17e220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E220_0x17e220");
#endif

    switch (ctx->pc) {
        case 0x17e248u: goto label_17e248;
        case 0x17e26cu: goto label_17e26c;
        case 0x17e27cu: goto label_17e27c;
        case 0x17e2a0u: goto label_17e2a0;
        case 0x17e2b8u: goto label_17e2b8;
        case 0x17e2c8u: goto label_17e2c8;
        default: break;
    }

    ctx->pc = 0x17e220u;

    // 0x17e220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e224: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17e224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17e228: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17e228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17e22c: 0x14a20026  bne         $a1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x17E22Cu;
    {
        const bool branch_taken_0x17e22c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E22Cu;
        // 0x17e230: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e22c) {
            ctx->pc = 0x17E2C8u;
            goto label_17e2c8;
        }
    }
    ctx->pc = 0x17E234u;
    // 0x17e234: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x17E234u;
    {
        const bool branch_taken_0x17e234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E234u;
        // 0x17e238: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e234) {
            ctx->pc = 0x17E2A8u;
            goto label_17e2a8;
        }
    }
    ctx->pc = 0x17E23Cu;
    // 0x17e23c: 0x26107a98  addiu       $s0, $s0, 0x7A98
    ctx->pc = 0x17e23cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31384));
    // 0x17e240: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x17E240u;
    SET_GPR_U32(ctx, 31, 0x17E248u);
    ctx->pc = 0x17E244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E240u;
    // 0x17e244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x17E240u, 0x17E248u)) {
        return;
    }
    ctx->pc = 0x17E248u;
label_17e248:
    // 0x17e248: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x17e248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x17e24c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17e24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17e250: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x17e250u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x17e254: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e258: 0x24c6e2d8  addiu       $a2, $a2, -0x1D28
    ctx->pc = 0x17e258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959832));
    // 0x17e25c: 0xac62f988  sw          $v0, -0x678($v1)
    ctx->pc = 0x17e25cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF988u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF988u, _value); } while (0);
    // 0x17e260: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x17e260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x17e264: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x17E264u;
    SET_GPR_U32(ctx, 31, 0x17E26Cu);
    ctx->pc = 0x17E268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E264u;
    // 0x17e268: 0x2484f990  addiu       $a0, $a0, -0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x17E264u, 0x17E26Cu)) {
        return;
    }
    ctx->pc = 0x17E26Cu;
label_17e26c:
    // 0x17e26c: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x17e26cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x17e270: 0x26107aa8  addiu       $s0, $s0, 0x7AA8
    ctx->pc = 0x17e270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31400));
    // 0x17e274: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x17E274u;
    SET_GPR_U32(ctx, 31, 0x17E27Cu);
    ctx->pc = 0x17E278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E274u;
    // 0x17e278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x17E274u, 0x17E27Cu)) {
        return;
    }
    ctx->pc = 0x17E27Cu;
label_17e27c:
    // 0x17e27c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x17e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x17e280: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17e280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17e284: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x17e284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x17e288: 0xac62f994  sw          $v0, -0x66C($v1)
    ctx->pc = 0x17e288u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF994u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF994u, _value); } while (0);
    // 0x17e28c: 0x2484f998  addiu       $a0, $a0, -0x668
    ctx->pc = 0x17e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965656));
    // 0x17e290: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e294: 0x24c6e380  addiu       $a2, $a2, -0x1C80
    ctx->pc = 0x17e294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960000));
    // 0x17e298: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x17E298u;
    SET_GPR_U32(ctx, 31, 0x17E2A0u);
    ctx->pc = 0x17E29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E298u;
    // 0x17e29c: 0x2407004c  addiu       $a3, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x17E298u, 0x17E2A0u)) {
        return;
    }
    ctx->pc = 0x17E2A0u;
label_17e2a0:
    // 0x17e2a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17E2A0u;
    {
        const bool branch_taken_0x17e2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2A0u;
        // 0x17e2a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e2a0) {
            ctx->pc = 0x17E2CCu;
            goto label_17e2cc;
        }
    }
    ctx->pc = 0x17E2A8u;
label_17e2a8:
    // 0x17e2a8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17e2ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17e2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e2b0: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x17E2B0u;
    SET_GPR_U32(ctx, 31, 0x17E2B8u);
    ctx->pc = 0x17E2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E2B0u;
    // 0x17e2b4: 0x2484f998  addiu       $a0, $a0, -0x668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x17E2B0u, 0x17E2B8u)) {
        return;
    }
    ctx->pc = 0x17E2B8u;
label_17e2b8:
    // 0x17e2b8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17e2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17e2bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17e2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e2c0: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x17E2C0u;
    SET_GPR_U32(ctx, 31, 0x17E2C8u);
    ctx->pc = 0x17E2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E2C0u;
    // 0x17e2c4: 0x2484f990  addiu       $a0, $a0, -0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x17E2C0u, 0x17E2C8u)) {
        return;
    }
    ctx->pc = 0x17E2C8u;
label_17e2c8:
    // 0x17e2c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17e2c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17e2cc:
    // 0x17e2cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x17E2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2D0u;
        // 0x17e2d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E2D8u;
}
