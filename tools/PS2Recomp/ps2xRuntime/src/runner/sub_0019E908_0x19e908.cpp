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

// Function: sub_0019E908
// Address: 0x19e908 - 0x19e988
void sub_0019E908_0x19e908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E908_0x19e908");
#endif

    switch (ctx->pc) {
        case 0x19e934u: goto label_19e934;
        case 0x19e944u: goto label_19e944;
        case 0x19e95cu: goto label_19e95c;
        default: break;
    }

    ctx->pc = 0x19e908u;

    // 0x19e908: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19e908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19e90c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19e90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e910: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19e910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19e914: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19e914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19e918: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19e918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e91c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x19e91cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e920: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19e920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19e924: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19e924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19e928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e92c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19E92Cu;
    SET_GPR_U32(ctx, 31, 0x19E934u);
    ctx->pc = 0x19E930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E92Cu;
    // 0x19e930: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19E92Cu, 0x19E934u)) {
        return;
    }
    ctx->pc = 0x19E934u;
label_19e934:
    // 0x19e934: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e938: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x19e938u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19e93c: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19E93Cu;
    SET_GPR_U32(ctx, 31, 0x19E944u);
    ctx->pc = 0x19E940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E93Cu;
    // 0x19e940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19E93Cu, 0x19E944u)) {
        return;
    }
    ctx->pc = 0x19E944u;
label_19e944:
    // 0x19e944: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19e944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19e948: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19e948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e94c: 0x2463a7e8  addiu       $v1, $v1, -0x5818
    ctx->pc = 0x19e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944744));
    // 0x19e950: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19e950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e954: 0xc065b98  jal         func_196E60
    ctx->pc = 0x19E954u;
    SET_GPR_U32(ctx, 31, 0x19E95Cu);
    ctx->pc = 0x19E958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E954u;
    // 0x19e958: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196E60u, 0x19E954u, 0x19E95Cu)) {
        return;
    }
    ctx->pc = 0x19E95Cu;
label_19e95c:
    // 0x19e95c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x19e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x19e960: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19e960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e964: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19e964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e968: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19e968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e96c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19e96cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e970: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19e970u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e978: 0x3e00008  jr          $ra
    ctx->pc = 0x19E978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E978u;
        // 0x19e97c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E980u;
    // 0x19e980: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19e980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e984: 0x0  nop
    ctx->pc = 0x19e984u;
    // NOP
    ctx->pc = 0x19e988u;
}
