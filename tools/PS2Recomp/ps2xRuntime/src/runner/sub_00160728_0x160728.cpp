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

// Function: sub_00160728
// Address: 0x160728 - 0x1607a0
void sub_00160728_0x160728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160728_0x160728");
#endif

    switch (ctx->pc) {
        case 0x160750u: goto label_160750;
        case 0x160774u: goto label_160774;
        case 0x16078cu: goto label_16078c;
        default: break;
    }

    ctx->pc = 0x160728u;

    // 0x160728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16072c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16072cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x160730: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x160730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x160734: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x160734u;
    {
        const bool branch_taken_0x160734 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x160738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160734u;
        // 0x160738: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160734) {
            ctx->pc = 0x16078Cu;
            goto label_16078c;
        }
    }
    ctx->pc = 0x16073Cu;
    // 0x16073c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x16073Cu;
    {
        const bool branch_taken_0x16073c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x160740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16073Cu;
        // 0x160740: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16073c) {
            ctx->pc = 0x16077Cu;
            goto label_16077c;
        }
    }
    ctx->pc = 0x160744u;
    // 0x160744: 0x26103598  addiu       $s0, $s0, 0x3598
    ctx->pc = 0x160744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13720));
    // 0x160748: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x160748u;
    SET_GPR_U32(ctx, 31, 0x160750u);
    ctx->pc = 0x16074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160748u;
    // 0x16074c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x160748u, 0x160750u)) {
        return;
    }
    ctx->pc = 0x160750u;
label_160750:
    // 0x160750: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x160750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x160754: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x160754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x160758: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x160758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x16075c: 0xac62f580  sw          $v0, -0xA80($v1)
    ctx->pc = 0x16075cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF580u, _value); } while (0);
    // 0x160760: 0x2484f588  addiu       $a0, $a0, -0xA78
    ctx->pc = 0x160760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964616));
    // 0x160764: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160768: 0x24c607a0  addiu       $a2, $a2, 0x7A0
    ctx->pc = 0x160768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1952));
    // 0x16076c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16076Cu;
    SET_GPR_U32(ctx, 31, 0x160774u);
    ctx->pc = 0x160770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16076Cu;
    // 0x160770: 0x240700b8  addiu       $a3, $zero, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16076Cu, 0x160774u)) {
        return;
    }
    ctx->pc = 0x160774u;
label_160774:
    // 0x160774: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x160774u;
    {
        const bool branch_taken_0x160774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160774u;
        // 0x160778: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160774) {
            ctx->pc = 0x160790u;
            goto label_160790;
        }
    }
    ctx->pc = 0x16077Cu;
label_16077c:
    // 0x16077c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16077cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x160780: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x160780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160784: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x160784u;
    SET_GPR_U32(ctx, 31, 0x16078Cu);
    ctx->pc = 0x160788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160784u;
    // 0x160788: 0x2484f588  addiu       $a0, $a0, -0xA78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x160784u, 0x16078Cu)) {
        return;
    }
    ctx->pc = 0x16078Cu;
label_16078c:
    // 0x16078c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16078cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_160790:
    // 0x160790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x160790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160794: 0x3e00008  jr          $ra
    ctx->pc = 0x160794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160794u;
        // 0x160798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16079Cu;
    // 0x16079c: 0x0  nop
    ctx->pc = 0x16079cu;
    // NOP
    ctx->pc = 0x1607a0u;
}
