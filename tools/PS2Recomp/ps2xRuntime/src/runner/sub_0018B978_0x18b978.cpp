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

// Function: sub_0018B978
// Address: 0x18b978 - 0x18ba50
void sub_0018B978_0x18b978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B978_0x18b978");
#endif

    switch (ctx->pc) {
        case 0x18b998u: goto label_18b998;
        case 0x18b9acu: goto label_18b9ac;
        case 0x18b9c8u: goto label_18b9c8;
        case 0x18ba20u: goto label_18ba20;
        default: break;
    }

    ctx->pc = 0x18b978u;

    // 0x18b978: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18b978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18b97c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18b97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18b980: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18b980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18b984: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18b984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b988: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18b98c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18b990: 0xc06457c  jal         func_1915F0
    ctx->pc = 0x18B990u;
    SET_GPR_U32(ctx, 31, 0x18B998u);
    ctx->pc = 0x18B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B990u;
    // 0x18b994: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1915F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1915F0u, 0x18B990u, 0x18B998u)) {
        return;
    }
    ctx->pc = 0x18B998u;
label_18b998:
    // 0x18b998: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x18b998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x18b99c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18b99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b9a0: 0x8c46bd50  lw          $a2, -0x42B0($v0)
    ctx->pc = 0x18b9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6CBD50u));
    // 0x18b9a4: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x18B9A4u;
    SET_GPR_U32(ctx, 31, 0x18B9ACu);
    ctx->pc = 0x18B9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B9A4u;
    // 0x18b9a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x18B9A4u, 0x18B9ACu)) {
        return;
    }
    ctx->pc = 0x18B9ACu;
label_18b9ac:
    // 0x18b9ac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18b9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b9b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18b9b4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18B9B4u;
    {
        const bool branch_taken_0x18b9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9B4u;
        // 0x18b9b8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b9b4) {
            ctx->pc = 0x18BA30u;
            goto label_18ba30;
        }
    }
    ctx->pc = 0x18B9BCu;
    // 0x18b9bc: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x18b9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18b9c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b9c4: 0x0  nop
    ctx->pc = 0x18b9c4u;
    // NOP
label_18b9c8:
    // 0x18b9c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x18b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18b9cc: 0x50520009  beql        $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x18B9CCu;
    {
        const bool branch_taken_0x18b9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x18b9cc) {
            ctx->pc = 0x18B9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B9CCu;
            // 0x18b9d0: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B9F4u;
            goto label_18b9f4;
        }
    }
    ctx->pc = 0x18B9D4u;
    // 0x18b9d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B9D4u;
    {
        const bool branch_taken_0x18b9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b9d4) {
            ctx->pc = 0x18B9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B9D4u;
            // 0x18b9d8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B9DCu;
    // 0x18b9dc: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18B9DCu;
    {
        const bool branch_taken_0x18b9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x18B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9DCu;
        // 0x18b9e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b9dc) {
            ctx->pc = 0x18B9FCu;
            goto label_18b9fc;
        }
    }
    ctx->pc = 0x18B9E4u;
    // 0x18b9e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18B9E4u;
    {
        const bool branch_taken_0x18b9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9E4u;
        // 0x18b9e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b9e4) {
            ctx->pc = 0x18BA10u;
            goto label_18ba10;
        }
    }
    ctx->pc = 0x18B9ECu;
label_18b9ec:
    // 0x18b9ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18B9ECu;
    {
        const bool branch_taken_0x18b9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9ECu;
        // 0x18b9f0: 0xae220120  sw          $v0, 0x120($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b9ec) {
            ctx->pc = 0x18BA04u;
            goto label_18ba04;
        }
    }
    ctx->pc = 0x18B9F4u;
label_18b9f4:
    // 0x18b9f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18B9F4u;
    {
        const bool branch_taken_0x18b9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9F4u;
        // 0x18b9f8: 0xae220124  sw          $v0, 0x124($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b9f4) {
            ctx->pc = 0x18BA04u;
            goto label_18ba04;
        }
    }
    ctx->pc = 0x18B9FCu;
label_18b9fc:
    // 0x18b9fc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x18b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18ba00: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x18ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
label_18ba04:
    // 0x18ba04: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ba08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18ba08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ba0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18ba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ba10:
    // 0x18ba10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18ba14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18ba18: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x18BA18u;
    SET_GPR_U32(ctx, 31, 0x18BA20u);
    ctx->pc = 0x18BA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BA18u;
    // 0x18ba1c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x18BA18u, 0x18BA20u)) {
        return;
    }
    ctx->pc = 0x18BA20u;
label_18ba20:
    // 0x18ba20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ba24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ba28: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x18BA28u;
    {
        const bool branch_taken_0x18ba28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA28u;
        // 0x18ba2c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba28) {
            ctx->pc = 0x18B9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b9c8;
        }
    }
    ctx->pc = 0x18BA30u;
label_18ba30:
    // 0x18ba30: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x18ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
    // 0x18ba34: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18ba34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ba38: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18ba38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ba3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ba3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ba40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18ba40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ba44: 0x3e00008  jr          $ra
    ctx->pc = 0x18BA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA44u;
        // 0x18ba48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BA4Cu;
    // 0x18ba4c: 0x0  nop
    ctx->pc = 0x18ba4cu;
    // NOP
    ctx->pc = 0x18ba50u;
}
