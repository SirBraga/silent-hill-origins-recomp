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

// Function: sub_0018B700
// Address: 0x18b700 - 0x18b7a0
void sub_0018B700_0x18b700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B700_0x18b700");
#endif

    switch (ctx->pc) {
        case 0x18b744u: goto label_18b744;
        case 0x18b760u: goto label_18b760;
        case 0x18b768u: goto label_18b768;
        case 0x18b778u: goto label_18b778;
        case 0x18b784u: goto label_18b784;
        default: break;
    }

    ctx->pc = 0x18b700u;

    // 0x18b700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18b700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18b704: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18b704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x18b708: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18b708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18b70c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18b70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18b710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18b710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b714: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x18b714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x18b718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b71c: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x18b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33870Cu));
    // 0x18b720: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x18b720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x18b724: 0x8c900054  lw          $s0, 0x54($a0)
    ctx->pc = 0x18b724u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x18b728: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B728u;
    {
        const bool branch_taken_0x18b728 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B728u;
        // 0x18b72c: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b728) {
            ctx->pc = 0x18B738u;
            goto label_18b738;
        }
    }
    ctx->pc = 0x18B730u;
    // 0x18b730: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18b730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18b734: 0x24508e28  addiu       $s0, $v0, -0x71D8
    ctx->pc = 0x18b734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938152));
label_18b738:
    // 0x18b738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b73c: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x18B73Cu;
    SET_GPR_U32(ctx, 31, 0x18B744u);
    ctx->pc = 0x18B740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B73Cu;
    // 0x18b740: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x18B73Cu, 0x18B744u)) {
        return;
    }
    ctx->pc = 0x18B744u;
label_18b744:
    // 0x18b744: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18B744u;
    {
        const bool branch_taken_0x18b744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B744u;
        // 0x18b748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b744) {
            ctx->pc = 0x18B788u;
            goto label_18b788;
        }
    }
    ctx->pc = 0x18B74Cu;
    // 0x18b74c: 0x82220008  lb          $v0, 0x8($s1)
    ctx->pc = 0x18b74cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18b750: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B750u;
    {
        const bool branch_taken_0x18b750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b750) {
            ctx->pc = 0x18B760u;
            goto label_18b760;
        }
    }
    ctx->pc = 0x18B758u;
    // 0x18b758: 0xc06293a  jal         func_18A4E8
    ctx->pc = 0x18B758u;
    SET_GPR_U32(ctx, 31, 0x18B760u);
    ctx->pc = 0x18B75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B758u;
    // 0x18b75c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A4E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18A4E8u, 0x18B758u, 0x18B760u)) {
        return;
    }
    ctx->pc = 0x18B760u;
label_18b760:
    // 0x18b760: 0xc062a2a  jal         func_18A8A8
    ctx->pc = 0x18B760u;
    SET_GPR_U32(ctx, 31, 0x18B768u);
    ctx->pc = 0x18B764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B760u;
    // 0x18b764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A8A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18A8A8u, 0x18B760u, 0x18B768u)) {
        return;
    }
    ctx->pc = 0x18B768u;
label_18b768:
    // 0x18b768: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x18b768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18b76c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18b76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b770: 0xc081b9a  jal         func_206E68
    ctx->pc = 0x18B770u;
    SET_GPR_U32(ctx, 31, 0x18B778u);
    ctx->pc = 0x18B774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B770u;
    // 0x18b774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206E68u, 0x18B770u, 0x18B778u)) {
        return;
    }
    ctx->pc = 0x18B778u;
label_18b778:
    // 0x18b778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18b778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b77c: 0xc0629b2  jal         func_18A6C8
    ctx->pc = 0x18B77Cu;
    SET_GPR_U32(ctx, 31, 0x18B784u);
    ctx->pc = 0x18B780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B77Cu;
    // 0x18b780: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A6C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18A6C8u, 0x18B77Cu, 0x18B784u)) {
        return;
    }
    ctx->pc = 0x18B784u;
label_18b784:
    // 0x18b784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b788:
    // 0x18b788: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18b788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b78c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18b78cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b790: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x18b790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b798: 0x3e00008  jr          $ra
    ctx->pc = 0x18B798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B798u;
        // 0x18b79c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B7A0u;
}
