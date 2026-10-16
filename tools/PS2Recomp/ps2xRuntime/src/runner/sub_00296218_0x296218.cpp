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

// Function: sub_00296218
// Address: 0x296218 - 0x296370
void sub_00296218_0x296218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296218_0x296218");
#endif

    switch (ctx->pc) {
        case 0x296238u: goto label_296238;
        case 0x296244u: goto label_296244;
        case 0x296270u: goto label_296270;
        case 0x296288u: goto label_296288;
        case 0x29629cu: goto label_29629c;
        case 0x2962acu: goto label_2962ac;
        case 0x2962c0u: goto label_2962c0;
        case 0x2962c8u: goto label_2962c8;
        case 0x2962e8u: goto label_2962e8;
        case 0x2962fcu: goto label_2962fc;
        case 0x296320u: goto label_296320;
        case 0x296328u: goto label_296328;
        default: break;
    }

    ctx->pc = 0x296218u;

    // 0x296218: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x296218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29621c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29621cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x296220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296224: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x296224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296228: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x296228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29622c: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x29622cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x296230: 0xc0a5728  jal         func_295CA0
    ctx->pc = 0x296230u;
    SET_GPR_U32(ctx, 31, 0x296238u);
    ctx->pc = 0x296234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296230u;
    // 0x296234: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x295CA0u, 0x296230u, 0x296238u)) {
        return;
    }
    ctx->pc = 0x296238u;
label_296238:
    // 0x296238: 0x8e04e7e8  lw          $a0, -0x1818($s0)
    ctx->pc = 0x296238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961128)));
    // 0x29623c: 0xc0c84dc  jal         func_321370
    ctx->pc = 0x29623Cu;
    SET_GPR_U32(ctx, 31, 0x296244u);
    ctx->pc = 0x321370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321370u, 0x29623Cu, 0x296244u)) {
        return;
    }
    ctx->pc = 0x296244u;
label_296244:
    // 0x296244: 0x8e03e7e8  lw          $v1, -0x1818($s0)
    ctx->pc = 0x296244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961128)));
    // 0x296248: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x296248u;
    {
        const bool branch_taken_0x296248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296248u;
        // 0x29624c: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296248) {
            ctx->pc = 0x296278u;
            goto label_296278;
        }
    }
    ctx->pc = 0x296250u;
    // 0x296250: 0x8c43e7d0  lw          $v1, -0x1830($v0)
    ctx->pc = 0x296250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961104)));
    // 0x296254: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x296254u;
    {
        const bool branch_taken_0x296254 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x296258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296254u;
        // 0x296258: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296254) {
            ctx->pc = 0x29629Cu;
            goto label_29629c;
        }
    }
    ctx->pc = 0x29625Cu;
    // 0x29625c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x29625cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x296260: 0x8c46e7dc  lw          $a2, -0x1824($v0)
    ctx->pc = 0x296260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961116)));
    // 0x296264: 0x2484d4e8  addiu       $a0, $a0, -0x2B18
    ctx->pc = 0x296264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956264));
    // 0x296268: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x296268u;
    SET_GPR_U32(ctx, 31, 0x296270u);
    ctx->pc = 0x29626Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296268u;
    // 0x29626c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x296268u, 0x296270u)) {
        return;
    }
    ctx->pc = 0x296270u;
label_296270:
    // 0x296270: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x296270u;
    {
        const bool branch_taken_0x296270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296270u;
        // 0x296274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296270) {
            ctx->pc = 0x296358u;
            goto label_296358;
        }
    }
    ctx->pc = 0x296278u;
label_296278:
    // 0x296278: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x296278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x29627c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29627cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296280: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x296280u;
    SET_GPR_U32(ctx, 31, 0x296288u);
    ctx->pc = 0x296284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296280u;
    // 0x296284: 0xac51e7dc  sw          $s1, -0x1824($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961116), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x296370u, 0x296280u, 0x296288u)) {
        return;
    }
    ctx->pc = 0x296288u;
label_296288:
    // 0x296288: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x296288u;
    {
        const bool branch_taken_0x296288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296288u;
        // 0x29628c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296288) {
            ctx->pc = 0x2962A4u;
            goto label_2962a4;
        }
    }
    ctx->pc = 0x296290u;
    // 0x296290: 0x8e04e7e8  lw          $a0, -0x1818($s0)
    ctx->pc = 0x296290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961128)));
    // 0x296294: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x296294u;
    SET_GPR_U32(ctx, 31, 0x29629Cu);
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x296294u, 0x29629Cu)) {
        return;
    }
    ctx->pc = 0x29629Cu;
label_29629c:
    // 0x29629c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x29629Cu;
    {
        const bool branch_taken_0x29629c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2962A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29629Cu;
        // 0x2962a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29629c) {
            ctx->pc = 0x296358u;
            goto label_296358;
        }
    }
    ctx->pc = 0x2962A4u;
label_2962a4:
    // 0x2962a4: 0xc0c90e4  jal         func_324390
    ctx->pc = 0x2962A4u;
    SET_GPR_U32(ctx, 31, 0x2962ACu);
    ctx->pc = 0x2962A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2962A4u;
    // 0x2962a8: 0x3c120068  lui         $s2, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)104 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324390u, 0x2962A4u, 0x2962ACu)) {
        return;
    }
    ctx->pc = 0x2962ACu;
label_2962ac:
    // 0x2962ac: 0x8e42e7fc  lw          $v0, -0x1804($s2)
    ctx->pc = 0x2962acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294961148)));
    // 0x2962b0: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2962B0u;
    {
        const bool branch_taken_0x2962b0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2962B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2962B0u;
        // 0x2962b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2962b0) {
            ctx->pc = 0x296358u;
            goto label_296358;
        }
    }
    ctx->pc = 0x2962B8u;
    // 0x2962b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2962B8u;
    {
        const bool branch_taken_0x2962b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2962BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2962B8u;
        // 0x2962bc: 0x3c110068  lui         $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2962b8) {
            ctx->pc = 0x2962E4u;
            goto label_2962e4;
        }
    }
    ctx->pc = 0x2962C0u;
label_2962c0:
    // 0x2962c0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2962c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2962c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2962c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2962c8:
    // 0x2962c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2962c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2962cc: 0x0  nop
    ctx->pc = 0x2962ccu;
    // NOP
    // 0x2962d0: 0x0  nop
    ctx->pc = 0x2962d0u;
    // NOP
    // 0x2962d4: 0x0  nop
    ctx->pc = 0x2962d4u;
    // NOP
    // 0x2962d8: 0x0  nop
    ctx->pc = 0x2962d8u;
    // NOP
    // 0x2962dc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2962DCu;
    {
        const bool branch_taken_0x2962dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2962dc) {
            ctx->pc = 0x2962C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2962c8;
        }
    }
    ctx->pc = 0x2962E4u;
label_2962e4:
    // 0x2962e4: 0x2630f990  addiu       $s0, $s1, -0x670
    ctx->pc = 0x2962e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965648));
label_2962e8:
    // 0x2962e8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2962e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2962ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2962ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962f0: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x2962f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
    // 0x2962f4: 0xc0c9276  jal         func_3249D8
    ctx->pc = 0x2962F4u;
    SET_GPR_U32(ctx, 31, 0x2962FCu);
    ctx->pc = 0x2962F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2962F4u;
    // 0x2962f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3249D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3249D8u, 0x2962F4u, 0x2962FCu)) {
        return;
    }
    ctx->pc = 0x2962FCu;
label_2962fc:
    // 0x2962fc: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2962FCu;
    {
        const bool branch_taken_0x2962fc = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2962fc) {
            ctx->pc = 0x296300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2962FCu;
            // 0x296300: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29634Cu;
            goto label_29634c;
        }
    }
    ctx->pc = 0x296304u;
    // 0x296304: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x296304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x296308: 0x8c43e7d0  lw          $v1, -0x1830($v0)
    ctx->pc = 0x296308u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x67E7D0u));
    // 0x29630c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29630Cu;
    {
        const bool branch_taken_0x29630c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x296310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29630Cu;
        // 0x296310: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29630c) {
            ctx->pc = 0x296324u;
            goto label_296324;
        }
    }
    ctx->pc = 0x296314u;
    // 0x296314: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x296314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x296318: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x296318u;
    SET_GPR_U32(ctx, 31, 0x296320u);
    ctx->pc = 0x29631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296318u;
    // 0x29631c: 0x2484d510  addiu       $a0, $a0, -0x2AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x296318u, 0x296320u)) {
        return;
    }
    ctx->pc = 0x296320u;
label_296320:
    // 0x296320: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x296320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_296324:
    // 0x296324: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x296324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_296328:
    // 0x296328: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x296328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29632c: 0x0  nop
    ctx->pc = 0x29632cu;
    // NOP
    // 0x296330: 0x0  nop
    ctx->pc = 0x296330u;
    // NOP
    // 0x296334: 0x0  nop
    ctx->pc = 0x296334u;
    // NOP
    // 0x296338: 0x0  nop
    ctx->pc = 0x296338u;
    // NOP
    // 0x29633c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29633Cu;
    {
        const bool branch_taken_0x29633c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29633c) {
            ctx->pc = 0x296328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296328;
        }
    }
    ctx->pc = 0x296344u;
    // 0x296344: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x296344u;
    {
        const bool branch_taken_0x296344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296344u;
        // 0x296348: 0x2630f990  addiu       $s0, $s1, -0x670 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296344) {
            ctx->pc = 0x2962E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2962e8;
        }
    }
    ctx->pc = 0x29634Cu;
label_29634c:
    // 0x29634c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x29634Cu;
    {
        const bool branch_taken_0x29634c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29634Cu;
        // 0x296350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29634c) {
            ctx->pc = 0x2962C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2962c0;
        }
    }
    ctx->pc = 0x296354u;
    // 0x296354: 0xae40e7fc  sw          $zero, -0x1804($s2)
    ctx->pc = 0x296354u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294961148), GPR_U32(ctx, 0));
label_296358:
    // 0x296358: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x296358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29635c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29635cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296360: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x296360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296368: 0x3e00008  jr          $ra
    ctx->pc = 0x296368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296368u;
        // 0x29636c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296370u;
}
