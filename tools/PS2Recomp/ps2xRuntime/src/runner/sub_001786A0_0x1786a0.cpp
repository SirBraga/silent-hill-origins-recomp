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

// Function: sub_001786A0
// Address: 0x1786a0 - 0x178758
void sub_001786A0_0x1786a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001786A0_0x1786a0");
#endif

    switch (ctx->pc) {
        case 0x1786c8u: goto label_1786c8;
        case 0x1786ecu: goto label_1786ec;
        case 0x1786fcu: goto label_1786fc;
        case 0x178720u: goto label_178720;
        case 0x178738u: goto label_178738;
        case 0x178748u: goto label_178748;
        default: break;
    }

    ctx->pc = 0x1786a0u;

    // 0x1786a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1786a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1786a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1786a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1786a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1786a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1786ac: 0x14a20026  bne         $a1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1786ACu;
    {
        const bool branch_taken_0x1786ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1786B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786ACu;
        // 0x1786b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1786ac) {
            ctx->pc = 0x178748u;
            goto label_178748;
        }
    }
    ctx->pc = 0x1786B4u;
    // 0x1786b4: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1786B4u;
    {
        const bool branch_taken_0x1786b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1786B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786B4u;
        // 0x1786b8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1786b4) {
            ctx->pc = 0x178728u;
            goto label_178728;
        }
    }
    ctx->pc = 0x1786BCu;
    // 0x1786bc: 0x26106a60  addiu       $s0, $s0, 0x6A60
    ctx->pc = 0x1786bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27232));
    // 0x1786c0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1786C0u;
    SET_GPR_U32(ctx, 31, 0x1786C8u);
    ctx->pc = 0x1786C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1786C0u;
    // 0x1786c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1786C0u, 0x1786C8u)) {
        return;
    }
    ctx->pc = 0x1786C8u;
label_1786c8:
    // 0x1786c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1786c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1786cc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1786ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1786d0: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x1786d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x1786d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1786d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786d8: 0x24c68808  addiu       $a2, $a2, -0x77F8
    ctx->pc = 0x1786d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936584));
    // 0x1786dc: 0xac62f850  sw          $v0, -0x7B0($v1)
    ctx->pc = 0x1786dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF850u, _value); } while (0);
    // 0x1786e0: 0x24070144  addiu       $a3, $zero, 0x144
    ctx->pc = 0x1786e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
    // 0x1786e4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1786E4u;
    SET_GPR_U32(ctx, 31, 0x1786ECu);
    ctx->pc = 0x1786E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1786E4u;
    // 0x1786e8: 0x2484f858  addiu       $a0, $a0, -0x7A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1786E4u, 0x1786ECu)) {
        return;
    }
    ctx->pc = 0x1786ECu;
label_1786ec:
    // 0x1786ec: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x1786ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x1786f0: 0x26106a68  addiu       $s0, $s0, 0x6A68
    ctx->pc = 0x1786f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27240));
    // 0x1786f4: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1786F4u;
    SET_GPR_U32(ctx, 31, 0x1786FCu);
    ctx->pc = 0x1786F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1786F4u;
    // 0x1786f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1786F4u, 0x1786FCu)) {
        return;
    }
    ctx->pc = 0x1786FCu;
label_1786fc:
    // 0x1786fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1786fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x178700: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x178700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x178704: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x178704u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x178708: 0xac62f85c  sw          $v0, -0x7A4($v1)
    ctx->pc = 0x178708u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF85Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF85Cu, _value); } while (0);
    // 0x17870c: 0x2484f860  addiu       $a0, $a0, -0x7A0
    ctx->pc = 0x17870cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965344));
    // 0x178710: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178714: 0x24c68858  addiu       $a2, $a2, -0x77A8
    ctx->pc = 0x178714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x178718: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x178718u;
    SET_GPR_U32(ctx, 31, 0x178720u);
    ctx->pc = 0x17871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178718u;
    // 0x17871c: 0x240700cc  addiu       $a3, $zero, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x178718u, 0x178720u)) {
        return;
    }
    ctx->pc = 0x178720u;
label_178720:
    // 0x178720: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x178720u;
    {
        const bool branch_taken_0x178720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178720u;
        // 0x178724: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178720) {
            ctx->pc = 0x17874Cu;
            goto label_17874c;
        }
    }
    ctx->pc = 0x178728u;
label_178728:
    // 0x178728: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x178728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17872c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17872cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178730: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x178730u;
    SET_GPR_U32(ctx, 31, 0x178738u);
    ctx->pc = 0x178734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178730u;
    // 0x178734: 0x2484f860  addiu       $a0, $a0, -0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x178730u, 0x178738u)) {
        return;
    }
    ctx->pc = 0x178738u;
label_178738:
    // 0x178738: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x178738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17873c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17873cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178740: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x178740u;
    SET_GPR_U32(ctx, 31, 0x178748u);
    ctx->pc = 0x178744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178740u;
    // 0x178744: 0x2484f858  addiu       $a0, $a0, -0x7A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x178740u, 0x178748u)) {
        return;
    }
    ctx->pc = 0x178748u;
label_178748:
    // 0x178748: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x178748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17874c:
    // 0x17874c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17874cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178750: 0x3e00008  jr          $ra
    ctx->pc = 0x178750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178750u;
        // 0x178754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178758u;
}
