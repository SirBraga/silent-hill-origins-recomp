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

// Function: sub_002ABC18
// Address: 0x2abc18 - 0x2abc88
void sub_002ABC18_0x2abc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABC18_0x2abc18");
#endif

    switch (ctx->pc) {
        case 0x2abc78u: goto label_2abc78;
        default: break;
    }

    ctx->pc = 0x2abc18u;

    // 0x2abc18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2abc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2abc1c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2abc1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abc20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2abc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2abc24: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x2abc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2abc28: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2ABC28u;
    {
        const bool branch_taken_0x2abc28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC28u;
        // 0x2abc2c: 0x30a7ffff  andi        $a3, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc28) {
            ctx->pc = 0x2ABC78u;
            goto label_2abc78;
        }
    }
    ctx->pc = 0x2ABC30u;
    // 0x2abc30: 0x94c20020  lhu         $v0, 0x20($a2)
    ctx->pc = 0x2abc30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2abc34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2abc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2abc38: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x2abc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2abc3c: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2abc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2abc40: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2abc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2abc44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2abc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2abc48: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x2abc48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2abc4c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2abc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2abc50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2abc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2abc54: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2abc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2abc58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ABC58u;
    {
        const bool branch_taken_0x2abc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC58u;
        // 0x2abc5c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc58) {
            ctx->pc = 0x2ABC78u;
            goto label_2abc78;
        }
    }
    ctx->pc = 0x2ABC60u;
    // 0x2abc60: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x2abc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2abc64: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x2abc64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2abc68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2abc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2abc6c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2abc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2abc70: 0xc0ab84a  jal         func_2AE128
    ctx->pc = 0x2ABC70u;
    SET_GPR_U32(ctx, 31, 0x2ABC78u);
    ctx->pc = 0x2ABC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC70u;
    // 0x2abc74: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE128u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE128u, 0x2ABC70u, 0x2ABC78u)) {
        return;
    }
    ctx->pc = 0x2ABC78u;
label_2abc78:
    // 0x2abc78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2abc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC7Cu;
        // 0x2abc80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABC84u;
    // 0x2abc84: 0x0  nop
    ctx->pc = 0x2abc84u;
    // NOP
    ctx->pc = 0x2abc88u;
}
