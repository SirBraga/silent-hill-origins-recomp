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

// Function: sub_001AA5B0
// Address: 0x1aa5b0 - 0x1aa650
void sub_001AA5B0_0x1aa5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA5B0_0x1aa5b0");
#endif

    switch (ctx->pc) {
        case 0x1aa600u: goto label_1aa600;
        case 0x1aa60cu: goto label_1aa60c;
        case 0x1aa624u: goto label_1aa624;
        case 0x1aa638u: goto label_1aa638;
        default: break;
    }

    ctx->pc = 0x1aa5b0u;

    // 0x1aa5b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1aa5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1aa5b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1aa5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1aa5b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1aa5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1aa5bc: 0x2442b5e8  addiu       $v0, $v0, -0x4A18
    ctx->pc = 0x1aa5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948328));
    // 0x1aa5c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1aa5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1aa5c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aa5c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1aa5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1aa5cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa5d0: 0xae2200ec  sw          $v0, 0xEC($s1)
    ctx->pc = 0x1aa5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 2));
    // 0x1aa5d4: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x1aa5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1aa5d8: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AA5D8u;
    {
        const bool branch_taken_0x1aa5d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA5D8u;
        // 0x1aa5dc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa5d8) {
            ctx->pc = 0x1AA624u;
            goto label_1aa624;
        }
    }
    ctx->pc = 0x1AA5E0u;
    // 0x1aa5e0: 0x8cc3fff0  lw          $v1, -0x10($a2)
    ctx->pc = 0x1aa5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967280)));
    // 0x1aa5e4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1aa5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1aa5e8: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1aa5e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1aa5ec: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x1aa5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1aa5f0: 0x50d0000a  beql        $a2, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AA5F0u;
    {
        const bool branch_taken_0x1aa5f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 16));
        if (branch_taken_0x1aa5f0) {
            ctx->pc = 0x1AA5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA5F0u;
            // 0x1aa5f4: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA61Cu;
            goto label_1aa61c;
        }
    }
    ctx->pc = 0x1AA5F8u;
    // 0x1aa5f8: 0x2610ffd0  addiu       $s0, $s0, -0x30
    ctx->pc = 0x1aa5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
    // 0x1aa5fc: 0x0  nop
    ctx->pc = 0x1aa5fcu;
    // NOP
label_1aa600:
    // 0x1aa600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa604: 0xc069c44  jal         func_1A7110
    ctx->pc = 0x1AA604u;
    SET_GPR_U32(ctx, 31, 0x1AA60Cu);
    ctx->pc = 0x1AA608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA604u;
    // 0x1aa608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A7110u, 0x1AA604u, 0x1AA60Cu)) {
        return;
    }
    ctx->pc = 0x1AA60Cu;
label_1aa60c:
    // 0x1aa60c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1aa60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1aa610: 0x1450fffb  bne         $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AA610u;
    {
        const bool branch_taken_0x1aa610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1AA614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA610u;
        // 0x1aa614: 0x2610ffd0  addiu       $s0, $s0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa610) {
            ctx->pc = 0x1AA600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa600;
        }
    }
    ctx->pc = 0x1AA618u;
    // 0x1aa618: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1aa618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1aa61c:
    // 0x1aa61c: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1AA61Cu;
    SET_GPR_U32(ctx, 31, 0x1AA624u);
    ctx->pc = 0x1AA620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA61Cu;
    // 0x1aa620: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1AA61Cu, 0x1AA624u)) {
        return;
    }
    ctx->pc = 0x1AA624u;
label_1aa624:
    // 0x1aa624: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1aa624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1aa628: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA628u;
    {
        const bool branch_taken_0x1aa628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA628u;
        // 0x1aa62c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa628) {
            ctx->pc = 0x1AA63Cu;
            goto label_1aa63c;
        }
    }
    ctx->pc = 0x1AA630u;
    // 0x1aa630: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AA630u;
    SET_GPR_U32(ctx, 31, 0x1AA638u);
    ctx->pc = 0x1AA634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA630u;
    // 0x1aa634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AA630u, 0x1AA638u)) {
        return;
    }
    ctx->pc = 0x1AA638u;
label_1aa638:
    // 0x1aa638: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1aa638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa63c:
    // 0x1aa63c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1aa63cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa640: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1aa640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa648: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA648u;
        // 0x1aa64c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA650u;
}
