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

// Function: sub_002B7D28
// Address: 0x2b7d28 - 0x2b7de8
void sub_002B7D28_0x2b7d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7D28_0x2b7d28");
#endif

    ctx->pc = 0x2b7d28u;

    // 0x2b7d28: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x2b7d28u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d2c: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x2b7d2cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d30: 0x95a2000c  lhu         $v0, 0xC($t5)
    ctx->pc = 0x2b7d30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x2b7d34: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x2b7d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
    // 0x2b7d38: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2B7D38u;
    {
        const bool branch_taken_0x2b7d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D38u;
        // 0x2b7d3c: 0xc0702d  daddu       $t6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7d38) {
            ctx->pc = 0x2B7DDCu;
            goto label_2b7ddc;
        }
    }
    ctx->pc = 0x2B7D40u;
    // 0x2b7d40: 0x95a7000c  lhu         $a3, 0xC($t5)
    ctx->pc = 0x2b7d40u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x2b7d44: 0x31ecffff  andi        $t4, $t7, 0xFFFF
    ctx->pc = 0x2b7d44u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x2b7d48: 0x8da60008  lw          $a2, 0x8($t5)
    ctx->pc = 0x2b7d48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x2b7d4c: 0xc50c0  sll         $t2, $t4, 3
    ctx->pc = 0x2b7d4cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x2b7d50: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2b7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2b7d54: 0x740c0  sll         $t0, $a3, 3
    ctx->pc = 0x2b7d54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2b7d58: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b7d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b7d5c: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x2b7d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2b7d60: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x2b7d60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b7d64: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x2b7d64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2b7d68: 0x31cbffff  andi        $t3, $t6, 0xFFFF
    ctx->pc = 0x2b7d68u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
    // 0x2b7d6c: 0xa5a3000c  sh          $v1, 0xC($t5)
    ctx->pc = 0x2b7d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b7d70: 0xb48c0  sll         $t1, $t3, 3
    ctx->pc = 0x2b7d70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x2b7d74: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x2b7d74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2b7d78: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b7d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b7d7c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2b7d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2b7d80: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2b7d80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2b7d84: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b7d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b7d88: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2b7d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2b7d8c: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x2b7d8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b7d90: 0xa5a3000c  sh          $v1, 0xC($t5)
    ctx->pc = 0x2b7d90u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b7d94: 0xa50e0004  sh          $t6, 0x4($t0)
    ctx->pc = 0x2b7d94u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 14));
    // 0x2b7d98: 0xa5040006  sh          $a0, 0x6($t0)
    ctx->pc = 0x2b7d98u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b7d9c: 0xa4af0004  sh          $t7, 0x4($a1)
    ctx->pc = 0x2b7d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 15));
    // 0x2b7da0: 0xa4a70006  sh          $a3, 0x6($a1)
    ctx->pc = 0x2b7da0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b7da4: 0x95430002  lhu         $v1, 0x2($t2)
    ctx->pc = 0x2b7da4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x2b7da8: 0xa50c0000  sh          $t4, 0x0($t0)
    ctx->pc = 0x2b7da8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x2b7dac: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2b7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2b7db0: 0xa5030002  sh          $v1, 0x2($t0)
    ctx->pc = 0x2b7db0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b7db4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b7db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b7db8: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x2b7db8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b7dbc: 0xa5470002  sh          $a3, 0x2($t2)
    ctx->pc = 0x2b7dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b7dc0: 0x95230002  lhu         $v1, 0x2($t1)
    ctx->pc = 0x2b7dc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x2b7dc4: 0xa4ab0000  sh          $t3, 0x0($a1)
    ctx->pc = 0x2b7dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x2b7dc8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2b7dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2b7dcc: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x2b7dccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b7dd0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b7dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b7dd4: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x2b7dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b7dd8: 0xa5240002  sh          $a0, 0x2($t1)
    ctx->pc = 0x2b7dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 4));
label_2b7ddc:
    // 0x2b7ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7DE4u;
    // 0x2b7de4: 0x0  nop
    ctx->pc = 0x2b7de4u;
    // NOP
    ctx->pc = 0x2b7de8u;
}
