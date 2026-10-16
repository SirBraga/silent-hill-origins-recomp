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

// Function: sub_00169940
// Address: 0x169940 - 0x169a18
void sub_00169940_0x169940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169940_0x169940");
#endif

    switch (ctx->pc) {
        case 0x169968u: goto label_169968;
        case 0x169988u: goto label_169988;
        case 0x169990u: goto label_169990;
        case 0x16999cu: goto label_16999c;
        case 0x1699a4u: goto label_1699a4;
        case 0x1699bcu: goto label_1699bc;
        case 0x1699dcu: goto label_1699dc;
        case 0x1699f0u: goto label_1699f0;
        default: break;
    }

    ctx->pc = 0x169940u;

    // 0x169940: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x169940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x169944: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x169944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x169948: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x169948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16994c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x169950: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x169950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x169954: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x169954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x169958: 0x26320038  addiu       $s2, $s1, 0x38
    ctx->pc = 0x169958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16995c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16995cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169960: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x169960u;
    SET_GPR_U32(ctx, 31, 0x169968u);
    ctx->pc = 0x169964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169960u;
    // 0x169964: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x169960u, 0x169968u)) {
        return;
    }
    ctx->pc = 0x169968u;
label_169968:
    // 0x169968: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x169968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16996c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16996cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x169970: 0x24634338  addiu       $v1, $v1, 0x4338
    ctx->pc = 0x169970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17208));
    // 0x169974: 0x24424358  addiu       $v0, $v0, 0x4358
    ctx->pc = 0x169974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17240));
    // 0x169978: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x169978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x16997c: 0x26240044  addiu       $a0, $s1, 0x44
    ctx->pc = 0x16997cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x169980: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x169980u;
    SET_GPR_U32(ctx, 31, 0x169988u);
    ctx->pc = 0x169984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169980u;
    // 0x169984: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x169980u, 0x169988u)) {
        return;
    }
    ctx->pc = 0x169988u;
label_169988:
    // 0x169988: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x169988u;
    SET_GPR_U32(ctx, 31, 0x169990u);
    ctx->pc = 0x16998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169988u;
    // 0x16998c: 0x2624004c  addiu       $a0, $s1, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x169988u, 0x169990u)) {
        return;
    }
    ctx->pc = 0x169990u;
label_169990:
    // 0x169990: 0xae3300e8  sw          $s3, 0xE8($s1)
    ctx->pc = 0x169990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 19));
    // 0x169994: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x169994u;
    SET_GPR_U32(ctx, 31, 0x16999Cu);
    ctx->pc = 0x169998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169994u;
    // 0x169998: 0x262400ec  addiu       $a0, $s1, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x169994u, 0x16999Cu)) {
        return;
    }
    ctx->pc = 0x16999Cu;
label_16999c:
    // 0x16999c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16999Cu;
    SET_GPR_U32(ctx, 31, 0x1699A4u);
    ctx->pc = 0x1699A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16999Cu;
    // 0x1699a0: 0x262400f4  addiu       $a0, $s1, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16999Cu, 0x1699A4u)) {
        return;
    }
    ctx->pc = 0x1699A4u;
label_1699a4:
    // 0x1699a4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1699a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1699a8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1699a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1699ac: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x1699acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x1699b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1699b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699b4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1699B4u;
    SET_GPR_U32(ctx, 31, 0x1699BCu);
    ctx->pc = 0x1699B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1699B4u;
    // 0x1699b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1699B4u, 0x1699BCu)) {
        return;
    }
    ctx->pc = 0x1699BCu;
label_1699bc:
    // 0x1699bc: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x1699bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x1699c0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1699c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1699c4: 0x261046c8  addiu       $s0, $s0, 0x46C8
    ctx->pc = 0x1699c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18120));
    // 0x1699c8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1699c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1699cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1699ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699d0: 0x24a542e0  addiu       $a1, $a1, 0x42E0
    ctx->pc = 0x1699d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17120));
    // 0x1699d4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1699D4u;
    SET_GPR_U32(ctx, 31, 0x1699DCu);
    ctx->pc = 0x1699D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1699D4u;
    // 0x1699d8: 0x24c642f8  addiu       $a2, $a2, 0x42F8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1699D4u, 0x1699DCu)) {
        return;
    }
    ctx->pc = 0x1699DCu;
label_1699dc:
    // 0x1699dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1699dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1699e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1699e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699e8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1699E8u;
    SET_GPR_U32(ctx, 31, 0x1699F0u);
    ctx->pc = 0x1699ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1699E8u;
    // 0x1699ec: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1699E8u, 0x1699F0u)) {
        return;
    }
    ctx->pc = 0x1699F0u;
label_1699f0:
    // 0x1699f0: 0xae3300e4  sw          $s3, 0xE4($s1)
    ctx->pc = 0x1699f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 19));
    // 0x1699f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1699f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1699f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1699fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1699fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169a00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x169a00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169a04: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x169a04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x169A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A0Cu;
        // 0x169a10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169A14u;
    // 0x169a14: 0x0  nop
    ctx->pc = 0x169a14u;
    // NOP
    ctx->pc = 0x169a18u;
}
