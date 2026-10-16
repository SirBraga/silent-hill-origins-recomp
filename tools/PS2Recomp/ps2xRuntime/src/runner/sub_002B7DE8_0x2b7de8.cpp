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

// Function: sub_002B7DE8
// Address: 0x2b7de8 - 0x2b7ea0
void sub_002B7DE8_0x2b7de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7DE8_0x2b7de8");
#endif

    switch (ctx->pc) {
        case 0x2b7e18u: goto label_2b7e18;
        default: break;
    }

    ctx->pc = 0x2b7de8u;

    // 0x2b7de8: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2b7de8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7dec: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2b7decu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2b7df0: 0x8d640008  lw          $a0, 0x8($t3)
    ctx->pc = 0x2b7df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2b7df4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2b7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2b7df8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b7df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b7dfc: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x2b7dfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b7e00: 0x10650024  beq         $v1, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B7E00u;
    {
        const bool branch_taken_0x2b7e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B7E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E00u;
        // 0x2b7e04: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e00) {
            ctx->pc = 0x2B7E94u;
            goto label_2b7e94;
        }
    }
    ctx->pc = 0x2B7E08u;
    // 0x2b7e08: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2b7e08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e0c: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x2b7e0cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e10: 0xc10c0  sll         $v0, $t4, 3
    ctx->pc = 0x2b7e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x2b7e14: 0x0  nop
    ctx->pc = 0x2b7e14u;
    // NOP
label_2b7e18:
    // 0x2b7e18: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2b7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2b7e1c: 0x94480002  lhu         $t0, 0x2($v0)
    ctx->pc = 0x2b7e1cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b7e20: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x2b7e20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2b7e24: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x2b7e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2b7e28: 0x94c70002  lhu         $a3, 0x2($a2)
    ctx->pc = 0x2b7e28u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2b7e2c: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x2b7e2cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b7e30: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2b7e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2b7e34: 0x94c90006  lhu         $t1, 0x6($a2)
    ctx->pc = 0x2b7e34u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x2b7e38: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2b7e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2b7e3c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2b7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2b7e40: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x2b7e40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b7e44: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2b7e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2b7e48: 0xa4470002  sh          $a3, 0x2($v0)
    ctx->pc = 0x2b7e48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b7e4c: 0x928c0  sll         $a1, $t1, 3
    ctx->pc = 0x2b7e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2b7e50: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x2b7e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2b7e54: 0x94a70002  lhu         $a3, 0x2($a1)
    ctx->pc = 0x2b7e54u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2b7e58: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x2b7e58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b7e5c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2b7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2b7e60: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2b7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2b7e64: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2b7e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2b7e68: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x2b7e68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b7e6c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2b7e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2b7e70: 0xa4670002  sh          $a3, 0x2($v1)
    ctx->pc = 0x2b7e70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b7e74: 0x9562000c  lhu         $v0, 0xC($t3)
    ctx->pc = 0x2b7e74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x2b7e78: 0xa4c20002  sh          $v0, 0x2($a2)
    ctx->pc = 0x2b7e78u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b7e7c: 0xa568000c  sh          $t0, 0xC($t3)
    ctx->pc = 0x2b7e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 12), (uint16_t)GPR_U32(ctx, 8));
    // 0x2b7e80: 0xa4a80002  sh          $t0, 0x2($a1)
    ctx->pc = 0x2b7e80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x2b7e84: 0xa569000c  sh          $t1, 0xC($t3)
    ctx->pc = 0x2b7e84u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 12), (uint16_t)GPR_U32(ctx, 9));
    // 0x2b7e88: 0x95a20002  lhu         $v0, 0x2($t5)
    ctx->pc = 0x2b7e88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x2b7e8c: 0x144cffe2  bne         $v0, $t4, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2B7E8Cu;
    {
        const bool branch_taken_0x2b7e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        ctx->pc = 0x2B7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E8Cu;
        // 0x2b7e90: 0xc10c0  sll         $v0, $t4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e8c) {
            ctx->pc = 0x2B7E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7e18;
        }
    }
    ctx->pc = 0x2B7E94u;
label_2b7e94:
    // 0x2b7e94: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7E9Cu;
    // 0x2b7e9c: 0x0  nop
    ctx->pc = 0x2b7e9cu;
    // NOP
    ctx->pc = 0x2b7ea0u;
}
