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

// Function: sub_001E0708
// Address: 0x1e0708 - 0x1e0830
void sub_001E0708_0x1e0708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0708_0x1e0708");
#endif

    switch (ctx->pc) {
        case 0x1e0734u: goto label_1e0734;
        case 0x1e0748u: goto label_1e0748;
        case 0x1e075cu: goto label_1e075c;
        case 0x1e07b0u: goto label_1e07b0;
        case 0x1e07c4u: goto label_1e07c4;
        case 0x1e07d0u: goto label_1e07d0;
        case 0x1e0800u: goto label_1e0800;
        default: break;
    }

    ctx->pc = 0x1e0708u;

    // 0x1e0708: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e0708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e070c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1e070cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1e0710: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e0710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0714: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e0714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e0718: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e0718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e071c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e071cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0720: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1e0720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1e0724: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e0724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1e0728: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e0728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e072c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x1E072Cu;
    SET_GPR_U32(ctx, 31, 0x1E0734u);
    ctx->pc = 0x1E0730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E072Cu;
    // 0x1e0730: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1E072Cu, 0x1E0734u)) {
        return;
    }
    ctx->pc = 0x1E0734u;
label_1e0734:
    // 0x1e0734: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1E0734u;
    {
        const bool branch_taken_0x1e0734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0734u;
        // 0x1e0738: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0734) {
            ctx->pc = 0x1E07F0u;
            goto label_1e07f0;
        }
    }
    ctx->pc = 0x1E073Cu;
    // 0x1e073c: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1e073cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x1e0740: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x1E0740u;
    SET_GPR_U32(ctx, 31, 0x1E0748u);
    ctx->pc = 0x1E0744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0740u;
    // 0x1e0744: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1E0740u, 0x1E0748u)) {
        return;
    }
    ctx->pc = 0x1E0748u;
label_1e0748:
    // 0x1e0748: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1E0748u;
    {
        const bool branch_taken_0x1e0748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0748u;
        // 0x1e074c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0748) {
            ctx->pc = 0x1E07F0u;
            goto label_1e07f0;
        }
    }
    ctx->pc = 0x1E0750u;
    // 0x1e0750: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x1e0750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x1e0754: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x1E0754u;
    SET_GPR_U32(ctx, 31, 0x1E075Cu);
    ctx->pc = 0x1E0758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0754u;
    // 0x1e0758: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1E0754u, 0x1E075Cu)) {
        return;
    }
    ctx->pc = 0x1E075Cu;
label_1e075c:
    // 0x1e075c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1E075Cu;
    {
        const bool branch_taken_0x1e075c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E075Cu;
        // 0x1e0760: 0x3c120034  lui         $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e075c) {
            ctx->pc = 0x1E07F0u;
            goto label_1e07f0;
        }
    }
    ctx->pc = 0x1E0764u;
    // 0x1e0764: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e0764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0768: 0x8e42e6d4  lw          $v0, -0x192C($s2)
    ctx->pc = 0x1e0768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960852)));
    // 0x1e076c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1e076cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1e0770: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1e0770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e0774: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1e0774u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0778: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e0778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e077c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e077cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e0780: 0x8e44e6d4  lw          $a0, -0x192C($s2)
    ctx->pc = 0x1e0780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960852)));
    // 0x1e0784: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1e0784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1e0788: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e0788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e078c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1e078cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1e0790: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e0790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e0794: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e0794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1e0798: 0x8e43e6d4  lw          $v1, -0x192C($s2)
    ctx->pc = 0x1e0798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960852)));
    // 0x1e079c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1e079cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1e07a0: 0x4e0001a  bltz        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E07A0u;
    {
        const bool branch_taken_0x1e07a0 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x1E07A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07A0u;
        // 0x1e07a4: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07a0) {
            ctx->pc = 0x1E080Cu;
            goto label_1e080c;
        }
    }
    ctx->pc = 0x1E07A8u;
    // 0x1e07a8: 0xc0776e0  jal         func_1DDB80
    ctx->pc = 0x1E07A8u;
    SET_GPR_U32(ctx, 31, 0x1E07B0u);
    ctx->pc = 0x1E07ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E07A8u;
    // 0x1e07ac: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDB80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DDB80u, 0x1E07A8u, 0x1E07B0u)) {
        return;
    }
    ctx->pc = 0x1E07B0u;
label_1e07b0:
    // 0x1e07b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e07b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e07b4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E07B4u;
    {
        const bool branch_taken_0x1e07b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07B4u;
        // 0x1e07b8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07b4) {
            ctx->pc = 0x1E0810u;
            goto label_1e0810;
        }
    }
    ctx->pc = 0x1E07BCu;
    // 0x1e07bc: 0xc09d8ce  jal         func_276338
    ctx->pc = 0x1E07BCu;
    SET_GPR_U32(ctx, 31, 0x1E07C4u);
    ctx->pc = 0x1E07C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E07BCu;
    // 0x1e07c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276338u, 0x1E07BCu, 0x1E07C4u)) {
        return;
    }
    ctx->pc = 0x1E07C4u;
label_1e07c4:
    // 0x1e07c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e07c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e07c8: 0xc09d8e0  jal         func_276380
    ctx->pc = 0x1E07C8u;
    SET_GPR_U32(ctx, 31, 0x1E07D0u);
    ctx->pc = 0x1E07CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E07C8u;
    // 0x1e07cc: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276380u, 0x1E07C8u, 0x1E07D0u)) {
        return;
    }
    ctx->pc = 0x1E07D0u;
label_1e07d0:
    // 0x1e07d0: 0x8e43e6d4  lw          $v1, -0x192C($s2)
    ctx->pc = 0x1e07d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960852)));
    // 0x1e07d4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1e07d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1e07d8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1e07d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1e07dc: 0x8e42e6d4  lw          $v0, -0x192C($s2)
    ctx->pc = 0x1e07dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960852)));
    // 0x1e07e0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e07e4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1e07e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e07e8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E07E8u;
    {
        const bool branch_taken_0x1e07e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e07e8) {
            ctx->pc = 0x1E07F8u;
            goto label_1e07f8;
        }
    }
    ctx->pc = 0x1E07F0u;
label_1e07f0:
    // 0x1e07f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E07F0u;
    {
        const bool branch_taken_0x1e07f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07F0u;
        // 0x1e07f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07f0) {
            ctx->pc = 0x1E0810u;
            goto label_1e0810;
        }
    }
    ctx->pc = 0x1E07F8u;
label_1e07f8:
    // 0x1e07f8: 0xc09d55c  jal         func_275570
    ctx->pc = 0x1E07F8u;
    SET_GPR_U32(ctx, 31, 0x1E0800u);
    ctx->pc = 0x1E07FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E07F8u;
    // 0x1e07fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x1E07F8u, 0x1E0800u)) {
        return;
    }
    ctx->pc = 0x1E0800u;
label_1e0800:
    // 0x1e0800: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e0800u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0804: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0804u;
    {
        const bool branch_taken_0x1e0804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0804u;
        // 0x1e0808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0804) {
            ctx->pc = 0x1E0810u;
            goto label_1e0810;
        }
    }
    ctx->pc = 0x1E080Cu;
label_1e080c:
    // 0x1e080c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e080cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e0810:
    // 0x1e0810: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1e0810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e0814: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1e0814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e0818: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e0818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e081c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e081cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0820: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e0820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0824: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0824u;
        // 0x1e0828: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E082Cu;
    // 0x1e082c: 0x0  nop
    ctx->pc = 0x1e082cu;
    // NOP
    ctx->pc = 0x1e0830u;
}
