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

// Function: sub_002064F8
// Address: 0x2064f8 - 0x2065f8
void sub_002064F8_0x2064f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002064F8_0x2064f8");
#endif

    switch (ctx->pc) {
        case 0x206538u: goto label_206538;
        case 0x20658cu: goto label_20658c;
        case 0x2065d0u: goto label_2065d0;
        default: break;
    }

    ctx->pc = 0x2064f8u;

    // 0x2064f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2064f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2064fc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2064fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x206500: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x206500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x206504: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x206504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206508: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x206508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20650c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20650cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206510: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x206510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x206514: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x206514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206518: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x206518u;
    {
        const bool branch_taken_0x206518 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206518u;
        // 0x20651c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206518) {
            ctx->pc = 0x2065D8u;
            goto label_2065d8;
        }
    }
    ctx->pc = 0x206520u;
    // 0x206520: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
    ctx->pc = 0x206520u;
    {
        const bool branch_taken_0x206520 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x206524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206520u;
        // 0x206524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206520) {
            ctx->pc = 0x2065DCu;
            goto label_2065dc;
        }
    }
    ctx->pc = 0x206528u;
    // 0x206528: 0x1260002c  beqz        $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x206528u;
    {
        const bool branch_taken_0x206528 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x20652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206528u;
        // 0x20652c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206528) {
            ctx->pc = 0x2065DCu;
            goto label_2065dc;
        }
    }
    ctx->pc = 0x206530u;
    // 0x206530: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x206530u;
    SET_GPR_U32(ctx, 31, 0x206538u);
    ctx->pc = 0x206534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206530u;
    // 0x206534: 0x24042060  addiu       $a0, $zero, 0x2060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x206530u, 0x206538u)) {
        return;
    }
    ctx->pc = 0x206538u;
label_206538:
    // 0x206538: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x206538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x20653c: 0x3c070020  lui         $a3, 0x20
    ctx->pc = 0x20653cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32 << 16));
    // 0x206540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x206540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206544: 0x24636608  addiu       $v1, $v1, 0x6608
    ctx->pc = 0x206544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26120));
    // 0x206548: 0x24e76628  addiu       $a3, $a3, 0x6628
    ctx->pc = 0x206548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26152));
    // 0x20654c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x20654cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x206550: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x206550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x206554: 0x24a53f30  addiu       $a1, $a1, 0x3F30
    ctx->pc = 0x206554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16176));
    // 0x206558: 0x26042018  addiu       $a0, $s0, 0x2018
    ctx->pc = 0x206558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8216));
    // 0x20655c: 0xae032040  sw          $v1, 0x2040($s0)
    ctx->pc = 0x20655cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8256), GPR_U32(ctx, 3));
    // 0x206560: 0xae072044  sw          $a3, 0x2044($s0)
    ctx->pc = 0x206560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8260), GPR_U32(ctx, 7));
    // 0x206564: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x206564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x206568: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x206568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x20656c: 0xae132010  sw          $s3, 0x2010($s0)
    ctx->pc = 0x20656cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8208), GPR_U32(ctx, 19));
    // 0x206570: 0xae002008  sw          $zero, 0x2008($s0)
    ctx->pc = 0x206570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8200), GPR_U32(ctx, 0));
    // 0x206574: 0xae00200c  sw          $zero, 0x200C($s0)
    ctx->pc = 0x206574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8204), GPR_U32(ctx, 0));
    // 0x206578: 0xae002014  sw          $zero, 0x2014($s0)
    ctx->pc = 0x206578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8212), GPR_U32(ctx, 0));
    // 0x20657c: 0xae002048  sw          $zero, 0x2048($s0)
    ctx->pc = 0x20657cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8264), GPR_U32(ctx, 0));
    // 0x206580: 0xae00201c  sw          $zero, 0x201C($s0)
    ctx->pc = 0x206580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8220), GPR_U32(ctx, 0));
    // 0x206584: 0xc0850d2  jal         func_214348
    ctx->pc = 0x206584u;
    SET_GPR_U32(ctx, 31, 0x20658Cu);
    ctx->pc = 0x206588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206584u;
    // 0x206588: 0xae002018  sw          $zero, 0x2018($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8216), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x214348u, 0x206584u, 0x20658Cu)) {
        return;
    }
    ctx->pc = 0x20658Cu;
label_20658c:
    // 0x20658c: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x20658cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x206590: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x206590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x206594: 0x24c66868  addiu       $a2, $a2, 0x6868
    ctx->pc = 0x206594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26728));
    // 0x206598: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x206598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x20659c: 0x3c070020  lui         $a3, 0x20
    ctx->pc = 0x20659cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32 << 16));
    // 0x2065a0: 0x24636648  addiu       $v1, $v1, 0x6648
    ctx->pc = 0x2065a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26184));
    // 0x2065a4: 0x24426680  addiu       $v0, $v0, 0x6680
    ctx->pc = 0x2065a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26240));
    // 0x2065a8: 0x24e76870  addiu       $a3, $a3, 0x6870
    ctx->pc = 0x2065a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26736));
    // 0x2065ac: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2065acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2065b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2065b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2065b4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2065b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2065b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2065b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2065bc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2065bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2065c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2065c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2065c4: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x2065c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x2065c8: 0xc0936ae  jal         func_24DAB8
    ctx->pc = 0x2065C8u;
    SET_GPR_U32(ctx, 31, 0x2065D0u);
    ctx->pc = 0x2065CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2065C8u;
    // 0x2065cc: 0xafb00010  sw          $s0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DAB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DAB8u, 0x2065C8u, 0x2065D0u)) {
        return;
    }
    ctx->pc = 0x2065D0u;
label_2065d0:
    // 0x2065d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2065D0u;
    {
        const bool branch_taken_0x2065d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2065D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065D0u;
        // 0x2065d4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2065d0) {
            ctx->pc = 0x2065E0u;
            goto label_2065e0;
        }
    }
    ctx->pc = 0x2065D8u;
label_2065d8:
    // 0x2065d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2065d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2065dc:
    // 0x2065dc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2065dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2065e0:
    // 0x2065e0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2065e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2065e4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2065e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2065e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2065e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2065ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2065ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2065f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2065F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2065F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065F0u;
        // 0x2065f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2065F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2065F8u;
}
