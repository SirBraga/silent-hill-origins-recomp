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

// Function: sub_00267C98
// Address: 0x267c98 - 0x267d60
void sub_00267C98_0x267c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267C98_0x267c98");
#endif

    switch (ctx->pc) {
        case 0x267cb8u: goto label_267cb8;
        case 0x267cd4u: goto label_267cd4;
        case 0x267cdcu: goto label_267cdc;
        case 0x267cf4u: goto label_267cf4;
        case 0x267cfcu: goto label_267cfc;
        case 0x267d10u: goto label_267d10;
        case 0x267d20u: goto label_267d20;
        case 0x267d30u: goto label_267d30;
        case 0x267d3cu: goto label_267d3c;
        default: break;
    }

    ctx->pc = 0x267c98u;

    // 0x267c98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x267c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x267c9c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x267c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x267ca0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x267ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x267ca4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x267ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x267ca8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x267ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x267cac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x267cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x267cb0: 0xc092442  jal         func_249108
    ctx->pc = 0x267CB0u;
    SET_GPR_U32(ctx, 31, 0x267CB8u);
    ctx->pc = 0x267CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267CB0u;
    // 0x267cb4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249108u, 0x267CB0u, 0x267CB8u)) {
        return;
    }
    ctx->pc = 0x267CB8u;
label_267cb8:
    // 0x267cb8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x267cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x267cbc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x267cbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267cc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x267cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267cc4: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x267cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
    // 0x267cc8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x267cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x267ccc: 0xc0c121e  jal         func_304878
    ctx->pc = 0x267CCCu;
    SET_GPR_U32(ctx, 31, 0x267CD4u);
    ctx->pc = 0x267CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267CCCu;
    // 0x267cd0: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304878u, 0x267CCCu, 0x267CD4u)) {
        return;
    }
    ctx->pc = 0x267CD4u;
label_267cd4:
    // 0x267cd4: 0xc0c1c4c  jal         func_307130
    ctx->pc = 0x267CD4u;
    SET_GPR_U32(ctx, 31, 0x267CDCu);
    ctx->pc = 0x267CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267CD4u;
    // 0x267cd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x307130u, 0x267CD4u, 0x267CDCu)) {
        return;
    }
    ctx->pc = 0x267CDCu;
label_267cdc:
    // 0x267cdc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x267cdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ce4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x267ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ce8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x267ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267cec: 0xc0c12cc  jal         func_304B30
    ctx->pc = 0x267CECu;
    SET_GPR_U32(ctx, 31, 0x267CF4u);
    ctx->pc = 0x267CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267CECu;
    // 0x267cf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304B30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304B30u, 0x267CECu, 0x267CF4u)) {
        return;
    }
    ctx->pc = 0x267CF4u;
label_267cf4:
    // 0x267cf4: 0xc0c10d8  jal         func_304360
    ctx->pc = 0x267CF4u;
    SET_GPR_U32(ctx, 31, 0x267CFCu);
    ctx->pc = 0x267CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267CF4u;
    // 0x267cf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304360u, 0x267CF4u, 0x267CFCu)) {
        return;
    }
    ctx->pc = 0x267CFCu;
label_267cfc:
    // 0x267cfc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x267cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x267d00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x267d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x267d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d08: 0xc0c1286  jal         func_304A18
    ctx->pc = 0x267D08u;
    SET_GPR_U32(ctx, 31, 0x267D10u);
    ctx->pc = 0x267D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267D08u;
    // 0x267d0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304A18u, 0x267D08u, 0x267D10u)) {
        return;
    }
    ctx->pc = 0x267D10u;
label_267d10:
    // 0x267d10: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x267d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x267d14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x267d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d18: 0xc0c1c28  jal         func_3070A0
    ctx->pc = 0x267D18u;
    SET_GPR_U32(ctx, 31, 0x267D20u);
    ctx->pc = 0x267D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267D18u;
    // 0x267d1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3070A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3070A0u, 0x267D18u, 0x267D20u)) {
        return;
    }
    ctx->pc = 0x267D20u;
label_267d20:
    // 0x267d20: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x267d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x267d24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x267d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d28: 0xc0c1c28  jal         func_3070A0
    ctx->pc = 0x267D28u;
    SET_GPR_U32(ctx, 31, 0x267D30u);
    ctx->pc = 0x267D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267D28u;
    // 0x267d2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3070A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3070A0u, 0x267D28u, 0x267D30u)) {
        return;
    }
    ctx->pc = 0x267D30u;
label_267d30:
    // 0x267d30: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x267d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x267d34: 0xc0c1c40  jal         func_307100
    ctx->pc = 0x267D34u;
    SET_GPR_U32(ctx, 31, 0x267D3Cu);
    ctx->pc = 0x267D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267D34u;
    // 0x267d38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x307100u, 0x267D34u, 0x267D3Cu)) {
        return;
    }
    ctx->pc = 0x267D3Cu;
label_267d3c:
    // 0x267d3c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x267d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267d40: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x267d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267d44: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x267d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267d48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x267d48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267d4c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x267d4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x267d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267d54: 0x3e00008  jr          $ra
    ctx->pc = 0x267D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D54u;
        // 0x267d58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267D5Cu;
    // 0x267d5c: 0x0  nop
    ctx->pc = 0x267d5cu;
    // NOP
    ctx->pc = 0x267d60u;
}
