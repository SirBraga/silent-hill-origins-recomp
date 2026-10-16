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

// Function: sub_001CA8D0
// Address: 0x1ca8d0 - 0x1ca9d8
void sub_001CA8D0_0x1ca8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA8D0_0x1ca8d0");
#endif

    switch (ctx->pc) {
        case 0x1ca8d0u: goto label_1ca8d0;
        case 0x1ca8d4u: goto label_1ca8d4;
        case 0x1ca8d8u: goto label_1ca8d8;
        case 0x1ca8dcu: goto label_1ca8dc;
        case 0x1ca8e0u: goto label_1ca8e0;
        case 0x1ca8e4u: goto label_1ca8e4;
        case 0x1ca8e8u: goto label_1ca8e8;
        case 0x1ca8ecu: goto label_1ca8ec;
        case 0x1ca8f0u: goto label_1ca8f0;
        case 0x1ca8f4u: goto label_1ca8f4;
        case 0x1ca8f8u: goto label_1ca8f8;
        case 0x1ca8fcu: goto label_1ca8fc;
        case 0x1ca900u: goto label_1ca900;
        case 0x1ca904u: goto label_1ca904;
        case 0x1ca908u: goto label_1ca908;
        case 0x1ca90cu: goto label_1ca90c;
        case 0x1ca910u: goto label_1ca910;
        case 0x1ca914u: goto label_1ca914;
        case 0x1ca918u: goto label_1ca918;
        case 0x1ca91cu: goto label_1ca91c;
        case 0x1ca920u: goto label_1ca920;
        case 0x1ca924u: goto label_1ca924;
        case 0x1ca928u: goto label_1ca928;
        case 0x1ca92cu: goto label_1ca92c;
        case 0x1ca930u: goto label_1ca930;
        case 0x1ca934u: goto label_1ca934;
        case 0x1ca938u: goto label_1ca938;
        case 0x1ca93cu: goto label_1ca93c;
        case 0x1ca940u: goto label_1ca940;
        case 0x1ca944u: goto label_1ca944;
        case 0x1ca948u: goto label_1ca948;
        case 0x1ca94cu: goto label_1ca94c;
        case 0x1ca950u: goto label_1ca950;
        case 0x1ca954u: goto label_1ca954;
        case 0x1ca958u: goto label_1ca958;
        case 0x1ca95cu: goto label_1ca95c;
        case 0x1ca960u: goto label_1ca960;
        case 0x1ca964u: goto label_1ca964;
        case 0x1ca968u: goto label_1ca968;
        case 0x1ca96cu: goto label_1ca96c;
        case 0x1ca970u: goto label_1ca970;
        case 0x1ca974u: goto label_1ca974;
        case 0x1ca978u: goto label_1ca978;
        case 0x1ca97cu: goto label_1ca97c;
        case 0x1ca980u: goto label_1ca980;
        case 0x1ca984u: goto label_1ca984;
        case 0x1ca988u: goto label_1ca988;
        case 0x1ca98cu: goto label_1ca98c;
        case 0x1ca990u: goto label_1ca990;
        case 0x1ca994u: goto label_1ca994;
        case 0x1ca998u: goto label_1ca998;
        case 0x1ca99cu: goto label_1ca99c;
        case 0x1ca9a0u: goto label_1ca9a0;
        case 0x1ca9a4u: goto label_1ca9a4;
        case 0x1ca9a8u: goto label_1ca9a8;
        case 0x1ca9acu: goto label_1ca9ac;
        case 0x1ca9b0u: goto label_1ca9b0;
        case 0x1ca9b4u: goto label_1ca9b4;
        case 0x1ca9b8u: goto label_1ca9b8;
        case 0x1ca9bcu: goto label_1ca9bc;
        case 0x1ca9c0u: goto label_1ca9c0;
        case 0x1ca9c4u: goto label_1ca9c4;
        case 0x1ca9c8u: goto label_1ca9c8;
        case 0x1ca9ccu: goto label_1ca9cc;
        case 0x1ca9d0u: goto label_1ca9d0;
        case 0x1ca9d4u: goto label_1ca9d4;
        default: break;
    }

    ctx->pc = 0x1ca8d0u;

label_1ca8d0:
    // 0x1ca8d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ca8d4:
    // 0x1ca8d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ca8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ca8d8:
    // 0x1ca8d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ca8dc:
    // 0x1ca8dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca8dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ca8e0:
    // 0x1ca8e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ca8e4:
    // 0x1ca8e4: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
label_1ca8e8:
    if (ctx->pc == 0x1CA8E8u) {
        ctx->pc = 0x1CA8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA8E4u;
        // 0x1ca8e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA8ECu;
        goto label_1ca8ec;
    }
    ctx->pc = 0x1CA8E4u;
    {
        const bool branch_taken_0x1ca8e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA8E4u;
        // 0x1ca8e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca8e4) {
            ctx->pc = 0x1CA950u;
            goto label_1ca950;
        }
    }
    ctx->pc = 0x1CA8ECu;
label_1ca8ec:
    // 0x1ca8ec: 0x8e060268  lw          $a2, 0x268($s0)
    ctx->pc = 0x1ca8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_1ca8f0:
    // 0x1ca8f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ca8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ca8f4:
    // 0x1ca8f4: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1ca8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1ca8f8:
    // 0x1ca8f8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ca8f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1ca8fc:
    // 0x1ca8fc: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1ca8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1ca900:
    // 0x1ca900: 0x60f809  jalr        $v1
label_1ca904:
    if (ctx->pc == 0x1CA904u) {
        ctx->pc = 0x1CA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA900u;
        // 0x1ca904: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA908u;
        goto label_1ca908;
    }
    ctx->pc = 0x1CA900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CA908u);
        ctx->pc = 0x1CA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA900u;
        // 0x1ca904: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA900u, 0x1CA908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CA908u;
label_1ca908:
    // 0x1ca908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca90c:
    // 0x1ca90c: 0xae0003b0  sw          $zero, 0x3B0($s0)
    ctx->pc = 0x1ca90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 0));
label_1ca910:
    // 0x1ca910: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_1ca914:
    if (ctx->pc == 0x1CA914u) {
        ctx->pc = 0x1CA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA910u;
        // 0x1ca914: 0xae020398  sw          $v0, 0x398($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA918u;
        goto label_1ca918;
    }
    ctx->pc = 0x1CA910u;
    {
        const bool branch_taken_0x1ca910 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA910u;
        // 0x1ca914: 0xae020398  sw          $v0, 0x398($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca910) {
            ctx->pc = 0x1CA934u;
            goto label_1ca934;
        }
    }
    ctx->pc = 0x1CA918u;
label_1ca918:
    // 0x1ca918: 0x8e0203a8  lw          $v0, 0x3A8($s0)
    ctx->pc = 0x1ca918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
label_1ca91c:
    // 0x1ca91c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ca91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ca920:
    // 0x1ca920: 0x4410028  bgez        $v0, . + 4 + (0x28 << 2)
label_1ca924:
    if (ctx->pc == 0x1CA924u) {
        ctx->pc = 0x1CA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA920u;
        // 0x1ca924: 0xae0203ac  sw          $v0, 0x3AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA928u;
        goto label_1ca928;
    }
    ctx->pc = 0x1CA920u;
    {
        const bool branch_taken_0x1ca920 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1CA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA920u;
        // 0x1ca924: 0xae0203ac  sw          $v0, 0x3AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca920) {
            ctx->pc = 0x1CA9C4u;
            goto label_1ca9c4;
        }
    }
    ctx->pc = 0x1CA928u;
label_1ca928:
    // 0x1ca928: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ca928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ca92c:
    // 0x1ca92c: 0x10000025  b           . + 4 + (0x25 << 2)
label_1ca930:
    if (ctx->pc == 0x1CA930u) {
        ctx->pc = 0x1CA930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA92Cu;
        // 0x1ca930: 0xae0203ac  sw          $v0, 0x3AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA934u;
        goto label_1ca934;
    }
    ctx->pc = 0x1CA92Cu;
    {
        const bool branch_taken_0x1ca92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA92Cu;
        // 0x1ca930: 0xae0203ac  sw          $v0, 0x3AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca92c) {
            ctx->pc = 0x1CA9C4u;
            goto label_1ca9c4;
        }
    }
    ctx->pc = 0x1CA934u;
label_1ca934:
    // 0x1ca934: 0x8e0203a8  lw          $v0, 0x3A8($s0)
    ctx->pc = 0x1ca934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
label_1ca938:
    // 0x1ca938: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ca938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ca93c:
    // 0x1ca93c: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x1ca93cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1ca940:
    // 0x1ca940: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
label_1ca944:
    if (ctx->pc == 0x1CA944u) {
        ctx->pc = 0x1CA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA940u;
        // 0x1ca944: 0xae0203ac  sw          $v0, 0x3AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA948u;
        goto label_1ca948;
    }
    ctx->pc = 0x1CA940u;
    {
        const bool branch_taken_0x1ca940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA940u;
        // 0x1ca944: 0xae0203ac  sw          $v0, 0x3AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca940) {
            ctx->pc = 0x1CA9C4u;
            goto label_1ca9c4;
        }
    }
    ctx->pc = 0x1CA948u;
label_1ca948:
    // 0x1ca948: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1ca94c:
    if (ctx->pc == 0x1CA94Cu) {
        ctx->pc = 0x1CA94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA948u;
        // 0x1ca94c: 0xae0003ac  sw          $zero, 0x3AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA950u;
        goto label_1ca950;
    }
    ctx->pc = 0x1CA948u;
    {
        const bool branch_taken_0x1ca948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA948u;
        // 0x1ca94c: 0xae0003ac  sw          $zero, 0x3AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca948) {
            ctx->pc = 0x1CA9C4u;
            goto label_1ca9c4;
        }
    }
    ctx->pc = 0x1CA950u;
label_1ca950:
    // 0x1ca950: 0x8e030268  lw          $v1, 0x268($s0)
    ctx->pc = 0x1ca950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_1ca954:
    // 0x1ca954: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ca954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca958:
    // 0x1ca958: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ca958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ca95c:
    // 0x1ca95c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1ca95cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1ca960:
    // 0x1ca960: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x1ca960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1ca964:
    // 0x1ca964: 0xc0f809  jalr        $a2
label_1ca968:
    if (ctx->pc == 0x1CA968u) {
        ctx->pc = 0x1CA968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA964u;
        // 0x1ca968: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA96Cu;
        goto label_1ca96c;
    }
    ctx->pc = 0x1CA964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1CA96Cu);
        ctx->pc = 0x1CA968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA964u;
        // 0x1ca968: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA964u, 0x1CA96Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CA96Cu;
label_1ca96c:
    // 0x1ca96c: 0x8e0303c8  lw          $v1, 0x3C8($s0)
    ctx->pc = 0x1ca96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 968)));
label_1ca970:
    // 0x1ca970: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1ca970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1ca974:
    // 0x1ca974: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca978:
    // 0x1ca978: 0xae0003c0  sw          $zero, 0x3C0($s0)
    ctx->pc = 0x1ca978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
label_1ca97c:
    // 0x1ca97c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1ca97cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ca980:
    // 0x1ca980: 0xae0403b4  sw          $a0, 0x3B4($s0)
    ctx->pc = 0x1ca980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 4));
label_1ca984:
    // 0x1ca984: 0x260202e8  addiu       $v0, $s0, 0x2E8
    ctx->pc = 0x1ca984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 744));
label_1ca988:
    // 0x1ca988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ca98c:
    // 0x1ca98c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ca98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca990:
    // 0x1ca990: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1ca994:
    if (ctx->pc == 0x1CA994u) {
        ctx->pc = 0x1CA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA990u;
        // 0x1ca994: 0xe60003b8  swc1        $f0, 0x3B8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 952), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA998u;
        goto label_1ca998;
    }
    ctx->pc = 0x1CA990u;
    {
        const bool branch_taken_0x1ca990 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA990u;
        // 0x1ca994: 0xe60003b8  swc1        $f0, 0x3B8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 952), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca990) {
            ctx->pc = 0x1CA9ACu;
            goto label_1ca9ac;
        }
    }
    ctx->pc = 0x1CA998u;
label_1ca998:
    // 0x1ca998: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ca998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca99c:
    // 0x1ca99c: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x1ca99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
label_1ca9a0:
    // 0x1ca9a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ca9a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca9a4:
    // 0x1ca9a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ca9a8:
    if (ctx->pc == 0x1CA9A8u) {
        ctx->pc = 0x1CA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9A4u;
        // 0x1ca9a8: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA9ACu;
        goto label_1ca9ac;
    }
    ctx->pc = 0x1CA9A4u;
    {
        const bool branch_taken_0x1ca9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9A4u;
        // 0x1ca9a8: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9a4) {
            ctx->pc = 0x1CA9C0u;
            goto label_1ca9c0;
        }
    }
    ctx->pc = 0x1CA9ACu;
label_1ca9ac:
    // 0x1ca9ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ca9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca9b0:
    // 0x1ca9b0: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x1ca9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
label_1ca9b4:
    // 0x1ca9b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ca9b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca9b8:
    // 0x1ca9b8: 0x0  nop
    ctx->pc = 0x1ca9b8u;
    // NOP
label_1ca9bc:
    // 0x1ca9bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ca9bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ca9c0:
    // 0x1ca9c0: 0xe60003bc  swc1        $f0, 0x3BC($s0)
    ctx->pc = 0x1ca9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 956), bits); }
label_1ca9c4:
    // 0x1ca9c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ca9c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ca9c8:
    // 0x1ca9c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ca9c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ca9cc:
    // 0x1ca9cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca9d0:
    // 0x1ca9d0: 0x3e00008  jr          $ra
label_1ca9d4:
    if (ctx->pc == 0x1CA9D4u) {
        ctx->pc = 0x1CA9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9D0u;
        // 0x1ca9d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA9D8u;
        goto label_fallthrough_0x1ca9d0;
    }
    ctx->pc = 0x1CA9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9D0u;
        // 0x1ca9d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ca9d0:
    ctx->pc = 0x1CA9D8u;
}
