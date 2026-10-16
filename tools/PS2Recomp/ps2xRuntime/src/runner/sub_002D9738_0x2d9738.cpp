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

// Function: sub_002D9738
// Address: 0x2d9738 - 0x2d9800
void sub_002D9738_0x2d9738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9738_0x2d9738");
#endif

    switch (ctx->pc) {
        case 0x2d9758u: goto label_2d9758;
        case 0x2d9784u: goto label_2d9784;
        case 0x2d9790u: goto label_2d9790;
        default: break;
    }

    ctx->pc = 0x2d9738u;

    // 0x2d9738: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d973c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d973cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9740: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d9740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d9744: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d9744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d9748: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d974c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d974cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d9750: 0xc09270a  jal         func_249C28
    ctx->pc = 0x2D9750u;
    SET_GPR_U32(ctx, 31, 0x2D9758u);
    ctx->pc = 0x2D9754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9750u;
    // 0x2d9754: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x2D9750u, 0x2D9758u)) {
        return;
    }
    ctx->pc = 0x2D9758u;
label_2d9758:
    // 0x2d9758: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D9758u;
    {
        const bool branch_taken_0x2d9758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9758u;
        // 0x2d975c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9758) {
            ctx->pc = 0x2D9798u;
            goto label_2d9798;
        }
    }
    ctx->pc = 0x2D9760u;
    // 0x2d9760: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x2d9760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x2d9764: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x2d9764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x2d9768: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d9768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d976c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x2d976cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x2d9770: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D9770u;
    {
        const bool branch_taken_0x2d9770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9770u;
        // 0x2d9774: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9770) {
            ctx->pc = 0x2D9798u;
            goto label_2d9798;
        }
    }
    ctx->pc = 0x2D9778u;
    // 0x2d9778: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d9778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d977c: 0xc0c3418  jal         func_30D060
    ctx->pc = 0x2D977Cu;
    SET_GPR_U32(ctx, 31, 0x2D9784u);
    ctx->pc = 0x2D9780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D977Cu;
    // 0x2d9780: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D060u, 0x2D977Cu, 0x2D9784u)) {
        return;
    }
    ctx->pc = 0x2D9784u;
label_2d9784:
    // 0x2d9784: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d9784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9788: 0xc0b64e4  jal         func_2D9390
    ctx->pc = 0x2D9788u;
    SET_GPR_U32(ctx, 31, 0x2D9790u);
    ctx->pc = 0x2D978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9788u;
    // 0x2d978c: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9390u, 0x2D9788u, 0x2D9790u)) {
        return;
    }
    ctx->pc = 0x2D9790u;
label_2d9790:
    // 0x2d9790: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9790u;
    {
        const bool branch_taken_0x2d9790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9790u;
        // 0x2d9794: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9790) {
            ctx->pc = 0x2D979Cu;
            goto label_2d979c;
        }
    }
    ctx->pc = 0x2D9798u;
label_2d9798:
    // 0x2d9798: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d979c:
    // 0x2d979c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d979cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d97a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d97a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d97a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D97A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D97A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97A4u;
        // 0x2d97a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D97A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D97ACu;
    // 0x2d97ac: 0x0  nop
    ctx->pc = 0x2d97acu;
    // NOP
    // 0x2d97b0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d97b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d97b4: 0x0  nop
    ctx->pc = 0x2d97b4u;
    // NOP
    // 0x2d97b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d97b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d97bc: 0x0  nop
    ctx->pc = 0x2d97bcu;
    // NOP
    // 0x2d97c0: 0xa4450008  sh          $a1, 0x8($v0)
    ctx->pc = 0x2d97c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d97c4: 0x0  nop
    ctx->pc = 0x2d97c4u;
    // NOP
    // 0x2d97c8: 0xa445000a  sh          $a1, 0xA($v0)
    ctx->pc = 0x2d97c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d97cc: 0x0  nop
    ctx->pc = 0x2d97ccu;
    // NOP
    // 0x2d97d0: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x2d97d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x2d97d4: 0x0  nop
    ctx->pc = 0x2d97d4u;
    // NOP
    // 0x2d97d8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d97d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d97dc: 0x0  nop
    ctx->pc = 0x2d97dcu;
    // NOP
    // 0x2d97e0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d97e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d97e4: 0x0  nop
    ctx->pc = 0x2d97e4u;
    // NOP
    // 0x2d97e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d97e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d97ec: 0x0  nop
    ctx->pc = 0x2d97ecu;
    // NOP
    // 0x2d97f0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d97f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d97f4: 0x0  nop
    ctx->pc = 0x2d97f4u;
    // NOP
    // 0x2d97f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d97f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d97fc: 0x0  nop
    ctx->pc = 0x2d97fcu;
    // NOP
    ctx->pc = 0x2d9800u;
}
