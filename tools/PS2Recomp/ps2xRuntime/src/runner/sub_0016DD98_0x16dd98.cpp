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

// Function: sub_0016DD98
// Address: 0x16dd98 - 0x16de10
void sub_0016DD98_0x16dd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DD98_0x16dd98");
#endif

    switch (ctx->pc) {
        case 0x16ddc0u: goto label_16ddc0;
        case 0x16dde4u: goto label_16dde4;
        case 0x16ddfcu: goto label_16ddfc;
        default: break;
    }

    ctx->pc = 0x16dd98u;

    // 0x16dd98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16dd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16dd9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16dd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16dda0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16dda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16dda4: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16DDA4u;
    {
        const bool branch_taken_0x16dda4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDA4u;
        // 0x16dda8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dda4) {
            ctx->pc = 0x16DDFCu;
            goto label_16ddfc;
        }
    }
    ctx->pc = 0x16DDACu;
    // 0x16ddac: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x16DDACu;
    {
        const bool branch_taken_0x16ddac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDACu;
        // 0x16ddb0: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ddac) {
            ctx->pc = 0x16DDECu;
            goto label_16ddec;
        }
    }
    ctx->pc = 0x16DDB4u;
    // 0x16ddb4: 0x26104e28  addiu       $s0, $s0, 0x4E28
    ctx->pc = 0x16ddb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20008));
    // 0x16ddb8: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x16DDB8u;
    SET_GPR_U32(ctx, 31, 0x16DDC0u);
    ctx->pc = 0x16DDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DDB8u;
    // 0x16ddbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x16DDB8u, 0x16DDC0u)) {
        return;
    }
    ctx->pc = 0x16DDC0u;
label_16ddc0:
    // 0x16ddc0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x16ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x16ddc4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16ddc8: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16ddc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16ddcc: 0xac62f6d0  sw          $v0, -0x930($v1)
    ctx->pc = 0x16ddccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF6D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF6D0u, _value); } while (0);
    // 0x16ddd0: 0x2484f6d8  addiu       $a0, $a0, -0x928
    ctx->pc = 0x16ddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964952));
    // 0x16ddd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ddd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ddd8: 0x24c6de10  addiu       $a2, $a2, -0x21F0
    ctx->pc = 0x16ddd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958608));
    // 0x16dddc: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16DDDCu;
    SET_GPR_U32(ctx, 31, 0x16DDE4u);
    ctx->pc = 0x16DDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DDDCu;
    // 0x16dde0: 0x24070060  addiu       $a3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16DDDCu, 0x16DDE4u)) {
        return;
    }
    ctx->pc = 0x16DDE4u;
label_16dde4:
    // 0x16dde4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16DDE4u;
    {
        const bool branch_taken_0x16dde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDE4u;
        // 0x16dde8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dde4) {
            ctx->pc = 0x16DE00u;
            goto label_16de00;
        }
    }
    ctx->pc = 0x16DDECu;
label_16ddec:
    // 0x16ddec: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16ddf0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16ddf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ddf4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x16DDF4u;
    SET_GPR_U32(ctx, 31, 0x16DDFCu);
    ctx->pc = 0x16DDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DDF4u;
    // 0x16ddf8: 0x2484f6d8  addiu       $a0, $a0, -0x928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x16DDF4u, 0x16DDFCu)) {
        return;
    }
    ctx->pc = 0x16DDFCu;
label_16ddfc:
    // 0x16ddfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16ddfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16de00:
    // 0x16de00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16de00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16de04: 0x3e00008  jr          $ra
    ctx->pc = 0x16DE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE04u;
        // 0x16de08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DE0Cu;
    // 0x16de0c: 0x0  nop
    ctx->pc = 0x16de0cu;
    // NOP
    ctx->pc = 0x16de10u;
}
