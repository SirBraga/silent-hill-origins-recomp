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

// Function: sub_00220178
// Address: 0x220178 - 0x220220
void sub_00220178_0x220178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220178_0x220178");
#endif

    switch (ctx->pc) {
        case 0x220178u: goto label_220178;
        case 0x22017cu: goto label_22017c;
        case 0x220180u: goto label_220180;
        case 0x220184u: goto label_220184;
        case 0x220188u: goto label_220188;
        case 0x22018cu: goto label_22018c;
        case 0x220190u: goto label_220190;
        case 0x220194u: goto label_220194;
        case 0x220198u: goto label_220198;
        case 0x22019cu: goto label_22019c;
        case 0x2201a0u: goto label_2201a0;
        case 0x2201a4u: goto label_2201a4;
        case 0x2201a8u: goto label_2201a8;
        case 0x2201acu: goto label_2201ac;
        case 0x2201b0u: goto label_2201b0;
        case 0x2201b4u: goto label_2201b4;
        case 0x2201b8u: goto label_2201b8;
        case 0x2201bcu: goto label_2201bc;
        case 0x2201c0u: goto label_2201c0;
        case 0x2201c4u: goto label_2201c4;
        case 0x2201c8u: goto label_2201c8;
        case 0x2201ccu: goto label_2201cc;
        case 0x2201d0u: goto label_2201d0;
        case 0x2201d4u: goto label_2201d4;
        case 0x2201d8u: goto label_2201d8;
        case 0x2201dcu: goto label_2201dc;
        case 0x2201e0u: goto label_2201e0;
        case 0x2201e4u: goto label_2201e4;
        case 0x2201e8u: goto label_2201e8;
        case 0x2201ecu: goto label_2201ec;
        case 0x2201f0u: goto label_2201f0;
        case 0x2201f4u: goto label_2201f4;
        case 0x2201f8u: goto label_2201f8;
        case 0x2201fcu: goto label_2201fc;
        case 0x220200u: goto label_220200;
        case 0x220204u: goto label_220204;
        case 0x220208u: goto label_220208;
        case 0x22020cu: goto label_22020c;
        case 0x220210u: goto label_220210;
        case 0x220214u: goto label_220214;
        case 0x220218u: goto label_220218;
        case 0x22021cu: goto label_22021c;
        default: break;
    }

    ctx->pc = 0x220178u;

label_220178:
    // 0x220178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22017c:
    // 0x22017c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x22017cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_220180:
    // 0x220180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x220180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_220184:
    // 0x220184: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x220184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_220188:
    // 0x220188: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_22018c:
    if (ctx->pc == 0x22018Cu) {
        ctx->pc = 0x22018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220188u;
        // 0x22018c: 0x8cd001a8  lw          $s0, 0x1A8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220190u;
        goto label_220190;
    }
    ctx->pc = 0x220188u;
    {
        const bool branch_taken_0x220188 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220188u;
        // 0x22018c: 0x8cd001a8  lw          $s0, 0x1A8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220188) {
            ctx->pc = 0x2201A4u;
            goto label_2201a4;
        }
    }
    ctx->pc = 0x220190u;
label_220190:
    // 0x220190: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x220190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220194:
    // 0x220194: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
label_220198:
    if (ctx->pc == 0x220198u) {
        ctx->pc = 0x220198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220194u;
        // 0x220198: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22019Cu;
        goto label_22019c;
    }
    ctx->pc = 0x220194u;
    {
        const bool branch_taken_0x220194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x220198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220194u;
        // 0x220198: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220194) {
            ctx->pc = 0x2201ECu;
            goto label_2201ec;
        }
    }
    ctx->pc = 0x22019Cu;
label_22019c:
    // 0x22019c: 0x10000016  b           . + 4 + (0x16 << 2)
label_2201a0:
    if (ctx->pc == 0x2201A0u) {
        ctx->pc = 0x2201A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22019Cu;
        // 0x2201a0: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201A4u;
        goto label_2201a4;
    }
    ctx->pc = 0x22019Cu;
    {
        const bool branch_taken_0x22019c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2201A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22019Cu;
        // 0x2201a0: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22019c) {
            ctx->pc = 0x2201F8u;
            goto label_2201f8;
        }
    }
    ctx->pc = 0x2201A4u;
label_2201a4:
    // 0x2201a4: 0x8cc201c4  lw          $v0, 0x1C4($a2)
    ctx->pc = 0x2201a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 452)));
label_2201a8:
    // 0x2201a8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2201a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2201ac:
    // 0x2201ac: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2201b0:
    if (ctx->pc == 0x2201B0u) {
        ctx->pc = 0x2201B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201ACu;
        // 0x2201b0: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201B4u;
        goto label_2201b4;
    }
    ctx->pc = 0x2201ACu;
    {
        const bool branch_taken_0x2201ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2201B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201ACu;
        // 0x2201b0: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201ac) {
            ctx->pc = 0x2201D4u;
            goto label_2201d4;
        }
    }
    ctx->pc = 0x2201B4u;
label_2201b4:
    // 0x2201b4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2201b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2201b8:
    // 0x2201b8: 0x2442fca8  addiu       $v0, $v0, -0x358
    ctx->pc = 0x2201b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966440));
label_2201bc:
    // 0x2201bc: 0xc087e82  jal         func_21FA08
label_2201c0:
    if (ctx->pc == 0x2201C0u) {
        ctx->pc = 0x2201C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201BCu;
        // 0x2201c0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201C4u;
        goto label_2201c4;
    }
    ctx->pc = 0x2201BCu;
    SET_GPR_U32(ctx, 31, 0x2201C4u);
    ctx->pc = 0x2201C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201BCu;
    // 0x2201c0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FA08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21FA08u, 0x2201BCu, 0x2201C4u)) {
        return;
    }
    ctx->pc = 0x2201C4u;
label_2201c4:
    // 0x2201c4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2201c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_2201c8:
    // 0x2201c8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2201c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_2201cc:
    // 0x2201cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2201d0:
    if (ctx->pc == 0x2201D0u) {
        ctx->pc = 0x2201D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201CCu;
        // 0x2201d0: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201D4u;
        goto label_2201d4;
    }
    ctx->pc = 0x2201CCu;
    {
        const bool branch_taken_0x2201cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2201D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201CCu;
        // 0x2201d0: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201cc) {
            ctx->pc = 0x2201E0u;
            goto label_2201e0;
        }
    }
    ctx->pc = 0x2201D4u;
label_2201d4:
    // 0x2201d4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2201d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_2201d8:
    // 0x2201d8: 0x24420220  addiu       $v0, $v0, 0x220
    ctx->pc = 0x2201d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_2201dc:
    // 0x2201dc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2201dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2201e0:
    // 0x2201e0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2201e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_2201e4:
    // 0x2201e4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2201e8:
    if (ctx->pc == 0x2201E8u) {
        ctx->pc = 0x2201E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201E4u;
        // 0x2201e8: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201ECu;
        goto label_2201ec;
    }
    ctx->pc = 0x2201E4u;
    {
        const bool branch_taken_0x2201e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2201E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201E4u;
        // 0x2201e8: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201e4) {
            ctx->pc = 0x220210u;
            goto label_220210;
        }
    }
    ctx->pc = 0x2201ECu;
label_2201ec:
    // 0x2201ec: 0x244202d8  addiu       $v0, $v0, 0x2D8
    ctx->pc = 0x2201ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
label_2201f0:
    // 0x2201f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2201f4:
    if (ctx->pc == 0x2201F4u) {
        ctx->pc = 0x2201F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201F0u;
        // 0x2201f4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2201F8u;
        goto label_2201f8;
    }
    ctx->pc = 0x2201F0u;
    {
        const bool branch_taken_0x2201f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2201F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201F0u;
        // 0x2201f4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201f0) {
            ctx->pc = 0x220210u;
            goto label_220210;
        }
    }
    ctx->pc = 0x2201F8u;
label_2201f8:
    // 0x2201f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2201f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2201fc:
    // 0x2201fc: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2201fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_220200:
    // 0x220200: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x220200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_220204:
    // 0x220204: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x220204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_220208:
    // 0x220208: 0x60f809  jalr        $v1
label_22020c:
    if (ctx->pc == 0x22020Cu) {
        ctx->pc = 0x22020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220208u;
        // 0x22020c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220210u;
        goto label_220210;
    }
    ctx->pc = 0x220208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x220210u);
        ctx->pc = 0x22020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220208u;
        // 0x22020c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220208u, 0x220210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x220210u;
label_220210:
    // 0x220210: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x220210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_220214:
    // 0x220214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x220214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_220218:
    // 0x220218: 0x3e00008  jr          $ra
label_22021c:
    if (ctx->pc == 0x22021Cu) {
        ctx->pc = 0x22021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220218u;
        // 0x22021c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220220u;
        goto label_fallthrough_0x220218;
    }
    ctx->pc = 0x220218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220218u;
        // 0x22021c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x220218:
    ctx->pc = 0x220220u;
}
