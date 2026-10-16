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

// Function: sub_001522A0
// Address: 0x1522a0 - 0x152358
void sub_001522A0_0x1522a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001522A0_0x1522a0");
#endif

    switch (ctx->pc) {
        case 0x1522b8u: goto label_1522b8;
        case 0x1522e8u: goto label_1522e8;
        case 0x152300u: goto label_152300;
        case 0x152318u: goto label_152318;
        case 0x152330u: goto label_152330;
        case 0x152344u: goto label_152344;
        default: break;
    }

    ctx->pc = 0x1522a0u;

    // 0x1522a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1522a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1522a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1522a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1522a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1522a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1522ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1522acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1522b0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1522B0u;
    SET_GPR_U32(ctx, 31, 0x1522B8u);
    ctx->pc = 0x1522B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1522B0u;
    // 0x1522b4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1522B0u, 0x1522B8u)) {
        return;
    }
    ctx->pc = 0x1522B8u;
label_1522b8:
    // 0x1522b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1522b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1522bc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1522bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1522c0: 0x24632470  addiu       $v1, $v1, 0x2470
    ctx->pc = 0x1522c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9328));
    // 0x1522c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1522c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1522c8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1522c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1522cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1522ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1522d0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1522d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1522d4: 0x24a58918  addiu       $a1, $a1, -0x76E8
    ctx->pc = 0x1522d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    // 0x1522d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1522d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1522dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1522dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1522e0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1522E0u;
    SET_GPR_U32(ctx, 31, 0x1522E8u);
    ctx->pc = 0x1522E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1522E0u;
    // 0x1522e4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1522E0u, 0x1522E8u)) {
        return;
    }
    ctx->pc = 0x1522E8u;
label_1522e8:
    // 0x1522e8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1522e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1522ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1522ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1522f0: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x1522f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x1522f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1522f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1522f8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1522F8u;
    SET_GPR_U32(ctx, 31, 0x152300u);
    ctx->pc = 0x1522FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1522F8u;
    // 0x1522fc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1522F8u, 0x152300u)) {
        return;
    }
    ctx->pc = 0x152300u;
label_152300:
    // 0x152300: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x152300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x152304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152308: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x152308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x15230c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15230cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152310: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x152310u;
    SET_GPR_U32(ctx, 31, 0x152318u);
    ctx->pc = 0x152314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152310u;
    // 0x152314: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x152310u, 0x152318u)) {
        return;
    }
    ctx->pc = 0x152318u;
label_152318:
    // 0x152318: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x152318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x15231c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15231cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152320: 0x24a5fa68  addiu       $a1, $a1, -0x598
    ctx->pc = 0x152320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965864));
    // 0x152324: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152328: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x152328u;
    SET_GPR_U32(ctx, 31, 0x152330u);
    ctx->pc = 0x15232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152328u;
    // 0x15232c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x152328u, 0x152330u)) {
        return;
    }
    ctx->pc = 0x152330u;
label_152330:
    // 0x152330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152334: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x152334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x152338: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x152338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x15233c: 0xc05470a  jal         func_151C28
    ctx->pc = 0x15233Cu;
    SET_GPR_U32(ctx, 31, 0x152344u);
    ctx->pc = 0x152340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15233Cu;
    // 0x152340: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151C28u, 0x15233Cu, 0x152344u)) {
        return;
    }
    ctx->pc = 0x152344u;
label_152344:
    // 0x152344: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x152344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15234c: 0x3e00008  jr          $ra
    ctx->pc = 0x15234Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15234Cu;
        // 0x152350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15234Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152354u;
    // 0x152354: 0x0  nop
    ctx->pc = 0x152354u;
    // NOP
    ctx->pc = 0x152358u;
}
