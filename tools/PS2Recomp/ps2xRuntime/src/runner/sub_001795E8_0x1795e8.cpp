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

// Function: sub_001795E8
// Address: 0x1795e8 - 0x179660
void sub_001795E8_0x1795e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001795E8_0x1795e8");
#endif

    switch (ctx->pc) {
        case 0x1795e8u: goto label_1795e8;
        case 0x1795ecu: goto label_1795ec;
        case 0x1795f0u: goto label_1795f0;
        case 0x1795f4u: goto label_1795f4;
        case 0x1795f8u: goto label_1795f8;
        case 0x1795fcu: goto label_1795fc;
        case 0x179600u: goto label_179600;
        case 0x179604u: goto label_179604;
        case 0x179608u: goto label_179608;
        case 0x17960cu: goto label_17960c;
        case 0x179610u: goto label_179610;
        case 0x179614u: goto label_179614;
        case 0x179618u: goto label_179618;
        case 0x17961cu: goto label_17961c;
        case 0x179620u: goto label_179620;
        case 0x179624u: goto label_179624;
        case 0x179628u: goto label_179628;
        case 0x17962cu: goto label_17962c;
        case 0x179630u: goto label_179630;
        case 0x179634u: goto label_179634;
        case 0x179638u: goto label_179638;
        case 0x17963cu: goto label_17963c;
        case 0x179640u: goto label_179640;
        case 0x179644u: goto label_179644;
        case 0x179648u: goto label_179648;
        case 0x17964cu: goto label_17964c;
        case 0x179650u: goto label_179650;
        case 0x179654u: goto label_179654;
        case 0x179658u: goto label_179658;
        case 0x17965cu: goto label_17965c;
        default: break;
    }

    ctx->pc = 0x1795e8u;

label_1795e8:
    // 0x1795e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1795e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1795ec:
    // 0x1795ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1795ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1795f0:
    // 0x1795f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1795f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1795f4:
    // 0x1795f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1795f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1795f8:
    // 0x1795f8: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1795f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1795fc:
    // 0x1795fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1795fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_179600:
    // 0x179600: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x179600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_179604:
    // 0x179604: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x179604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179608:
    // 0x179608: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x179608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17960c:
    // 0x17960c: 0x40f809  jalr        $v0
label_179610:
    if (ctx->pc == 0x179610u) {
        ctx->pc = 0x179610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17960Cu;
        // 0x179610: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179614u;
        goto label_179614;
    }
    ctx->pc = 0x17960Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179614u);
        ctx->pc = 0x179610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17960Cu;
        // 0x179610: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17960Cu, 0x179614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179614u;
label_179614:
    // 0x179614: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x179614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_179618:
    // 0x179618: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x179618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17961c:
    // 0x17961c: 0x40f809  jalr        $v0
label_179620:
    if (ctx->pc == 0x179620u) {
        ctx->pc = 0x179620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17961Cu;
        // 0x179620: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179624u;
        goto label_179624;
    }
    ctx->pc = 0x17961Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179624u);
        ctx->pc = 0x179620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17961Cu;
        // 0x179620: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17961Cu, 0x179624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179624u;
label_179624:
    // 0x179624: 0x922500f8  lbu         $a1, 0xF8($s1)
    ctx->pc = 0x179624u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 248)));
label_179628:
    // 0x179628: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x179628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_17962c:
    // 0x17962c: 0x922300f9  lbu         $v1, 0xF9($s1)
    ctx->pc = 0x17962cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 249)));
label_179630:
    // 0x179630: 0x922600fa  lbu         $a2, 0xFA($s1)
    ctx->pc = 0x179630u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 250)));
label_179634:
    // 0x179634: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x179634u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_179638:
    // 0x179638: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x179638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_17963c:
    // 0x17963c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x17963cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_179640:
    // 0x179640: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x179640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_179644:
    // 0x179644: 0x40f809  jalr        $v0
label_179648:
    if (ctx->pc == 0x179648u) {
        ctx->pc = 0x179648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179644u;
        // 0x179648: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17964Cu;
        goto label_17964c;
    }
    ctx->pc = 0x179644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17964Cu);
        ctx->pc = 0x179648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179644u;
        // 0x179648: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179644u, 0x17964Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17964Cu;
label_17964c:
    // 0x17964c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17964cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_179650:
    // 0x179650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x179650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_179654:
    // 0x179654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179658:
    // 0x179658: 0x3e00008  jr          $ra
label_17965c:
    if (ctx->pc == 0x17965Cu) {
        ctx->pc = 0x17965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179658u;
        // 0x17965c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179660u;
        goto label_fallthrough_0x179658;
    }
    ctx->pc = 0x179658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179658u;
        // 0x17965c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x179658:
    ctx->pc = 0x179660u;
}
