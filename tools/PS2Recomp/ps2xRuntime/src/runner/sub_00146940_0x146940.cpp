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

// Function: sub_00146940
// Address: 0x146940 - 0x1469c8
void sub_00146940_0x146940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146940_0x146940");
#endif

    switch (ctx->pc) {
        case 0x146988u: goto label_146988;
        case 0x14699cu: goto label_14699c;
        case 0x1469a4u: goto label_1469a4;
        case 0x1469acu: goto label_1469ac;
        default: break;
    }

    ctx->pc = 0x146940u;

    // 0x146940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146944: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x146944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x146948: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x146948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14694c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14694cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146950: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x146950u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33870Cu));
    // 0x146954: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x146954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x146958: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x146958u;
    {
        const bool branch_taken_0x146958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146958u;
        // 0x14695c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146958) {
            ctx->pc = 0x1469BCu;
            goto label_1469bc;
        }
    }
    ctx->pc = 0x146960u;
    // 0x146960: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x146960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x146964: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x146964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x146968: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x146968u;
    {
        const bool branch_taken_0x146968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146968u;
        // 0x14696c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146968) {
            ctx->pc = 0x1469C0u;
            goto label_1469c0;
        }
    }
    ctx->pc = 0x146970u;
    // 0x146970: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x146970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x146974: 0x8c50847c  lw          $s0, -0x7B84($v0)
    ctx->pc = 0x146974u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x33847Cu));
    // 0x146978: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x146978u;
    {
        const bool branch_taken_0x146978 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x146978) {
            ctx->pc = 0x14697Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146978u;
            // 0x14697c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1469C0u;
            goto label_1469c0;
        }
    }
    ctx->pc = 0x146980u;
    // 0x146980: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x146980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x146984: 0x0  nop
    ctx->pc = 0x146984u;
    // NOP
label_146988:
    // 0x146988: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x146988u;
    {
        const bool branch_taken_0x146988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146988) {
            ctx->pc = 0x14698Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146988u;
            // 0x14698c: 0x8e1000ec  lw          $s0, 0xEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1469B0u;
            goto label_1469b0;
        }
    }
    ctx->pc = 0x146990u;
    // 0x146990: 0x8e04011c  lw          $a0, 0x11C($s0)
    ctx->pc = 0x146990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x146994: 0xc097ae8  jal         func_25EBA0
    ctx->pc = 0x146994u;
    SET_GPR_U32(ctx, 31, 0x14699Cu);
    ctx->pc = 0x146998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146994u;
    // 0x146998: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EBA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EBA0u, 0x146994u, 0x14699Cu)) {
        return;
    }
    ctx->pc = 0x14699Cu;
label_14699c:
    // 0x14699c: 0xc051330  jal         func_144CC0
    ctx->pc = 0x14699Cu;
    SET_GPR_U32(ctx, 31, 0x1469A4u);
    ctx->pc = 0x1469A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14699Cu;
    // 0x1469a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x144CC0u, 0x14699Cu, 0x1469A4u)) {
        return;
    }
    ctx->pc = 0x1469A4u;
label_1469a4:
    // 0x1469a4: 0xc050fd2  jal         func_143F48
    ctx->pc = 0x1469A4u;
    SET_GPR_U32(ctx, 31, 0x1469ACu);
    ctx->pc = 0x1469A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1469A4u;
    // 0x1469a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x143F48u, 0x1469A4u, 0x1469ACu)) {
        return;
    }
    ctx->pc = 0x1469ACu;
label_1469ac:
    // 0x1469ac: 0x8e1000ec  lw          $s0, 0xEC($s0)
    ctx->pc = 0x1469acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_1469b0:
    // 0x1469b0: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1469B0u;
    {
        const bool branch_taken_0x1469b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1469b0) {
            ctx->pc = 0x1469B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1469B0u;
            // 0x1469b4: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146988;
        }
    }
    ctx->pc = 0x1469B8u;
    // 0x1469b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1469b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1469bc:
    // 0x1469bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1469bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1469c0:
    // 0x1469c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1469C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1469C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1469C0u;
        // 0x1469c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1469C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1469C8u;
}
