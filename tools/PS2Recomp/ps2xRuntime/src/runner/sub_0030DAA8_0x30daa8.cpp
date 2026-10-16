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

// Function: sub_0030DAA8
// Address: 0x30daa8 - 0x30db38
void sub_0030DAA8_0x30daa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DAA8_0x30daa8");
#endif

    switch (ctx->pc) {
        case 0x30dad0u: goto label_30dad0;
        case 0x30db08u: goto label_30db08;
        default: break;
    }

    ctx->pc = 0x30daa8u;

    // 0x30daa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30daa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30daac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30daacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30dab0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30dab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30dab4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30dab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30dab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30dabc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30dabcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dac0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30dac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30dac4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30dac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30dac8: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30DAC8u;
    SET_GPR_U32(ctx, 31, 0x30DAD0u);
    ctx->pc = 0x30DACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DAC8u;
    // 0x30dacc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30DAC8u, 0x30DAD0u)) {
        return;
    }
    ctx->pc = 0x30DAD0u;
label_30dad0:
    // 0x30dad0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30DAD0u;
    {
        const bool branch_taken_0x30dad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAD0u;
        // 0x30dad4: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dad0) {
            ctx->pc = 0x30DAE8u;
            goto label_30dae8;
        }
    }
    ctx->pc = 0x30DAD8u;
    // 0x30dad8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x30dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30dadc: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30dadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30dae0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DAE0u;
    {
        const bool branch_taken_0x30dae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x30DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAE0u;
        // 0x30dae4: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dae0) {
            ctx->pc = 0x30DAF0u;
            goto label_30daf0;
        }
    }
    ctx->pc = 0x30DAE8u;
label_30dae8:
    // 0x30dae8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30DAE8u;
    {
        const bool branch_taken_0x30dae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAE8u;
        // 0x30daec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dae8) {
            ctx->pc = 0x30DB20u;
            goto label_30db20;
        }
    }
    ctx->pc = 0x30DAF0u;
label_30daf0:
    // 0x30daf0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x30DAF0u;
    {
        const bool branch_taken_0x30daf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAF0u;
        // 0x30daf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30daf0) {
            ctx->pc = 0x30DB20u;
            goto label_30db20;
        }
    }
    ctx->pc = 0x30DAF8u;
    // 0x30daf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30daf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30dafc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30dafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30db00: 0xc0aa40e  jal         func_2A9038
    ctx->pc = 0x30DB00u;
    SET_GPR_U32(ctx, 31, 0x30DB08u);
    ctx->pc = 0x30DB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DB00u;
    // 0x30db04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9038u, 0x30DB00u, 0x30DB08u)) {
        return;
    }
    ctx->pc = 0x30DB08u;
label_30db08:
    // 0x30db08: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30DB08u;
    {
        const bool branch_taken_0x30db08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB08u;
        // 0x30db0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db08) {
            ctx->pc = 0x30DB20u;
            goto label_30db20;
        }
    }
    ctx->pc = 0x30DB10u;
    // 0x30db10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30db10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30db14: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30db14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30db18: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30db18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30db1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30db20:
    // 0x30db20: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30db20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30db24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30db24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30db28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30db28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30db2c: 0x3e00008  jr          $ra
    ctx->pc = 0x30DB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB2Cu;
        // 0x30db30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DB34u;
    // 0x30db34: 0x0  nop
    ctx->pc = 0x30db34u;
    // NOP
    ctx->pc = 0x30db38u;
}
