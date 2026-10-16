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

// Function: sub_0018C730
// Address: 0x18c730 - 0x18c7a8
void sub_0018C730_0x18c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C730_0x18c730");
#endif

    switch (ctx->pc) {
        case 0x18c758u: goto label_18c758;
        case 0x18c77cu: goto label_18c77c;
        case 0x18c794u: goto label_18c794;
        default: break;
    }

    ctx->pc = 0x18c730u;

    // 0x18c730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18c730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18c734: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18c734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18c738: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18c738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18c73c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18C73Cu;
    {
        const bool branch_taken_0x18c73c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x18C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C73Cu;
        // 0x18c740: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c73c) {
            ctx->pc = 0x18C794u;
            goto label_18c794;
        }
    }
    ctx->pc = 0x18C744u;
    // 0x18c744: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x18C744u;
    {
        const bool branch_taken_0x18c744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C744u;
        // 0x18c748: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c744) {
            ctx->pc = 0x18C784u;
            goto label_18c784;
        }
    }
    ctx->pc = 0x18C74Cu;
    // 0x18c74c: 0x26109250  addiu       $s0, $s0, -0x6DB0
    ctx->pc = 0x18c74cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939216));
    // 0x18c750: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x18C750u;
    SET_GPR_U32(ctx, 31, 0x18C758u);
    ctx->pc = 0x18C754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C750u;
    // 0x18c754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x18C750u, 0x18C758u)) {
        return;
    }
    ctx->pc = 0x18C758u;
label_18c758:
    // 0x18c758: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x18c758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x18c75c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18c75cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x18c760: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18c760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18c764: 0xac62bd70  sw          $v0, -0x4290($v1)
    ctx->pc = 0x18c764u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6CBD70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6CBD70u, _value); } while (0);
    // 0x18c768: 0x2484bd78  addiu       $a0, $a0, -0x4288
    ctx->pc = 0x18c768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950264));
    // 0x18c76c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18c76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c770: 0x24c6c7a8  addiu       $a2, $a2, -0x3858
    ctx->pc = 0x18c770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952872));
    // 0x18c774: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x18C774u;
    SET_GPR_U32(ctx, 31, 0x18C77Cu);
    ctx->pc = 0x18C778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C774u;
    // 0x18c778: 0x240700ec  addiu       $a3, $zero, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x18C774u, 0x18C77Cu)) {
        return;
    }
    ctx->pc = 0x18C77Cu;
label_18c77c:
    // 0x18c77c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18C77Cu;
    {
        const bool branch_taken_0x18c77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C77Cu;
        // 0x18c780: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c77c) {
            ctx->pc = 0x18C798u;
            goto label_18c798;
        }
    }
    ctx->pc = 0x18C784u;
label_18c784:
    // 0x18c784: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18c784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x18c788: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18c788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c78c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x18C78Cu;
    SET_GPR_U32(ctx, 31, 0x18C794u);
    ctx->pc = 0x18C790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C78Cu;
    // 0x18c790: 0x2484bd78  addiu       $a0, $a0, -0x4288 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x18C78Cu, 0x18C794u)) {
        return;
    }
    ctx->pc = 0x18C794u;
label_18c794:
    // 0x18c794: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18c794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18c798:
    // 0x18c798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c79c: 0x3e00008  jr          $ra
    ctx->pc = 0x18C79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C79Cu;
        // 0x18c7a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C7A4u;
    // 0x18c7a4: 0x0  nop
    ctx->pc = 0x18c7a4u;
    // NOP
    ctx->pc = 0x18c7a8u;
}
