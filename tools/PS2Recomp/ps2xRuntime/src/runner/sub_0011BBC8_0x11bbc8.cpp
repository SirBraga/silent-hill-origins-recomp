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

// Function: sub_0011BBC8
// Address: 0x11bbc8 - 0x11bc58
void sub_0011BBC8_0x11bbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BBC8_0x11bbc8");
#endif

    switch (ctx->pc) {
        case 0x11bc0cu: goto label_11bc0c;
        case 0x11bc18u: goto label_11bc18;
        case 0x11bc24u: goto label_11bc24;
        case 0x11bc30u: goto label_11bc30;
        case 0x11bc3cu: goto label_11bc3c;
        default: break;
    }

    ctx->pc = 0x11bbc8u;

    // 0x11bbc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11bbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11bbcc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x11bbd0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11bbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11bbd4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11bbd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11bbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11bbdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11bbdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbe0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11bbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11bbe4: 0x2442b010  addiu       $v0, $v0, -0x4FF0
    ctx->pc = 0x11bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946832));
    // 0x11bbe8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11bbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x11bbec: 0x2463b030  addiu       $v1, $v1, -0x4FD0
    ctx->pc = 0x11bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946864));
    // 0x11bbf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11bbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11bbf4: 0x26320098  addiu       $s2, $s1, 0x98
    ctx->pc = 0x11bbf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    // 0x11bbf8: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x11bbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x11bbfc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x11bbfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc00: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x11bc00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x11bc04: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x11BC04u;
    SET_GPR_U32(ctx, 31, 0x11BC0Cu);
    ctx->pc = 0x11BC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC04u;
    // 0x11bc08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x11BC04u, 0x11BC0Cu)) {
        return;
    }
    ctx->pc = 0x11BC0Cu;
label_11bc0c:
    // 0x11bc0c: 0x263000a0  addiu       $s0, $s1, 0xA0
    ctx->pc = 0x11bc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x11bc10: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x11BC10u;
    SET_GPR_U32(ctx, 31, 0x11BC18u);
    ctx->pc = 0x11BC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC10u;
    // 0x11bc14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x11BC10u, 0x11BC18u)) {
        return;
    }
    ctx->pc = 0x11BC18u;
label_11bc18:
    // 0x11bc18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc1c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x11BC1Cu;
    SET_GPR_U32(ctx, 31, 0x11BC24u);
    ctx->pc = 0x11BC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC1Cu;
    // 0x11bc20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x11BC1Cu, 0x11BC24u)) {
        return;
    }
    ctx->pc = 0x11BC24u;
label_11bc24:
    // 0x11bc24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc28: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x11BC28u;
    SET_GPR_U32(ctx, 31, 0x11BC30u);
    ctx->pc = 0x11BC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC28u;
    // 0x11bc2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x11BC28u, 0x11BC30u)) {
        return;
    }
    ctx->pc = 0x11BC30u;
label_11bc30:
    // 0x11bc30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11bc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc34: 0xc04465e  jal         func_111978
    ctx->pc = 0x11BC34u;
    SET_GPR_U32(ctx, 31, 0x11BC3Cu);
    ctx->pc = 0x11BC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC34u;
    // 0x11bc38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111978u, 0x11BC34u, 0x11BC3Cu)) {
        return;
    }
    ctx->pc = 0x11BC3Cu;
label_11bc3c:
    // 0x11bc3c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11bc3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11bc40: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11bc40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11bc44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11bc44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bc48: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11bc48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bc4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11bc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bc50: 0x3e00008  jr          $ra
    ctx->pc = 0x11BC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC50u;
        // 0x11bc54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BC58u;
}
