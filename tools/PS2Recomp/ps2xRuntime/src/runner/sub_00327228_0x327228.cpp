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

// Function: sub_00327228
// Address: 0x327228 - 0x327308
void sub_00327228_0x327228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327228_0x327228");
#endif

    switch (ctx->pc) {
        case 0x327240u: goto label_327240;
        case 0x327260u: goto label_327260;
        case 0x327278u: goto label_327278;
        case 0x327280u: goto label_327280;
        case 0x327288u: goto label_327288;
        case 0x327294u: goto label_327294;
        case 0x327298u: goto label_327298;
        case 0x3272a0u: goto label_3272a0;
        case 0x3272b0u: goto label_3272b0;
        case 0x3272d8u: goto label_3272d8;
        case 0x3272e0u: goto label_3272e0;
        default: break;
    }

    ctx->pc = 0x327228u;

    // 0x327228: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x327228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32722c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32722cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x327230: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x327230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x327234: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x327234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x327238: 0xc0c9c70  jal         func_3271C0
    ctx->pc = 0x327238u;
    SET_GPR_U32(ctx, 31, 0x327240u);
    ctx->pc = 0x32723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327238u;
    // 0x32723c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3271C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3271C0u, 0x327238u, 0x327240u)) {
        return;
    }
    ctx->pc = 0x327240u;
label_327240:
    // 0x327240: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x327240u;
    {
        const bool branch_taken_0x327240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327240u;
        // 0x327244: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327240) {
            ctx->pc = 0x3272BCu;
            goto label_3272bc;
        }
    }
    ctx->pc = 0x327248u;
    // 0x327248: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x327248u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32724c: 0x24507dc8  addiu       $s0, $v0, 0x7DC8
    ctx->pc = 0x32724cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32200));
    // 0x327250: 0x8c447dc8  lw          $a0, 0x7DC8($v0)
    ctx->pc = 0x327250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32200)));
    // 0x327254: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x327254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x327258: 0xc0c9c56  jal         func_327158
    ctx->pc = 0x327258u;
    SET_GPR_U32(ctx, 31, 0x327260u);
    ctx->pc = 0x32725Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327258u;
    // 0x32725c: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327158u, 0x327258u, 0x327260u)) {
        return;
    }
    ctx->pc = 0x327260u;
label_327260:
    // 0x327260: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x327260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x327264: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x327264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x327268: 0x240607a8  addiu       $a2, $zero, 0x7A8
    ctx->pc = 0x327268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
    // 0x32726c: 0x24a57620  addiu       $a1, $a1, 0x7620
    ctx->pc = 0x32726cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30240));
    // 0x327270: 0xc0c9c5a  jal         func_327168
    ctx->pc = 0x327270u;
    SET_GPR_U32(ctx, 31, 0x327278u);
    ctx->pc = 0x327274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327270u;
    // 0x327274: 0x34844000  ori         $a0, $a0, 0x4000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x327168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327168u, 0x327270u, 0x327278u)) {
        return;
    }
    ctx->pc = 0x327278u;
label_327278:
    // 0x327278: 0xc0c8568  jal         func_3215A0
    ctx->pc = 0x327278u;
    SET_GPR_U32(ctx, 31, 0x327280u);
    ctx->pc = 0x32727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327278u;
    // 0x32727c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x327278u, 0x327280u)) {
        return;
    }
    ctx->pc = 0x327280u;
label_327280:
    // 0x327280: 0xc0c8568  jal         func_3215A0
    ctx->pc = 0x327280u;
    SET_GPR_U32(ctx, 31, 0x327288u);
    ctx->pc = 0x327284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327280u;
    // 0x327284: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x327280u, 0x327288u)) {
        return;
    }
    ctx->pc = 0x327288u;
label_327288:
    // 0x327288: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x327288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32728c: 0xc0c9c56  jal         func_327158
    ctx->pc = 0x32728Cu;
    SET_GPR_U32(ctx, 31, 0x327294u);
    ctx->pc = 0x327290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32728Cu;
    // 0x327290: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327158u, 0x32728Cu, 0x327294u)) {
        return;
    }
    ctx->pc = 0x327294u;
label_327294:
    // 0x327294: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x327294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_327298:
    // 0x327298: 0xc0c9c6c  jal         func_3271B0
    ctx->pc = 0x327298u;
    SET_GPR_U32(ctx, 31, 0x3272A0u);
    ctx->pc = 0x32729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327298u;
    // 0x32729c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3271B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3271B0u, 0x327298u, 0x3272A0u)) {
        return;
    }
    ctx->pc = 0x3272A0u;
label_3272a0:
    // 0x3272a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3272a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3272a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3272a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3272a8: 0xc0c9c56  jal         func_327158
    ctx->pc = 0x3272A8u;
    SET_GPR_U32(ctx, 31, 0x3272B0u);
    ctx->pc = 0x3272ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3272A8u;
    // 0x3272ac: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327158u, 0x3272A8u, 0x3272B0u)) {
        return;
    }
    ctx->pc = 0x3272B0u;
label_3272b0:
    // 0x3272b0: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x3272b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3272b4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3272B4u;
    {
        const bool branch_taken_0x3272b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3272b4) {
            ctx->pc = 0x3272B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3272B4u;
            // 0x3272b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327298;
        }
    }
    ctx->pc = 0x3272BCu;
label_3272bc:
    // 0x3272bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3272bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3272c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3272c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3272c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3272c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3272c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3272c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3272cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3272CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3272D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3272CCu;
        // 0x3272d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3272CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3272D4u;
    // 0x3272d4: 0x0  nop
    ctx->pc = 0x3272d4u;
    // NOP
label_3272d8:
    // 0x3272d8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3272D8u;
    {
        const bool branch_taken_0x3272d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3272DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3272D8u;
        // 0x3272dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3272d8) {
            ctx->pc = 0x327300u;
            goto label_327300;
        }
    }
    ctx->pc = 0x3272E0u;
label_3272e0:
    // 0x3272e0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3272e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3272e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3272e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3272e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3272e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3272ec: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x3272ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3272f0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3272f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3272f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3272f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3272f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3272F8u;
    {
        const bool branch_taken_0x3272f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3272f8) {
            ctx->pc = 0x3272E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3272e0;
        }
    }
    ctx->pc = 0x327300u;
label_327300:
    // 0x327300: 0x3e00008  jr          $ra
    ctx->pc = 0x327300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327300u;
        // 0x327304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327308u;
}
