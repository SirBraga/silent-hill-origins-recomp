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

// Function: sub_002888C0
// Address: 0x2888c0 - 0x288a28
void sub_002888C0_0x2888c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002888C0_0x2888c0");
#endif

    switch (ctx->pc) {
        case 0x2888c0u: goto label_2888c0;
        case 0x2888c4u: goto label_2888c4;
        case 0x2888c8u: goto label_2888c8;
        case 0x2888ccu: goto label_2888cc;
        case 0x2888d0u: goto label_2888d0;
        case 0x2888d4u: goto label_2888d4;
        case 0x2888d8u: goto label_2888d8;
        case 0x2888dcu: goto label_2888dc;
        case 0x2888e0u: goto label_2888e0;
        case 0x2888e4u: goto label_2888e4;
        case 0x2888e8u: goto label_2888e8;
        case 0x2888ecu: goto label_2888ec;
        case 0x2888f0u: goto label_2888f0;
        case 0x2888f4u: goto label_2888f4;
        case 0x2888f8u: goto label_2888f8;
        case 0x2888fcu: goto label_2888fc;
        case 0x288900u: goto label_288900;
        case 0x288904u: goto label_288904;
        case 0x288908u: goto label_288908;
        case 0x28890cu: goto label_28890c;
        case 0x288910u: goto label_288910;
        case 0x288914u: goto label_288914;
        case 0x288918u: goto label_288918;
        case 0x28891cu: goto label_28891c;
        case 0x288920u: goto label_288920;
        case 0x288924u: goto label_288924;
        case 0x288928u: goto label_288928;
        case 0x28892cu: goto label_28892c;
        case 0x288930u: goto label_288930;
        case 0x288934u: goto label_288934;
        case 0x288938u: goto label_288938;
        case 0x28893cu: goto label_28893c;
        case 0x288940u: goto label_288940;
        case 0x288944u: goto label_288944;
        case 0x288948u: goto label_288948;
        case 0x28894cu: goto label_28894c;
        case 0x288950u: goto label_288950;
        case 0x288954u: goto label_288954;
        case 0x288958u: goto label_288958;
        case 0x28895cu: goto label_28895c;
        case 0x288960u: goto label_288960;
        case 0x288964u: goto label_288964;
        case 0x288968u: goto label_288968;
        case 0x28896cu: goto label_28896c;
        case 0x288970u: goto label_288970;
        case 0x288974u: goto label_288974;
        case 0x288978u: goto label_288978;
        case 0x28897cu: goto label_28897c;
        case 0x288980u: goto label_288980;
        case 0x288984u: goto label_288984;
        case 0x288988u: goto label_288988;
        case 0x28898cu: goto label_28898c;
        case 0x288990u: goto label_288990;
        case 0x288994u: goto label_288994;
        case 0x288998u: goto label_288998;
        case 0x28899cu: goto label_28899c;
        case 0x2889a0u: goto label_2889a0;
        case 0x2889a4u: goto label_2889a4;
        case 0x2889a8u: goto label_2889a8;
        case 0x2889acu: goto label_2889ac;
        case 0x2889b0u: goto label_2889b0;
        case 0x2889b4u: goto label_2889b4;
        case 0x2889b8u: goto label_2889b8;
        case 0x2889bcu: goto label_2889bc;
        case 0x2889c0u: goto label_2889c0;
        case 0x2889c4u: goto label_2889c4;
        case 0x2889c8u: goto label_2889c8;
        case 0x2889ccu: goto label_2889cc;
        case 0x2889d0u: goto label_2889d0;
        case 0x2889d4u: goto label_2889d4;
        case 0x2889d8u: goto label_2889d8;
        case 0x2889dcu: goto label_2889dc;
        case 0x2889e0u: goto label_2889e0;
        case 0x2889e4u: goto label_2889e4;
        case 0x2889e8u: goto label_2889e8;
        case 0x2889ecu: goto label_2889ec;
        case 0x2889f0u: goto label_2889f0;
        case 0x2889f4u: goto label_2889f4;
        case 0x2889f8u: goto label_2889f8;
        case 0x2889fcu: goto label_2889fc;
        case 0x288a00u: goto label_288a00;
        case 0x288a04u: goto label_288a04;
        case 0x288a08u: goto label_288a08;
        case 0x288a0cu: goto label_288a0c;
        case 0x288a10u: goto label_288a10;
        case 0x288a14u: goto label_288a14;
        case 0x288a18u: goto label_288a18;
        case 0x288a1cu: goto label_288a1c;
        case 0x288a20u: goto label_288a20;
        case 0x288a24u: goto label_288a24;
        default: break;
    }

    ctx->pc = 0x2888c0u;

label_2888c0:
    // 0x2888c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2888c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2888c4:
    // 0x2888c4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x2888c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_2888c8:
    // 0x2888c8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2888c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_2888cc:
    // 0x2888cc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2888ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2888d0:
    // 0x2888d0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2888d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2888d4:
    // 0x2888d4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2888d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2888d8:
    // 0x2888d8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2888d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2888dc:
    // 0x2888dc: 0x24a563b0  addiu       $a1, $a1, 0x63B0
    ctx->pc = 0x2888dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25520));
label_2888e0:
    // 0x2888e0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2888e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_2888e4:
    // 0x2888e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2888e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2888e8:
    // 0x2888e8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2888e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2888ec:
    // 0x2888ec: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2888ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2888f0:
    // 0x2888f0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2888f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2888f4:
    // 0x2888f4: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x2888f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_2888f8:
    // 0x2888f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2888f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2888fc:
    // 0x2888fc: 0x8ca40524  lw          $a0, 0x524($a1)
    ctx->pc = 0x2888fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1316)));
label_288900:
    // 0x288900: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x288900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_288904:
    // 0x288904: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x288904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_288908:
    // 0x288908: 0x40f809  jalr        $v0
label_28890c:
    if (ctx->pc == 0x28890Cu) {
        ctx->pc = 0x28890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288908u;
        // 0x28890c: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = 0x288910u;
        goto label_288910;
    }
    ctx->pc = 0x288908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x288910u);
        ctx->pc = 0x28890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288908u;
        // 0x28890c: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288908u, 0x288910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x288910u;
label_288910:
    // 0x288910: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288914:
    // 0x288914: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_288918:
    if (ctx->pc == 0x288918u) {
        ctx->pc = 0x288918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288914u;
        // 0x288918: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28891Cu;
        goto label_28891c;
    }
    ctx->pc = 0x288914u;
    {
        const bool branch_taken_0x288914 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x288918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288914u;
        // 0x288918: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288914) {
            ctx->pc = 0x288940u;
            goto label_288940;
        }
    }
    ctx->pc = 0x28891Cu;
label_28891c:
    // 0x28891c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x28891cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_288920:
    // 0x288920: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x288920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_288924:
    // 0x288924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_288928:
    // 0x288928: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x288928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_28892c:
    // 0x28892c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x28892cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_288930:
    // 0x288930: 0xae100018  sw          $s0, 0x18($s0)
    ctx->pc = 0x288930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 16));
label_288934:
    // 0x288934: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x288934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_288938:
    // 0x288938: 0xc0a22d0  jal         func_288B40
label_28893c:
    if (ctx->pc == 0x28893Cu) {
        ctx->pc = 0x28893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288938u;
        // 0x28893c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288940u;
        goto label_288940;
    }
    ctx->pc = 0x288938u;
    SET_GPR_U32(ctx, 31, 0x288940u);
    ctx->pc = 0x28893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288938u;
    // 0x28893c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288B40u, 0x288938u, 0x288940u)) {
        return;
    }
    ctx->pc = 0x288940u;
label_288940:
    // 0x288940: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x288940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_288944:
    // 0x288944: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x288944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_288948:
    // 0x288948: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x288948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_28894c:
    // 0x28894c: 0xc093546  jal         func_24D518
label_288950:
    if (ctx->pc == 0x288950u) {
        ctx->pc = 0x288950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28894Cu;
        // 0x288950: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288954u;
        goto label_288954;
    }
    ctx->pc = 0x28894Cu;
    SET_GPR_U32(ctx, 31, 0x288954u);
    ctx->pc = 0x288950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28894Cu;
    // 0x288950: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x28894Cu, 0x288954u)) {
        return;
    }
    ctx->pc = 0x288954u;
label_288954:
    // 0x288954: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x288954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_288958:
    // 0x288958: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_28895c:
    if (ctx->pc == 0x28895Cu) {
        ctx->pc = 0x28895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288958u;
        // 0x28895c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288960u;
        goto label_288960;
    }
    ctx->pc = 0x288958u;
    {
        const bool branch_taken_0x288958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288958u;
        // 0x28895c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288958) {
            ctx->pc = 0x288988u;
            goto label_288988;
        }
    }
    ctx->pc = 0x288960u;
label_288960:
    // 0x288960: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x288960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_288964:
    // 0x288964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_288968:
    // 0x288968: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_28896c:
    if (ctx->pc == 0x28896Cu) {
        ctx->pc = 0x28896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288968u;
        // 0x28896c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288970u;
        goto label_288970;
    }
    ctx->pc = 0x288968u;
    {
        const bool branch_taken_0x288968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288968u;
        // 0x28896c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288968) {
            ctx->pc = 0x288988u;
            goto label_288988;
        }
    }
    ctx->pc = 0x288970u;
label_288970:
    // 0x288970: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x288970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_288974:
    // 0x288974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_288978:
    // 0x288978: 0xc0a2192  jal         func_288648
label_28897c:
    if (ctx->pc == 0x28897Cu) {
        ctx->pc = 0x28897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288978u;
        // 0x28897c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288980u;
        goto label_288980;
    }
    ctx->pc = 0x288978u;
    SET_GPR_U32(ctx, 31, 0x288980u);
    ctx->pc = 0x28897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288978u;
    // 0x28897c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288648u, 0x288978u, 0x288980u)) {
        return;
    }
    ctx->pc = 0x288980u;
label_288980:
    // 0x288980: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288984:
    // 0x288984: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x288984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_288988:
    // 0x288988: 0x1640001b  bnez        $s2, . + 4 + (0x1B << 2)
label_28898c:
    if (ctx->pc == 0x28898Cu) {
        ctx->pc = 0x28898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288988u;
        // 0x28898c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288990u;
        goto label_288990;
    }
    ctx->pc = 0x288988u;
    {
        const bool branch_taken_0x288988 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x28898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288988u;
        // 0x28898c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288988) {
            ctx->pc = 0x2889F8u;
            goto label_2889f8;
        }
    }
    ctx->pc = 0x288990u;
label_288990:
    // 0x288990: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_288994:
    if (ctx->pc == 0x288994u) {
        ctx->pc = 0x288994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288990u;
        // 0x288994: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288998u;
        goto label_288998;
    }
    ctx->pc = 0x288990u;
    {
        const bool branch_taken_0x288990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x288994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288990u;
        // 0x288994: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288990) {
            ctx->pc = 0x2889F4u;
            goto label_2889f4;
        }
    }
    ctx->pc = 0x288998u;
label_288998:
    // 0x288998: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x288998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28899c:
    // 0x28899c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2889a0:
    if (ctx->pc == 0x2889A0u) {
        ctx->pc = 0x2889A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28899Cu;
        // 0x2889a0: 0x8c510014  lw          $s1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2889A4u;
        goto label_2889a4;
    }
    ctx->pc = 0x28899Cu;
    {
        const bool branch_taken_0x28899c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2889A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28899Cu;
        // 0x2889a0: 0x8c510014  lw          $s1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28899c) {
            ctx->pc = 0x2889D0u;
            goto label_2889d0;
        }
    }
    ctx->pc = 0x2889A4u;
label_2889a4:
    // 0x2889a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2889a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2889a8:
    // 0x2889a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2889a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2889ac:
    // 0x2889ac: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2889b0:
    if (ctx->pc == 0x2889B0u) {
        ctx->pc = 0x2889B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2889ACu;
        // 0x2889b0: 0x26830fc8  addiu       $v1, $s4, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2889B4u;
        goto label_2889b4;
    }
    ctx->pc = 0x2889ACu;
    {
        const bool branch_taken_0x2889ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2889B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2889ACu;
        // 0x2889b0: 0x26830fc8  addiu       $v1, $s4, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2889ac) {
            ctx->pc = 0x2889C4u;
            goto label_2889c4;
        }
    }
    ctx->pc = 0x2889B4u;
label_2889b4:
    // 0x2889b4: 0xc092932  jal         func_24A4C8
label_2889b8:
    if (ctx->pc == 0x2889B8u) {
        ctx->pc = 0x2889BCu;
        goto label_2889bc;
    }
    ctx->pc = 0x2889B4u;
    SET_GPR_U32(ctx, 31, 0x2889BCu);
    ctx->pc = 0x24A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4C8u, 0x2889B4u, 0x2889BCu)) {
        return;
    }
    ctx->pc = 0x2889BCu;
label_2889bc:
    // 0x2889bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_2889c0:
    if (ctx->pc == 0x2889C0u) {
        ctx->pc = 0x2889C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2889BCu;
        // 0x2889c0: 0x26a263b0  addiu       $v0, $s5, 0x63B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 25520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2889C4u;
        goto label_2889c4;
    }
    ctx->pc = 0x2889BCu;
    {
        const bool branch_taken_0x2889bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2889C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2889BCu;
        // 0x2889c0: 0x26a263b0  addiu       $v0, $s5, 0x63B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 25520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2889bc) {
            ctx->pc = 0x2889D4u;
            goto label_2889d4;
        }
    }
    ctx->pc = 0x2889C4u;
label_2889c4:
    // 0x2889c4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x2889c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2889c8:
    // 0x2889c8: 0x40f809  jalr        $v0
label_2889cc:
    if (ctx->pc == 0x2889CCu) {
        ctx->pc = 0x2889D0u;
        goto label_2889d0;
    }
    ctx->pc = 0x2889C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2889D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2889C8u, 0x2889D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2889D0u;
label_2889d0:
    // 0x2889d0: 0x26a263b0  addiu       $v0, $s5, 0x63B0
    ctx->pc = 0x2889d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 25520));
label_2889d4:
    // 0x2889d4: 0x26830fc8  addiu       $v1, $s4, 0xFC8
    ctx->pc = 0x2889d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4040));
label_2889d8:
    // 0x2889d8: 0x8c440524  lw          $a0, 0x524($v0)
    ctx->pc = 0x2889d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1316)));
label_2889dc:
    // 0x2889dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2889dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2889e0:
    // 0x2889e0: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x2889e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_2889e4:
    // 0x2889e4: 0x40f809  jalr        $v0
label_2889e8:
    if (ctx->pc == 0x2889E8u) {
        ctx->pc = 0x2889E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2889E4u;
        // 0x2889e8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2889ECu;
        goto label_2889ec;
    }
    ctx->pc = 0x2889E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2889ECu);
        ctx->pc = 0x2889E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2889E4u;
        // 0x2889e8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2889E4u, 0x2889ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2889ECu;
label_2889ec:
    // 0x2889ec: 0xc0a22a6  jal         func_288A98
label_2889f0:
    if (ctx->pc == 0x2889F0u) {
        ctx->pc = 0x2889F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2889ECu;
        // 0x2889f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2889F4u;
        goto label_2889f4;
    }
    ctx->pc = 0x2889ECu;
    SET_GPR_U32(ctx, 31, 0x2889F4u);
    ctx->pc = 0x2889F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2889ECu;
    // 0x2889f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288A98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A98u, 0x2889ECu, 0x2889F4u)) {
        return;
    }
    ctx->pc = 0x2889F4u;
label_2889f4:
    // 0x2889f4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2889f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2889f8:
    // 0x2889f8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2889f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2889fc:
    // 0x2889fc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2889fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_288a00:
    // 0x288a00: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x288a00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_288a04:
    // 0x288a04: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x288a04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_288a08:
    // 0x288a08: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x288a08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_288a0c:
    // 0x288a0c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x288a0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_288a10:
    // 0x288a10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x288a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_288a14:
    // 0x288a14: 0x3e00008  jr          $ra
label_288a18:
    if (ctx->pc == 0x288A18u) {
        ctx->pc = 0x288A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A14u;
        // 0x288a18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288A1Cu;
        goto label_288a1c;
    }
    ctx->pc = 0x288A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A14u;
        // 0x288a18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288A1Cu;
label_288a1c:
    // 0x288a1c: 0x0  nop
    ctx->pc = 0x288a1cu;
    // NOP
label_288a20:
    // 0x288a20: 0xaf85c00c  sw          $a1, -0x3FF4($gp)
    ctx->pc = 0x288a20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950924), GPR_U32(ctx, 5));
label_288a24:
    // 0x288a24: 0x0  nop
    ctx->pc = 0x288a24u;
    // NOP
    ctx->pc = 0x288a28u;
}
