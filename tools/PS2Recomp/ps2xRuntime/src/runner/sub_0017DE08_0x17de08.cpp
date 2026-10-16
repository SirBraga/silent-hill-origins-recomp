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

// Function: sub_0017DE08
// Address: 0x17de08 - 0x17de80
void sub_0017DE08_0x17de08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DE08_0x17de08");
#endif

    switch (ctx->pc) {
        case 0x17de24u: goto label_17de24;
        case 0x17de68u: goto label_17de68;
        default: break;
    }

    ctx->pc = 0x17de08u;

    // 0x17de08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17de08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17de0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17de0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17de10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17de10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17de14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17de14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17de18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17de1c: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x17DE1Cu;
    SET_GPR_U32(ctx, 31, 0x17DE24u);
    ctx->pc = 0x17DE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DE1Cu;
    // 0x17de20: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x17DE1Cu, 0x17DE24u)) {
        return;
    }
    ctx->pc = 0x17DE24u;
label_17de24:
    // 0x17de24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x17de24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17de28: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x17de28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x17de2c: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x17DE2Cu;
    {
        const bool branch_taken_0x17de2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17de2c) {
            ctx->pc = 0x17DE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DE2Cu;
            // 0x17de30: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DE6Cu;
            goto label_17de6c;
        }
    }
    ctx->pc = 0x17DE34u;
    // 0x17de34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x17de34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x17de38: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x17de38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x17de3c: 0x8c45f950  lw          $a1, -0x6B0($v0)
    ctx->pc = 0x17de3cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6BF950u));
    // 0x17de40: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x17de40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x17de44: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x17de44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x17de48: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17DE48u;
    {
        const bool branch_taken_0x17de48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE48u;
        // 0x17de4c: 0x24860010  addiu       $a2, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de48) {
            ctx->pc = 0x17DE68u;
            goto label_17de68;
        }
    }
    ctx->pc = 0x17DE50u;
    // 0x17de50: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17de50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17de54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DE54u;
    {
        const bool branch_taken_0x17de54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE54u;
        // 0x17de58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de54) {
            ctx->pc = 0x17DE68u;
            goto label_17de68;
        }
    }
    ctx->pc = 0x17DE5Cu;
    // 0x17de5c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x17de5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x17de60: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x17DE60u;
    SET_GPR_U32(ctx, 31, 0x17DE68u);
    ctx->pc = 0x17DE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DE60u;
    // 0x17de64: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x17DE60u, 0x17DE68u)) {
        return;
    }
    ctx->pc = 0x17DE68u;
label_17de68:
    // 0x17de68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17de68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17de6c:
    // 0x17de6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17de6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17de70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17de70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17de74: 0x3e00008  jr          $ra
    ctx->pc = 0x17DE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE74u;
        // 0x17de78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DE7Cu;
    // 0x17de7c: 0x0  nop
    ctx->pc = 0x17de7cu;
    // NOP
    ctx->pc = 0x17de80u;
}
