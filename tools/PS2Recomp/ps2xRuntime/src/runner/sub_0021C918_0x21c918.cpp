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

// Function: sub_0021C918
// Address: 0x21c918 - 0x21ca68
void sub_0021C918_0x21c918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C918_0x21c918");
#endif

    switch (ctx->pc) {
        case 0x21c918u: goto label_21c918;
        case 0x21c91cu: goto label_21c91c;
        case 0x21c920u: goto label_21c920;
        case 0x21c924u: goto label_21c924;
        case 0x21c928u: goto label_21c928;
        case 0x21c92cu: goto label_21c92c;
        case 0x21c930u: goto label_21c930;
        case 0x21c934u: goto label_21c934;
        case 0x21c938u: goto label_21c938;
        case 0x21c93cu: goto label_21c93c;
        case 0x21c940u: goto label_21c940;
        case 0x21c944u: goto label_21c944;
        case 0x21c948u: goto label_21c948;
        case 0x21c94cu: goto label_21c94c;
        case 0x21c950u: goto label_21c950;
        case 0x21c954u: goto label_21c954;
        case 0x21c958u: goto label_21c958;
        case 0x21c95cu: goto label_21c95c;
        case 0x21c960u: goto label_21c960;
        case 0x21c964u: goto label_21c964;
        case 0x21c968u: goto label_21c968;
        case 0x21c96cu: goto label_21c96c;
        case 0x21c970u: goto label_21c970;
        case 0x21c974u: goto label_21c974;
        case 0x21c978u: goto label_21c978;
        case 0x21c97cu: goto label_21c97c;
        case 0x21c980u: goto label_21c980;
        case 0x21c984u: goto label_21c984;
        case 0x21c988u: goto label_21c988;
        case 0x21c98cu: goto label_21c98c;
        case 0x21c990u: goto label_21c990;
        case 0x21c994u: goto label_21c994;
        case 0x21c998u: goto label_21c998;
        case 0x21c99cu: goto label_21c99c;
        case 0x21c9a0u: goto label_21c9a0;
        case 0x21c9a4u: goto label_21c9a4;
        case 0x21c9a8u: goto label_21c9a8;
        case 0x21c9acu: goto label_21c9ac;
        case 0x21c9b0u: goto label_21c9b0;
        case 0x21c9b4u: goto label_21c9b4;
        case 0x21c9b8u: goto label_21c9b8;
        case 0x21c9bcu: goto label_21c9bc;
        case 0x21c9c0u: goto label_21c9c0;
        case 0x21c9c4u: goto label_21c9c4;
        case 0x21c9c8u: goto label_21c9c8;
        case 0x21c9ccu: goto label_21c9cc;
        case 0x21c9d0u: goto label_21c9d0;
        case 0x21c9d4u: goto label_21c9d4;
        case 0x21c9d8u: goto label_21c9d8;
        case 0x21c9dcu: goto label_21c9dc;
        case 0x21c9e0u: goto label_21c9e0;
        case 0x21c9e4u: goto label_21c9e4;
        case 0x21c9e8u: goto label_21c9e8;
        case 0x21c9ecu: goto label_21c9ec;
        case 0x21c9f0u: goto label_21c9f0;
        case 0x21c9f4u: goto label_21c9f4;
        case 0x21c9f8u: goto label_21c9f8;
        case 0x21c9fcu: goto label_21c9fc;
        case 0x21ca00u: goto label_21ca00;
        case 0x21ca04u: goto label_21ca04;
        case 0x21ca08u: goto label_21ca08;
        case 0x21ca0cu: goto label_21ca0c;
        case 0x21ca10u: goto label_21ca10;
        case 0x21ca14u: goto label_21ca14;
        case 0x21ca18u: goto label_21ca18;
        case 0x21ca1cu: goto label_21ca1c;
        case 0x21ca20u: goto label_21ca20;
        case 0x21ca24u: goto label_21ca24;
        case 0x21ca28u: goto label_21ca28;
        case 0x21ca2cu: goto label_21ca2c;
        case 0x21ca30u: goto label_21ca30;
        case 0x21ca34u: goto label_21ca34;
        case 0x21ca38u: goto label_21ca38;
        case 0x21ca3cu: goto label_21ca3c;
        case 0x21ca40u: goto label_21ca40;
        case 0x21ca44u: goto label_21ca44;
        case 0x21ca48u: goto label_21ca48;
        case 0x21ca4cu: goto label_21ca4c;
        case 0x21ca50u: goto label_21ca50;
        case 0x21ca54u: goto label_21ca54;
        case 0x21ca58u: goto label_21ca58;
        case 0x21ca5cu: goto label_21ca5c;
        case 0x21ca60u: goto label_21ca60;
        case 0x21ca64u: goto label_21ca64;
        default: break;
    }

    ctx->pc = 0x21c918u;

label_21c918:
    // 0x21c918: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21c918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_21c91c:
    // 0x21c91c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x21c91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_21c920:
    // 0x21c920: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x21c920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_21c924:
    // 0x21c924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c928:
    // 0x21c928: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21c928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_21c92c:
    // 0x21c92c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21c92cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c930:
    // 0x21c930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21c934:
    // 0x21c934: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x21c934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_21c938:
    // 0x21c938: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_21c93c:
    if (ctx->pc == 0x21C93Cu) {
        ctx->pc = 0x21C93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C938u;
        // 0x21c93c: 0x8e1101ac  lw          $s1, 0x1AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C940u;
        goto label_21c940;
    }
    ctx->pc = 0x21C938u;
    {
        const bool branch_taken_0x21c938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C938u;
        // 0x21c93c: 0x8e1101ac  lw          $s1, 0x1AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c938) {
            ctx->pc = 0x21C9E4u;
            goto label_21c9e4;
        }
    }
    ctx->pc = 0x21C940u;
label_21c940:
    // 0x21c940: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x21c940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_21c944:
    // 0x21c944: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_21c948:
    if (ctx->pc == 0x21C948u) {
        ctx->pc = 0x21C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C944u;
        // 0x21c948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C94Cu;
        goto label_21c94c;
    }
    ctx->pc = 0x21C944u;
    {
        const bool branch_taken_0x21c944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C944u;
        // 0x21c948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c944) {
            ctx->pc = 0x21CA50u;
            goto label_21ca50;
        }
    }
    ctx->pc = 0x21C94Cu;
label_21c94c:
    // 0x21c94c: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x21c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_21c950:
    // 0x21c950: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_21c954:
    if (ctx->pc == 0x21C954u) {
        ctx->pc = 0x21C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C950u;
        // 0x21c954: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C958u;
        goto label_21c958;
    }
    ctx->pc = 0x21C950u;
    {
        const bool branch_taken_0x21c950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C950u;
        // 0x21c954: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c950) {
            ctx->pc = 0x21C980u;
            goto label_21c980;
        }
    }
    ctx->pc = 0x21C958u;
label_21c958:
    // 0x21c958: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x21c958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_21c95c:
    // 0x21c95c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x21c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21c960:
    // 0x21c960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21c964:
    // 0x21c964: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x21c964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21c968:
    // 0x21c968: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21c968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21c96c:
    // 0x21c96c: 0x3012  mflo        $a2
    ctx->pc = 0x21c96cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_21c970:
    // 0x21c970: 0x40f809  jalr        $v0
label_21c974:
    if (ctx->pc == 0x21C974u) {
        ctx->pc = 0x21C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C970u;
        // 0x21c974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C978u;
        goto label_21c978;
    }
    ctx->pc = 0x21C970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C978u);
        ctx->pc = 0x21C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C970u;
        // 0x21c974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C970u, 0x21C978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C978u;
label_21c978:
    // 0x21c978: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x21c978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_21c97c:
    // 0x21c97c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x21c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_21c980:
    // 0x21c980: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21c980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c984:
    // 0x21c984: 0x8e270070  lw          $a3, 0x70($s1)
    ctx->pc = 0x21c984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_21c988:
    // 0x21c988: 0x18400030  blez        $v0, . + 4 + (0x30 << 2)
label_21c98c:
    if (ctx->pc == 0x21C98Cu) {
        ctx->pc = 0x21C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C988u;
        // 0x21c98c: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C990u;
        goto label_21c990;
    }
    ctx->pc = 0x21C988u;
    {
        const bool branch_taken_0x21c988 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C988u;
        // 0x21c98c: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c988) {
            ctx->pc = 0x21CA4Cu;
            goto label_21ca4c;
        }
    }
    ctx->pc = 0x21C990u;
label_21c990:
    // 0x21c990: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x21c990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_21c994:
    // 0x21c994: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_21c998:
    if (ctx->pc == 0x21C998u) {
        ctx->pc = 0x21C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C994u;
        // 0x21c998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C99Cu;
        goto label_21c99c;
    }
    ctx->pc = 0x21C994u;
    {
        const bool branch_taken_0x21c994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C994u;
        // 0x21c998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c994) {
            ctx->pc = 0x21CA50u;
            goto label_21ca50;
        }
    }
    ctx->pc = 0x21C99Cu;
label_21c99c:
    // 0x21c99c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x21c99cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_21c9a0:
    // 0x21c9a0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_21c9a4:
    if (ctx->pc == 0x21C9A4u) {
        ctx->pc = 0x21C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9A0u;
        // 0x21c9a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C9A8u;
        goto label_21c9a8;
    }
    ctx->pc = 0x21C9A0u;
    {
        const bool branch_taken_0x21c9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9A0u;
        // 0x21c9a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c9a0) {
            ctx->pc = 0x21CA50u;
            goto label_21ca50;
        }
    }
    ctx->pc = 0x21C9A8u;
label_21c9a8:
    // 0x21c9a8: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x21c9a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_21c9ac:
    // 0x21c9ac: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_21c9b0:
    if (ctx->pc == 0x21C9B0u) {
        ctx->pc = 0x21C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9ACu;
        // 0x21c9b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C9B4u;
        goto label_21c9b4;
    }
    ctx->pc = 0x21C9ACu;
    {
        const bool branch_taken_0x21c9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9ACu;
        // 0x21c9b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c9ac) {
            ctx->pc = 0x21CA50u;
            goto label_21ca50;
        }
    }
    ctx->pc = 0x21C9B4u;
label_21c9b4:
    // 0x21c9b4: 0x94620010  lhu         $v0, 0x10($v1)
    ctx->pc = 0x21c9b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_21c9b8:
    // 0x21c9b8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_21c9bc:
    if (ctx->pc == 0x21C9BCu) {
        ctx->pc = 0x21C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9B8u;
        // 0x21c9bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C9C0u;
        goto label_21c9c0;
    }
    ctx->pc = 0x21C9B8u;
    {
        const bool branch_taken_0x21c9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9B8u;
        // 0x21c9bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c9b8) {
            ctx->pc = 0x21CA50u;
            goto label_21ca50;
        }
    }
    ctx->pc = 0x21C9C0u;
label_21c9c0:
    // 0x21c9c0: 0x94620020  lhu         $v0, 0x20($v1)
    ctx->pc = 0x21c9c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_21c9c4:
    // 0x21c9c4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_21c9c8:
    if (ctx->pc == 0x21C9C8u) {
        ctx->pc = 0x21C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9C4u;
        // 0x21c9c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C9CCu;
        goto label_21c9cc;
    }
    ctx->pc = 0x21C9C4u;
    {
        const bool branch_taken_0x21c9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9C4u;
        // 0x21c9c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c9c4) {
            ctx->pc = 0x21CA50u;
            goto label_21ca50;
        }
    }
    ctx->pc = 0x21C9CCu;
label_21c9cc:
    // 0x21c9cc: 0x94620012  lhu         $v0, 0x12($v1)
    ctx->pc = 0x21c9ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
label_21c9d0:
    // 0x21c9d0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_21c9d4:
    if (ctx->pc == 0x21C9D4u) {
        ctx->pc = 0x21C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9D0u;
        // 0x21c9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C9D8u;
        goto label_21c9d8;
    }
    ctx->pc = 0x21C9D0u;
    {
        const bool branch_taken_0x21c9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9D0u;
        // 0x21c9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c9d0) {
            ctx->pc = 0x21CA50u;
            goto label_21ca50;
        }
    }
    ctx->pc = 0x21C9D8u;
label_21c9d8:
    // 0x21c9d8: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x21c9d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_21c9dc:
    // 0x21c9dc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_21c9e0:
    if (ctx->pc == 0x21C9E0u) {
        ctx->pc = 0x21C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9DCu;
        // 0x21c9e0: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C9E4u;
        goto label_21c9e4;
    }
    ctx->pc = 0x21C9DCu;
    {
        const bool branch_taken_0x21c9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c9dc) {
            ctx->pc = 0x21C9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C9DCu;
            // 0x21c9e0: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C9ECu;
            goto label_21c9ec;
        }
    }
    ctx->pc = 0x21C9E4u;
label_21c9e4:
    // 0x21c9e4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_21c9e8:
    if (ctx->pc == 0x21C9E8u) {
        ctx->pc = 0x21C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9E4u;
        // 0x21c9e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C9ECu;
        goto label_21c9ec;
    }
    ctx->pc = 0x21C9E4u;
    {
        const bool branch_taken_0x21c9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9E4u;
        // 0x21c9e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c9e4) {
            ctx->pc = 0x21CA50u;
            goto label_21ca50;
        }
    }
    ctx->pc = 0x21C9ECu;
label_21c9ec:
    // 0x21c9ec: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x21c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_21c9f0:
    // 0x21c9f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21c9f4:
    // 0x21c9f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21c9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21c9f8:
    // 0x21c9f8: 0x480fffa  bltz        $a0, . + 4 + (-0x6 << 2)
label_21c9fc:
    if (ctx->pc == 0x21C9FCu) {
        ctx->pc = 0x21C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9F8u;
        // 0x21c9fc: 0x24a90054  addiu       $t1, $a1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA00u;
        goto label_21ca00;
    }
    ctx->pc = 0x21C9F8u;
    {
        const bool branch_taken_0x21c9f8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x21C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9F8u;
        // 0x21c9fc: 0x24a90054  addiu       $t1, $a1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c9f8) {
            ctx->pc = 0x21C9E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c9e4;
        }
    }
    ctx->pc = 0x21CA00u;
label_21ca00:
    // 0x21ca00: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x21ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_21ca04:
    // 0x21ca04: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x21ca04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_21ca08:
    // 0x21ca08: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x21ca08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_21ca0c:
    // 0x21ca0c: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x21ca0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_21ca10:
    // 0x21ca10: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21ca10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ca14:
    // 0x21ca14: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21ca14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21ca18:
    // 0x21ca18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21ca1c:
    // 0x21ca1c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x21ca1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_21ca20:
    // 0x21ca20: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x21ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_21ca24:
    // 0x21ca24: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x21ca24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_21ca28:
    // 0x21ca28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21ca2c:
    // 0x21ca2c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x21ca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_21ca30:
    // 0x21ca30: 0x4c1fff9  bgez        $a2, . + 4 + (-0x7 << 2)
label_21ca34:
    if (ctx->pc == 0x21CA34u) {
        ctx->pc = 0x21CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA30u;
        // 0x21ca34: 0x102900b  movn        $s2, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA38u;
        goto label_21ca38;
    }
    ctx->pc = 0x21CA30u;
    {
        const bool branch_taken_0x21ca30 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x21CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA30u;
        // 0x21ca34: 0x102900b  movn        $s2, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ca30) {
            ctx->pc = 0x21CA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ca18;
        }
    }
    ctx->pc = 0x21CA38u;
label_21ca38:
    // 0x21ca38: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x21ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_21ca3c:
    // 0x21ca3c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x21ca3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21ca40:
    // 0x21ca40: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x21ca40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21ca44:
    // 0x21ca44: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_21ca48:
    if (ctx->pc == 0x21CA48u) {
        ctx->pc = 0x21CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA44u;
        // 0x21ca48: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA4Cu;
        goto label_21ca4c;
    }
    ctx->pc = 0x21CA44u;
    {
        const bool branch_taken_0x21ca44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA44u;
        // 0x21ca48: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ca44) {
            ctx->pc = 0x21C990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c990;
        }
    }
    ctx->pc = 0x21CA4Cu;
label_21ca4c:
    // 0x21ca4c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21ca4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21ca50:
    // 0x21ca50: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21ca50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21ca54:
    // 0x21ca54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21ca54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21ca58:
    // 0x21ca58: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x21ca58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21ca5c:
    // 0x21ca5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ca5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21ca60:
    // 0x21ca60: 0x3e00008  jr          $ra
label_21ca64:
    if (ctx->pc == 0x21CA64u) {
        ctx->pc = 0x21CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA60u;
        // 0x21ca64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA68u;
        goto label_fallthrough_0x21ca60;
    }
    ctx->pc = 0x21CA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA60u;
        // 0x21ca64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21ca60:
    ctx->pc = 0x21CA68u;
}
