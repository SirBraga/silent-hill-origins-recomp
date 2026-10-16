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

// Function: sub_00169CB0
// Address: 0x169cb0 - 0x169d28
void sub_00169CB0_0x169cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169CB0_0x169cb0");
#endif

    switch (ctx->pc) {
        case 0x169cd8u: goto label_169cd8;
        case 0x169cfcu: goto label_169cfc;
        case 0x169d14u: goto label_169d14;
        default: break;
    }

    ctx->pc = 0x169cb0u;

    // 0x169cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169cb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x169cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x169cb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x169cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x169cbc: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x169CBCu;
    {
        const bool branch_taken_0x169cbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x169CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CBCu;
        // 0x169cc0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169cbc) {
            ctx->pc = 0x169D14u;
            goto label_169d14;
        }
    }
    ctx->pc = 0x169CC4u;
    // 0x169cc4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x169CC4u;
    {
        const bool branch_taken_0x169cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CC4u;
        // 0x169cc8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169cc4) {
            ctx->pc = 0x169D04u;
            goto label_169d04;
        }
    }
    ctx->pc = 0x169CCCu;
    // 0x169ccc: 0x261044b0  addiu       $s0, $s0, 0x44B0
    ctx->pc = 0x169cccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17584));
    // 0x169cd0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x169CD0u;
    SET_GPR_U32(ctx, 31, 0x169CD8u);
    ctx->pc = 0x169CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169CD0u;
    // 0x169cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x169CD0u, 0x169CD8u)) {
        return;
    }
    ctx->pc = 0x169CD8u;
label_169cd8:
    // 0x169cd8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x169cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x169cdc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x169cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x169ce0: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x169ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x169ce4: 0xac62f628  sw          $v0, -0x9D8($v1)
    ctx->pc = 0x169ce4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF628u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF628u, _value); } while (0);
    // 0x169ce8: 0x2484f630  addiu       $a0, $a0, -0x9D0
    ctx->pc = 0x169ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964784));
    // 0x169cec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x169cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169cf0: 0x24c69d28  addiu       $a2, $a2, -0x62D8
    ctx->pc = 0x169cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941992));
    // 0x169cf4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x169CF4u;
    SET_GPR_U32(ctx, 31, 0x169CFCu);
    ctx->pc = 0x169CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169CF4u;
    // 0x169cf8: 0x2407006c  addiu       $a3, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x169CF4u, 0x169CFCu)) {
        return;
    }
    ctx->pc = 0x169CFCu;
label_169cfc:
    // 0x169cfc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x169CFCu;
    {
        const bool branch_taken_0x169cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CFCu;
        // 0x169d00: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169cfc) {
            ctx->pc = 0x169D18u;
            goto label_169d18;
        }
    }
    ctx->pc = 0x169D04u;
label_169d04:
    // 0x169d04: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x169d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x169d08: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x169d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169d0c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x169D0Cu;
    SET_GPR_U32(ctx, 31, 0x169D14u);
    ctx->pc = 0x169D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D0Cu;
    // 0x169d10: 0x2484f630  addiu       $a0, $a0, -0x9D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x169D0Cu, 0x169D14u)) {
        return;
    }
    ctx->pc = 0x169D14u;
label_169d14:
    // 0x169d14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x169d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_169d18:
    // 0x169d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x169D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D1Cu;
        // 0x169d20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169D24u;
    // 0x169d24: 0x0  nop
    ctx->pc = 0x169d24u;
    // NOP
    ctx->pc = 0x169d28u;
}
