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

// Function: sub_001EC1D0
// Address: 0x1ec1d0 - 0x1ec260
void sub_001EC1D0_0x1ec1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC1D0_0x1ec1d0");
#endif

    switch (ctx->pc) {
        case 0x1ec1d0u: goto label_1ec1d0;
        case 0x1ec1d4u: goto label_1ec1d4;
        case 0x1ec1d8u: goto label_1ec1d8;
        case 0x1ec1dcu: goto label_1ec1dc;
        case 0x1ec1e0u: goto label_1ec1e0;
        case 0x1ec1e4u: goto label_1ec1e4;
        case 0x1ec1e8u: goto label_1ec1e8;
        case 0x1ec1ecu: goto label_1ec1ec;
        case 0x1ec1f0u: goto label_1ec1f0;
        case 0x1ec1f4u: goto label_1ec1f4;
        case 0x1ec1f8u: goto label_1ec1f8;
        case 0x1ec1fcu: goto label_1ec1fc;
        case 0x1ec200u: goto label_1ec200;
        case 0x1ec204u: goto label_1ec204;
        case 0x1ec208u: goto label_1ec208;
        case 0x1ec20cu: goto label_1ec20c;
        case 0x1ec210u: goto label_1ec210;
        case 0x1ec214u: goto label_1ec214;
        case 0x1ec218u: goto label_1ec218;
        case 0x1ec21cu: goto label_1ec21c;
        case 0x1ec220u: goto label_1ec220;
        case 0x1ec224u: goto label_1ec224;
        case 0x1ec228u: goto label_1ec228;
        case 0x1ec22cu: goto label_1ec22c;
        case 0x1ec230u: goto label_1ec230;
        case 0x1ec234u: goto label_1ec234;
        case 0x1ec238u: goto label_1ec238;
        case 0x1ec23cu: goto label_1ec23c;
        case 0x1ec240u: goto label_1ec240;
        case 0x1ec244u: goto label_1ec244;
        case 0x1ec248u: goto label_1ec248;
        case 0x1ec24cu: goto label_1ec24c;
        case 0x1ec250u: goto label_1ec250;
        case 0x1ec254u: goto label_1ec254;
        case 0x1ec258u: goto label_1ec258;
        case 0x1ec25cu: goto label_1ec25c;
        default: break;
    }

    ctx->pc = 0x1ec1d0u;

label_1ec1d0:
    // 0x1ec1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ec1d4:
    // 0x1ec1d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ec1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ec1d8:
    // 0x1ec1d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ec1dc:
    // 0x1ec1dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ec1e0:
    // 0x1ec1e0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ec1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ec1e4:
    // 0x1ec1e4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1ec1e8:
    if (ctx->pc == 0x1EC1E8u) {
        ctx->pc = 0x1EC1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC1E4u;
        // 0x1ec1e8: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC1ECu;
        goto label_1ec1ec;
    }
    ctx->pc = 0x1EC1E4u;
    {
        const bool branch_taken_0x1ec1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec1e4) {
            ctx->pc = 0x1EC1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC1E4u;
            // 0x1ec1e8: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC1F8u;
            goto label_1ec1f8;
        }
    }
    ctx->pc = 0x1EC1ECu;
label_1ec1ec:
    // 0x1ec1ec: 0xc07b074  jal         func_1EC1D0
label_1ec1f0:
    if (ctx->pc == 0x1EC1F0u) {
        ctx->pc = 0x1EC1F4u;
        goto label_1ec1f4;
    }
    ctx->pc = 0x1EC1ECu;
    SET_GPR_U32(ctx, 31, 0x1EC1F4u);
    ctx->pc = 0x1EC1D0u;
    goto label_1ec1d0;
    ctx->pc = 0x1EC1F4u;
label_1ec1f4:
    // 0x1ec1f4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1ec1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ec1f8:
    // 0x1ec1f8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1ec1fc:
    if (ctx->pc == 0x1EC1FCu) {
        ctx->pc = 0x1EC1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC1F8u;
        // 0x1ec1fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC200u;
        goto label_1ec200;
    }
    ctx->pc = 0x1EC1F8u;
    {
        const bool branch_taken_0x1ec1f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec1f8) {
            ctx->pc = 0x1EC1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC1F8u;
            // 0x1ec1fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC20Cu;
            goto label_1ec20c;
        }
    }
    ctx->pc = 0x1EC200u;
label_1ec200:
    // 0x1ec200: 0xc07b074  jal         func_1EC1D0
label_1ec204:
    if (ctx->pc == 0x1EC204u) {
        ctx->pc = 0x1EC208u;
        goto label_1ec208;
    }
    ctx->pc = 0x1EC200u;
    SET_GPR_U32(ctx, 31, 0x1EC208u);
    ctx->pc = 0x1EC1D0u;
    goto label_1ec1d0;
    ctx->pc = 0x1EC208u;
label_1ec208:
    // 0x1ec208: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ec208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ec20c:
    // 0x1ec20c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1ec210:
    if (ctx->pc == 0x1EC210u) {
        ctx->pc = 0x1EC210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC20Cu;
        // 0x1ec210: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC214u;
        goto label_1ec214;
    }
    ctx->pc = 0x1EC20Cu;
    {
        const bool branch_taken_0x1ec20c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec20c) {
            ctx->pc = 0x1EC210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC20Cu;
            // 0x1ec210: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC224u;
            goto label_1ec224;
        }
    }
    ctx->pc = 0x1EC214u;
label_1ec214:
    // 0x1ec214: 0xc07b356  jal         func_1ECD58
label_1ec218:
    if (ctx->pc == 0x1EC218u) {
        ctx->pc = 0x1EC21Cu;
        goto label_1ec21c;
    }
    ctx->pc = 0x1EC214u;
    SET_GPR_U32(ctx, 31, 0x1EC21Cu);
    ctx->pc = 0x1ECD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ECD58u, 0x1EC214u, 0x1EC21Cu)) {
        return;
    }
    ctx->pc = 0x1EC21Cu;
label_1ec21c:
    // 0x1ec21c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ec21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1ec220:
    // 0x1ec220: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1ec220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ec224:
    // 0x1ec224: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1ec228:
    if (ctx->pc == 0x1EC228u) {
        ctx->pc = 0x1EC228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC224u;
        // 0x1ec228: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC22Cu;
        goto label_1ec22c;
    }
    ctx->pc = 0x1EC224u;
    {
        const bool branch_taken_0x1ec224 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec224) {
            ctx->pc = 0x1EC228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC224u;
            // 0x1ec228: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC238u;
            goto label_1ec238;
        }
    }
    ctx->pc = 0x1EC22Cu;
label_1ec22c:
    // 0x1ec22c: 0xc07a816  jal         func_1EA058
label_1ec230:
    if (ctx->pc == 0x1EC230u) {
        ctx->pc = 0x1EC234u;
        goto label_1ec234;
    }
    ctx->pc = 0x1EC22Cu;
    SET_GPR_U32(ctx, 31, 0x1EC234u);
    ctx->pc = 0x1EA058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EA058u, 0x1EC22Cu, 0x1EC234u)) {
        return;
    }
    ctx->pc = 0x1EC234u;
label_1ec234:
    // 0x1ec234: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ec234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1ec238:
    // 0x1ec238: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ec238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1ec23c:
    // 0x1ec23c: 0xc0932d4  jal         func_24CB50
label_1ec240:
    if (ctx->pc == 0x1EC240u) {
        ctx->pc = 0x1EC240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC23Cu;
        // 0x1ec240: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC244u;
        goto label_1ec244;
    }
    ctx->pc = 0x1EC23Cu;
    SET_GPR_U32(ctx, 31, 0x1EC244u);
    ctx->pc = 0x1EC240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC23Cu;
    // 0x1ec240: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EC23Cu, 0x1EC244u)) {
        return;
    }
    ctx->pc = 0x1EC244u;
label_1ec244:
    // 0x1ec244: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ec244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ec248:
    // 0x1ec248: 0x60f809  jalr        $v1
label_1ec24c:
    if (ctx->pc == 0x1EC24Cu) {
        ctx->pc = 0x1EC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC248u;
        // 0x1ec24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC250u;
        goto label_1ec250;
    }
    ctx->pc = 0x1EC248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EC250u);
        ctx->pc = 0x1EC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC248u;
        // 0x1ec24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC248u, 0x1EC250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EC250u;
label_1ec250:
    // 0x1ec250: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ec250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec254:
    // 0x1ec254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec258:
    // 0x1ec258: 0x3e00008  jr          $ra
label_1ec25c:
    if (ctx->pc == 0x1EC25Cu) {
        ctx->pc = 0x1EC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC258u;
        // 0x1ec25c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC260u;
        goto label_fallthrough_0x1ec258;
    }
    ctx->pc = 0x1EC258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC258u;
        // 0x1ec25c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ec258:
    ctx->pc = 0x1EC260u;
}
