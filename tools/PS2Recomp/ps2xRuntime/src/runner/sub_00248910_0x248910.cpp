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

// Function: sub_00248910
// Address: 0x248910 - 0x248980
void sub_00248910_0x248910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248910_0x248910");
#endif

    switch (ctx->pc) {
        case 0x24893cu: goto label_24893c;
        case 0x248950u: goto label_248950;
        default: break;
    }

    ctx->pc = 0x248910u;

    // 0x248910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x248910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x248914: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x248914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x248918: 0x8c424188  lw          $v0, 0x4188($v0)
    ctx->pc = 0x248918u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4188u));
    // 0x24891c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24891cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x248920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x248920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x248924: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x248924u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x248928: 0x26100fec  addiu       $s0, $s0, 0xFEC
    ctx->pc = 0x248928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4076));
    // 0x24892c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24892cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248934: 0xc092694  jal         func_249A50
    ctx->pc = 0x248934u;
    SET_GPR_U32(ctx, 31, 0x24893Cu);
    ctx->pc = 0x248938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248934u;
    // 0x248938: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249A50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249A50u, 0x248934u, 0x24893Cu)) {
        return;
    }
    ctx->pc = 0x24893Cu;
label_24893c:
    // 0x24893c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x24893cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x248940: 0x8c844188  lw          $a0, 0x4188($a0)
    ctx->pc = 0x248940u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4188u));
    // 0x248944: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x248944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x248948: 0xc092690  jal         func_249A40
    ctx->pc = 0x248948u;
    SET_GPR_U32(ctx, 31, 0x248950u);
    ctx->pc = 0x24894Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248948u;
    // 0x24894c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249A40u, 0x248948u, 0x248950u)) {
        return;
    }
    ctx->pc = 0x248950u;
label_248950:
    // 0x248950: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x248950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x248954: 0x8c63418c  lw          $v1, 0x418C($v1)
    ctx->pc = 0x248954u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B418Cu));
    // 0x248958: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x248958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24895c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24895cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248960: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x248960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x248964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x248964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24896c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24896cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x248970: 0xac23418c  sw          $v1, 0x418C($at)
    ctx->pc = 0x248970u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B418Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B418Cu, _value); } while (0);
    // 0x248974: 0x3e00008  jr          $ra
    ctx->pc = 0x248974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248974u;
        // 0x248978: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24897Cu;
    // 0x24897c: 0x0  nop
    ctx->pc = 0x24897cu;
    // NOP
    ctx->pc = 0x248980u;
}
