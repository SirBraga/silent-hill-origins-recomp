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

// Function: sub_001CD870
// Address: 0x1cd870 - 0x1cd940
void sub_001CD870_0x1cd870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD870_0x1cd870");
#endif

    switch (ctx->pc) {
        case 0x1cd88cu: goto label_1cd88c;
        case 0x1cd8ccu: goto label_1cd8cc;
        case 0x1cd8d4u: goto label_1cd8d4;
        case 0x1cd8e8u: goto label_1cd8e8;
        case 0x1cd8f8u: goto label_1cd8f8;
        case 0x1cd910u: goto label_1cd910;
        case 0x1cd924u: goto label_1cd924;
        default: break;
    }

    ctx->pc = 0x1cd870u;

    // 0x1cd870: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1cd870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1cd874: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1cd874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1cd878: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1cd878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1cd87c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cd87cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd880: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1cd880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1cd884: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1CD884u;
    SET_GPR_U32(ctx, 31, 0x1CD88Cu);
    ctx->pc = 0x1CD888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD884u;
    // 0x1cd888: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1CD884u, 0x1CD88Cu)) {
        return;
    }
    ctx->pc = 0x1CD88Cu;
label_1cd88c:
    // 0x1cd88c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1cd88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1cd890: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1cd890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cd894: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x1cd894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x1cd898: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x1cd898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
    // 0x1cd89c: 0xae200264  sw          $zero, 0x264($s1)
    ctx->pc = 0x1cd89cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
    // 0x1cd8a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cd8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd8a4: 0xae200268  sw          $zero, 0x268($s1)
    ctx->pc = 0x1cd8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
    // 0x1cd8a8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1cd8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cd8ac: 0xae20026c  sw          $zero, 0x26C($s1)
    ctx->pc = 0x1cd8acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 0));
    // 0x1cd8b0: 0xae200270  sw          $zero, 0x270($s1)
    ctx->pc = 0x1cd8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
    // 0x1cd8b4: 0xae200290  sw          $zero, 0x290($s1)
    ctx->pc = 0x1cd8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
    // 0x1cd8b8: 0xae200294  sw          $zero, 0x294($s1)
    ctx->pc = 0x1cd8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 0));
    // 0x1cd8bc: 0xae200298  sw          $zero, 0x298($s1)
    ctx->pc = 0x1cd8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 0));
    // 0x1cd8c0: 0xae230258  sw          $v1, 0x258($s1)
    ctx->pc = 0x1cd8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 3));
    // 0x1cd8c4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1CD8C4u;
    SET_GPR_U32(ctx, 31, 0x1CD8CCu);
    ctx->pc = 0x1CD8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8C4u;
    // 0x1cd8c8: 0xae220274  sw          $v0, 0x274($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1CD8C4u, 0x1CD8CCu)) {
        return;
    }
    ctx->pc = 0x1CD8CCu;
label_1cd8cc:
    // 0x1cd8cc: 0xc06db44  jal         func_1B6D10
    ctx->pc = 0x1CD8CCu;
    SET_GPR_U32(ctx, 31, 0x1CD8D4u);
    ctx->pc = 0x1CD8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8CCu;
    // 0x1cd8d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D10u, 0x1CD8CCu, 0x1CD8D4u)) {
        return;
    }
    ctx->pc = 0x1CD8D4u;
label_1cd8d4:
    // 0x1cd8d4: 0x26240278  addiu       $a0, $s1, 0x278
    ctx->pc = 0x1cd8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 632));
    // 0x1cd8d8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cd8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cd8dc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1cd8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1cd8e0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CD8E0u;
    SET_GPR_U32(ctx, 31, 0x1CD8E8u);
    ctx->pc = 0x1CD8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8E0u;
    // 0x1cd8e4: 0xae220260  sw          $v0, 0x260($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CD8E0u, 0x1CD8E8u)) {
        return;
    }
    ctx->pc = 0x1CD8E8u;
label_1cd8e8:
    // 0x1cd8e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cd8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd8ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd8f0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CD8F0u;
    SET_GPR_U32(ctx, 31, 0x1CD8F8u);
    ctx->pc = 0x1CD8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8F0u;
    // 0x1cd8f4: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CD8F0u, 0x1CD8F8u)) {
        return;
    }
    ctx->pc = 0x1CD8F8u;
label_1cd8f8:
    // 0x1cd8f8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cd8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cd8fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd900: 0x24a500a0  addiu       $a1, $a1, 0xA0
    ctx->pc = 0x1cd900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x1cd904: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cd904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd908: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1CD908u;
    SET_GPR_U32(ctx, 31, 0x1CD910u);
    ctx->pc = 0x1CD90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD908u;
    // 0x1cd90c: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1CD908u, 0x1CD910u)) {
        return;
    }
    ctx->pc = 0x1CD910u;
label_1cd910:
    // 0x1cd910: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1cd910u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd914: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD914u;
    {
        const bool branch_taken_0x1cd914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD914u;
        // 0x1cd918: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd914) {
            ctx->pc = 0x1CD928u;
            goto label_1cd928;
        }
    }
    ctx->pc = 0x1CD91Cu;
    // 0x1cd91c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1CD91Cu;
    SET_GPR_U32(ctx, 31, 0x1CD924u);
    ctx->pc = 0x1CD920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD91Cu;
    // 0x1cd920: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1CD91Cu, 0x1CD924u)) {
        return;
    }
    ctx->pc = 0x1CD924u;
label_1cd924:
    // 0x1cd924: 0xae220268  sw          $v0, 0x268($s1)
    ctx->pc = 0x1cd924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 2));
label_1cd928:
    // 0x1cd928: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1cd928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd92c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1cd92cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cd930: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1cd930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd934: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1cd934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cd938: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD938u;
        // 0x1cd93c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD940u;
}
