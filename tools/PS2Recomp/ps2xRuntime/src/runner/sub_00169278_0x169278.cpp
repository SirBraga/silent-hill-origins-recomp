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

// Function: sub_00169278
// Address: 0x169278 - 0x169320
void sub_00169278_0x169278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169278_0x169278");
#endif

    switch (ctx->pc) {
        case 0x169290u: goto label_169290;
        case 0x1692b4u: goto label_1692b4;
        case 0x1692bcu: goto label_1692bc;
        case 0x1692ccu: goto label_1692cc;
        case 0x1692d4u: goto label_1692d4;
        case 0x1692f4u: goto label_1692f4;
        case 0x169308u: goto label_169308;
        default: break;
    }

    ctx->pc = 0x169278u;

    // 0x169278: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16927c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x169280: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x169280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x169284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169288: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x169288u;
    SET_GPR_U32(ctx, 31, 0x169290u);
    ctx->pc = 0x16928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169288u;
    // 0x16928c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x169288u, 0x169290u)) {
        return;
    }
    ctx->pc = 0x169290u;
label_169290:
    // 0x169290: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x169290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x169294: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x169294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x169298: 0x246341f0  addiu       $v1, $v1, 0x41F0
    ctx->pc = 0x169298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16880));
    // 0x16929c: 0x24424210  addiu       $v0, $v0, 0x4210
    ctx->pc = 0x16929cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16912));
    // 0x1692a0: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x1692a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x1692a4: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x1692a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x1692a8: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x1692a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x1692ac: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1692ACu;
    SET_GPR_U32(ctx, 31, 0x1692B4u);
    ctx->pc = 0x1692B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1692ACu;
    // 0x1692b0: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1692ACu, 0x1692B4u)) {
        return;
    }
    ctx->pc = 0x1692B4u;
label_1692b4:
    // 0x1692b4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1692B4u;
    SET_GPR_U32(ctx, 31, 0x1692BCu);
    ctx->pc = 0x1692B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1692B4u;
    // 0x1692b8: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1692B4u, 0x1692BCu)) {
        return;
    }
    ctx->pc = 0x1692BCu;
label_1692bc:
    // 0x1692bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1692bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1692c0: 0x262400f8  addiu       $a0, $s1, 0xF8
    ctx->pc = 0x1692c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
    // 0x1692c4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1692C4u;
    SET_GPR_U32(ctx, 31, 0x1692CCu);
    ctx->pc = 0x1692C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1692C4u;
    // 0x1692c8: 0xae2300f4  sw          $v1, 0xF4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1692C4u, 0x1692CCu)) {
        return;
    }
    ctx->pc = 0x1692CCu;
label_1692cc:
    // 0x1692cc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1692CCu;
    SET_GPR_U32(ctx, 31, 0x1692D4u);
    ctx->pc = 0x1692D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1692CCu;
    // 0x1692d0: 0x26240100  addiu       $a0, $s1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1692CCu, 0x1692D4u)) {
        return;
    }
    ctx->pc = 0x1692D4u;
label_1692d4:
    // 0x1692d4: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x1692d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x1692d8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1692d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1692dc: 0x261046c8  addiu       $s0, $s0, 0x46C8
    ctx->pc = 0x1692dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18120));
    // 0x1692e0: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1692e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1692e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1692e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1692e8: 0x24a54190  addiu       $a1, $a1, 0x4190
    ctx->pc = 0x1692e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16784));
    // 0x1692ec: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1692ECu;
    SET_GPR_U32(ctx, 31, 0x1692F4u);
    ctx->pc = 0x1692F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1692ECu;
    // 0x1692f0: 0x24c641a8  addiu       $a2, $a2, 0x41A8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1692ECu, 0x1692F4u)) {
        return;
    }
    ctx->pc = 0x1692F4u;
label_1692f4:
    // 0x1692f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1692f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1692f8: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x1692f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x1692fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1692fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169300: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x169300u;
    SET_GPR_U32(ctx, 31, 0x169308u);
    ctx->pc = 0x169304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169300u;
    // 0x169304: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x169300u, 0x169308u)) {
        return;
    }
    ctx->pc = 0x169308u;
label_169308:
    // 0x169308: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x169308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16930c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16930cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169310: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169318: 0x3e00008  jr          $ra
    ctx->pc = 0x169318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169318u;
        // 0x16931c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169320u;
}
