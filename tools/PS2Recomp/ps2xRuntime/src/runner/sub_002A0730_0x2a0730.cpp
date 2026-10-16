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

// Function: sub_002A0730
// Address: 0x2a0730 - 0x2a0800
void sub_002A0730_0x2a0730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0730_0x2a0730");
#endif

    switch (ctx->pc) {
        case 0x2a0754u: goto label_2a0754;
        case 0x2a0764u: goto label_2a0764;
        case 0x2a07e4u: goto label_2a07e4;
        default: break;
    }

    ctx->pc = 0x2a0730u;

    // 0x2a0730: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a0730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a0734: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2a0734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a0738: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a0738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a073c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a073cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a0740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0744: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a0744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a0748: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a0748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a074c: 0xc0a8124  jal         func_2A0490
    ctx->pc = 0x2A074Cu;
    SET_GPR_U32(ctx, 31, 0x2A0754u);
    ctx->pc = 0x2A0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A074Cu;
    // 0x2a0750: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0490u, 0x2A074Cu, 0x2A0754u)) {
        return;
    }
    ctx->pc = 0x2A0754u;
label_2a0754:
    // 0x2a0754: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a0754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a075c: 0xc0a8124  jal         func_2A0490
    ctx->pc = 0x2A075Cu;
    SET_GPR_U32(ctx, 31, 0x2A0764u);
    ctx->pc = 0x2A0760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A075Cu;
    // 0x2a0760: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0490u, 0x2A075Cu, 0x2A0764u)) {
        return;
    }
    ctx->pc = 0x2A0764u;
label_2a0764:
    // 0x2a0764: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2a0764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a0768: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a0768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a076c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2a076cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2a0770: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2a0770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0774: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2a0774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a0778: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2a0778u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a077c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2a077cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2a0780: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2a0780u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a0784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0788: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A0788u;
    {
        const bool branch_taken_0x2a0788 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0788u;
        // 0x2a078c: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0788) {
            ctx->pc = 0x2A07B4u;
            goto label_2a07b4;
        }
    }
    ctx->pc = 0x2A0790u;
    // 0x2a0790: 0x22d00  sll         $a1, $v0, 20
    ctx->pc = 0x2a0790u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x2a0794: 0x3103f  dsra32      $v0, $v1, 0
    ctx->pc = 0x2a0794u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a0798: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2a0798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2a079c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a079cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2a07a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a07a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a07a4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a07a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a07a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a07a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a07ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A07ACu;
    {
        const bool branch_taken_0x2a07ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A07B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A07ACu;
        // 0x2a07b0: 0x629025  or          $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a07ac) {
            ctx->pc = 0x2A07D8u;
            goto label_2a07d8;
        }
    }
    ctx->pc = 0x2A07B4u;
label_2a07b4:
    // 0x2a07b4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2a07b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a07b8: 0x22d00  sll         $a1, $v0, 20
    ctx->pc = 0x2a07b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x2a07bc: 0x3103f  dsra32      $v0, $v1, 0
    ctx->pc = 0x2a07bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2a07c0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2a07c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2a07c4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a07c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2a07c8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2a07c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a07cc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a07ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a07d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a07d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a07d4: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x2a07d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a07d8:
    // 0x2a07d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a07d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a07dc: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x2A07DCu;
    SET_GPR_U32(ctx, 31, 0x2A07E4u);
    ctx->pc = 0x2A07E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A07DCu;
    // 0x2a07e0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x2A07DCu, 0x2A07E4u)) {
        return;
    }
    ctx->pc = 0x2A07E4u;
label_2a07e4:
    // 0x2a07e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a07e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a07e8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a07e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a07ec: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2a07ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a07f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a07f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a07f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A07F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A07F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A07F4u;
        // 0x2a07f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A07F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A07FCu;
    // 0x2a07fc: 0x0  nop
    ctx->pc = 0x2a07fcu;
    // NOP
    ctx->pc = 0x2a0800u;
}
