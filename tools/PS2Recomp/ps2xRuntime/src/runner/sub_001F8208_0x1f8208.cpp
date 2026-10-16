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

// Function: sub_001F8208
// Address: 0x1f8208 - 0x1f830c
void sub_001F8208_0x1f8208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8208_0x1f8208");
#endif

    switch (ctx->pc) {
        case 0x1f8208u: goto label_1f8208;
        case 0x1f820cu: goto label_1f820c;
        case 0x1f8210u: goto label_1f8210;
        case 0x1f8214u: goto label_1f8214;
        case 0x1f8218u: goto label_1f8218;
        case 0x1f821cu: goto label_1f821c;
        case 0x1f8220u: goto label_1f8220;
        case 0x1f8224u: goto label_1f8224;
        case 0x1f8228u: goto label_1f8228;
        case 0x1f822cu: goto label_1f822c;
        case 0x1f8230u: goto label_1f8230;
        case 0x1f8234u: goto label_1f8234;
        case 0x1f8238u: goto label_1f8238;
        case 0x1f823cu: goto label_1f823c;
        case 0x1f8240u: goto label_1f8240;
        case 0x1f8244u: goto label_1f8244;
        case 0x1f8248u: goto label_1f8248;
        case 0x1f824cu: goto label_1f824c;
        case 0x1f8250u: goto label_1f8250;
        case 0x1f8254u: goto label_1f8254;
        case 0x1f8258u: goto label_1f8258;
        case 0x1f825cu: goto label_1f825c;
        case 0x1f8260u: goto label_1f8260;
        case 0x1f8264u: goto label_1f8264;
        case 0x1f8268u: goto label_1f8268;
        case 0x1f826cu: goto label_1f826c;
        case 0x1f8270u: goto label_1f8270;
        case 0x1f8274u: goto label_1f8274;
        case 0x1f8278u: goto label_1f8278;
        case 0x1f827cu: goto label_1f827c;
        case 0x1f8280u: goto label_1f8280;
        case 0x1f8284u: goto label_1f8284;
        case 0x1f8288u: goto label_1f8288;
        case 0x1f828cu: goto label_1f828c;
        case 0x1f8290u: goto label_1f8290;
        case 0x1f8294u: goto label_1f8294;
        case 0x1f8298u: goto label_1f8298;
        case 0x1f829cu: goto label_1f829c;
        case 0x1f82a0u: goto label_1f82a0;
        case 0x1f82a4u: goto label_1f82a4;
        case 0x1f82a8u: goto label_1f82a8;
        case 0x1f82acu: goto label_1f82ac;
        case 0x1f82b0u: goto label_1f82b0;
        case 0x1f82b4u: goto label_1f82b4;
        case 0x1f82b8u: goto label_1f82b8;
        case 0x1f82bcu: goto label_1f82bc;
        case 0x1f82c0u: goto label_1f82c0;
        case 0x1f82c4u: goto label_1f82c4;
        case 0x1f82c8u: goto label_1f82c8;
        case 0x1f82ccu: goto label_1f82cc;
        case 0x1f82d0u: goto label_1f82d0;
        case 0x1f82d4u: goto label_1f82d4;
        case 0x1f82d8u: goto label_1f82d8;
        case 0x1f82dcu: goto label_1f82dc;
        case 0x1f82e0u: goto label_1f82e0;
        case 0x1f82e4u: goto label_1f82e4;
        case 0x1f82e8u: goto label_1f82e8;
        case 0x1f82ecu: goto label_1f82ec;
        case 0x1f82f0u: goto label_1f82f0;
        case 0x1f82f4u: goto label_1f82f4;
        case 0x1f82f8u: goto label_1f82f8;
        case 0x1f82fcu: goto label_1f82fc;
        case 0x1f8300u: goto label_1f8300;
        case 0x1f8304u: goto label_1f8304;
        case 0x1f8308u: goto label_1f8308;
        default: break;
    }

    ctx->pc = 0x1f8208u;

label_1f8208:
    // 0x1f8208: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f8208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f820c:
    // 0x1f820c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1f820cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_1f8210:
    // 0x1f8210: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1f8210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8214:
    // 0x1f8214: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f8214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f8218:
    // 0x1f8218: 0x84880b  movn        $s1, $a0, $a0
    ctx->pc = 0x1f8218u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4));
label_1f821c:
    // 0x1f821c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1f821cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1f8220:
    // 0x1f8220: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f8220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1f8224:
    // 0x1f8224: 0xc0c5472  jal         func_3151C8
label_1f8228:
    if (ctx->pc == 0x1F8228u) {
        ctx->pc = 0x1F8228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8224u;
        // 0x1f8228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F822Cu;
        goto label_1f822c;
    }
    ctx->pc = 0x1F8224u;
    SET_GPR_U32(ctx, 31, 0x1F822Cu);
    ctx->pc = 0x1F8228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8224u;
    // 0x1f8228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x1F8224u, 0x1F822Cu)) {
        return;
    }
    ctx->pc = 0x1F822Cu;
label_1f822c:
    // 0x1f822c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_1f8230:
    if (ctx->pc == 0x1F8230u) {
        ctx->pc = 0x1F8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F822Cu;
        // 0x1f8230: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8234u;
        goto label_1f8234;
    }
    ctx->pc = 0x1F822Cu;
    {
        const bool branch_taken_0x1f822c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F822Cu;
        // 0x1f8230: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f822c) {
            ctx->pc = 0x1F831Cu;
            return;
        }
    }
    ctx->pc = 0x1F8234u;
label_1f8234:
    // 0x1f8234: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x1f8234u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
label_1f8238:
    // 0x1f8238: 0x8e02f5dc  lw          $v0, -0xA24($s0)
    ctx->pc = 0x1f8238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294964700)));
label_1f823c:
    // 0x1f823c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1f8240:
    if (ctx->pc == 0x1F8240u) {
        ctx->pc = 0x1F8240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F823Cu;
        // 0x1f8240: 0x3c12006a  lui         $s2, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8244u;
        goto label_1f8244;
    }
    ctx->pc = 0x1F823Cu;
    {
        const bool branch_taken_0x1f823c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F823Cu;
        // 0x1f8240: 0x3c12006a  lui         $s2, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f823c) {
            ctx->pc = 0x1F82A0u;
            goto label_1f82a0;
        }
    }
    ctx->pc = 0x1F8244u;
label_1f8244:
    // 0x1f8244: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f8244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f8248:
    // 0x1f8248: 0x24512e18  addiu       $s1, $v0, 0x2E18
    ctx->pc = 0x1f8248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 11800));
label_1f824c:
    // 0x1f824c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f824cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f8250:
    // 0x1f8250: 0xc07e534  jal         func_1F94D0
label_1f8254:
    if (ctx->pc == 0x1F8254u) {
        ctx->pc = 0x1F8254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8250u;
        // 0x1f8254: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8258u;
        goto label_1f8258;
    }
    ctx->pc = 0x1F8250u;
    SET_GPR_U32(ctx, 31, 0x1F8258u);
    ctx->pc = 0x1F8254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8250u;
    // 0x1f8254: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F94D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F94D0u, 0x1F8250u, 0x1F8258u)) {
        return;
    }
    ctx->pc = 0x1F8258u;
label_1f8258:
    // 0x1f8258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f825c:
    // 0x1f825c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f8260:
    if (ctx->pc == 0x1F8260u) {
        ctx->pc = 0x1F8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F825Cu;
        // 0x1f8260: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8264u;
        goto label_1f8264;
    }
    ctx->pc = 0x1F825Cu;
    {
        const bool branch_taken_0x1f825c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F825Cu;
        // 0x1f8260: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f825c) {
            ctx->pc = 0x1F826Cu;
            goto label_1f826c;
        }
    }
    ctx->pc = 0x1F8264u;
label_1f8264:
    // 0x1f8264: 0xc07e3f2  jal         func_1F8FC8
label_1f8268:
    if (ctx->pc == 0x1F8268u) {
        ctx->pc = 0x1F826Cu;
        goto label_1f826c;
    }
    ctx->pc = 0x1F8264u;
    SET_GPR_U32(ctx, 31, 0x1F826Cu);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F8264u, 0x1F826Cu)) {
        return;
    }
    ctx->pc = 0x1F826Cu;
label_1f826c:
    // 0x1f826c: 0x26422cf8  addiu       $v0, $s2, 0x2CF8
    ctx->pc = 0x1f826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 11512));
label_1f8270:
    // 0x1f8270: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f8270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1f8274:
    // 0x1f8274: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f8274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f8278:
    // 0x1f8278: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f8278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f827c:
    // 0x1f827c: 0x40f809  jalr        $v0
label_1f8280:
    if (ctx->pc == 0x1F8280u) {
        ctx->pc = 0x1F8284u;
        goto label_1f8284;
    }
    ctx->pc = 0x1F827Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F8284u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F827Cu, 0x1F8284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8284u;
label_1f8284:
    // 0x1f8284: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1f8284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
label_1f8288:
    // 0x1f8288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f828c:
    // 0x1f828c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f828cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f8290:
    // 0x1f8290: 0xc07e562  jal         func_1F9588
label_1f8294:
    if (ctx->pc == 0x1F8294u) {
        ctx->pc = 0x1F8294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8290u;
        // 0x1f8294: 0x24c6ab50  addiu       $a2, $a2, -0x54B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8298u;
        goto label_1f8298;
    }
    ctx->pc = 0x1F8290u;
    SET_GPR_U32(ctx, 31, 0x1F8298u);
    ctx->pc = 0x1F8294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8290u;
    // 0x1f8294: 0x24c6ab50  addiu       $a2, $a2, -0x54B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9588u, 0x1F8290u, 0x1F8298u)) {
        return;
    }
    ctx->pc = 0x1F8298u;
label_1f8298:
    // 0x1f8298: 0xc07e3f2  jal         func_1F8FC8
label_1f829c:
    if (ctx->pc == 0x1F829Cu) {
        ctx->pc = 0x1F82A0u;
        goto label_1f82a0;
    }
    ctx->pc = 0x1F8298u;
    SET_GPR_U32(ctx, 31, 0x1F82A0u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F8298u, 0x1F82A0u)) {
        return;
    }
    ctx->pc = 0x1F82A0u;
label_1f82a0:
    // 0x1f82a0: 0x40f809  jalr        $v0
label_1f82a4:
    if (ctx->pc == 0x1F82A4u) {
        ctx->pc = 0x1F82A8u;
        goto label_1f82a8;
    }
    ctx->pc = 0x1F82A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F82A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F82A0u, 0x1F82A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F82A8u;
label_1f82a8:
    // 0x1f82a8: 0xc0c5472  jal         func_3151C8
label_1f82ac:
    if (ctx->pc == 0x1F82ACu) {
        ctx->pc = 0x1F82ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82A8u;
        // 0x1f82ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F82B0u;
        goto label_1f82b0;
    }
    ctx->pc = 0x1F82A8u;
    SET_GPR_U32(ctx, 31, 0x1F82B0u);
    ctx->pc = 0x1F82ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F82A8u;
    // 0x1f82ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x1F82A8u, 0x1F82B0u)) {
        return;
    }
    ctx->pc = 0x1F82B0u;
label_1f82b0:
    // 0x1f82b0: 0x1040ffe1  beqz        $v0, . + 4 + (-0x1F << 2)
label_1f82b4:
    if (ctx->pc == 0x1F82B4u) {
        ctx->pc = 0x1F82B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82B0u;
        // 0x1f82b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F82B8u;
        goto label_1f82b8;
    }
    ctx->pc = 0x1F82B0u;
    {
        const bool branch_taken_0x1f82b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F82B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82B0u;
        // 0x1f82b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f82b0) {
            ctx->pc = 0x1F8238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8238;
        }
    }
    ctx->pc = 0x1F82B8u;
label_1f82b8:
    // 0x1f82b8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1f82bc:
    if (ctx->pc == 0x1F82BCu) {
        ctx->pc = 0x1F82BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82B8u;
        // 0x1f82bc: 0xdfb20040  ld          $s2, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F82C0u;
        goto label_1f82c0;
    }
    ctx->pc = 0x1F82B8u;
    {
        const bool branch_taken_0x1f82b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F82BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82B8u;
        // 0x1f82bc: 0xdfb20040  ld          $s2, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f82b8) {
            ctx->pc = 0x1F8320u;
            return;
        }
    }
    ctx->pc = 0x1F82C0u;
label_1f82c0:
    // 0x1f82c0: 0xc07e3f2  jal         func_1F8FC8
label_1f82c4:
    if (ctx->pc == 0x1F82C4u) {
        ctx->pc = 0x1F82C8u;
        goto label_1f82c8;
    }
    ctx->pc = 0x1F82C0u;
    SET_GPR_U32(ctx, 31, 0x1F82C8u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F82C0u, 0x1F82C8u)) {
        return;
    }
    ctx->pc = 0x1F82C8u;
label_1f82c8:
    // 0x1f82c8: 0x26422cf8  addiu       $v0, $s2, 0x2CF8
    ctx->pc = 0x1f82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 11512));
label_1f82cc:
    // 0x1f82cc: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
label_1f82d0:
    if (ctx->pc == 0x1F82D0u) {
        ctx->pc = 0x1F82D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82CCu;
        // 0x1f82d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F82D4u;
        goto label_1f82d4;
    }
    ctx->pc = 0x1F82CCu;
    {
        const bool branch_taken_0x1f82cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F82D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82CCu;
        // 0x1f82d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f82cc) {
            ctx->pc = 0x1F8264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8264;
        }
    }
    ctx->pc = 0x1F82D4u;
label_1f82d4:
    // 0x1f82d4: 0xc07e526  jal         func_1F9498
label_1f82d8:
    if (ctx->pc == 0x1F82D8u) {
        ctx->pc = 0x1F82DCu;
        goto label_1f82dc;
    }
    ctx->pc = 0x1F82D4u;
    SET_GPR_U32(ctx, 31, 0x1F82DCu);
    ctx->pc = 0x1F9498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9498u, 0x1F82D4u, 0x1F82DCu)) {
        return;
    }
    ctx->pc = 0x1F82DCu;
label_1f82dc:
    // 0x1f82dc: 0xc07eac0  jal         func_1FAB00
label_1f82e0:
    if (ctx->pc == 0x1F82E0u) {
        ctx->pc = 0x1F82E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82DCu;
        // 0x1f82e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F82E4u;
        goto label_1f82e4;
    }
    ctx->pc = 0x1F82DCu;
    SET_GPR_U32(ctx, 31, 0x1F82E4u);
    ctx->pc = 0x1F82E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F82DCu;
    // 0x1f82e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAB00u, 0x1F82DCu, 0x1F82E4u)) {
        return;
    }
    ctx->pc = 0x1F82E4u;
label_1f82e4:
    // 0x1f82e4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f82e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1f82e8:
    // 0x1f82e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f82e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f82ec:
    // 0x1f82ec: 0xc07e5c4  jal         func_1F9710
label_1f82f0:
    if (ctx->pc == 0x1F82F0u) {
        ctx->pc = 0x1F82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82ECu;
        // 0x1f82f0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F82F4u;
        goto label_1f82f4;
    }
    ctx->pc = 0x1F82ECu;
    SET_GPR_U32(ctx, 31, 0x1F82F4u);
    ctx->pc = 0x1F82F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F82ECu;
    // 0x1f82f0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9710u, 0x1F82ECu, 0x1F82F4u)) {
        return;
    }
    ctx->pc = 0x1F82F4u;
label_1f82f4:
    // 0x1f82f4: 0xc07e3f2  jal         func_1F8FC8
label_1f82f8:
    if (ctx->pc == 0x1F82F8u) {
        ctx->pc = 0x1F82FCu;
        goto label_1f82fc;
    }
    ctx->pc = 0x1F82F4u;
    SET_GPR_U32(ctx, 31, 0x1F82FCu);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F82F4u, 0x1F82FCu)) {
        return;
    }
    ctx->pc = 0x1F82FCu;
label_1f82fc:
    // 0x1f82fc: 0xc07e586  jal         func_1F9618
label_1f8300:
    if (ctx->pc == 0x1F8300u) {
        ctx->pc = 0x1F8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82FCu;
        // 0x1f8300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8304u;
        goto label_1f8304;
    }
    ctx->pc = 0x1F82FCu;
    SET_GPR_U32(ctx, 31, 0x1F8304u);
    ctx->pc = 0x1F8300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F82FCu;
    // 0x1f8300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9618u, 0x1F82FCu, 0x1F8304u)) {
        return;
    }
    ctx->pc = 0x1F8304u;
label_1f8304:
    // 0x1f8304: 0x1000fffb  b           . + 4 + (-0x5 << 2)
label_1f8308:
    if (ctx->pc == 0x1F8308u) {
        ctx->pc = 0x1F830Cu;
        goto label_fallthrough_0x1f8304;
    }
    ctx->pc = 0x1F8304u;
    {
        const bool branch_taken_0x1f8304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8304) {
            ctx->pc = 0x1F82F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f82f4;
        }
    }
label_fallthrough_0x1f8304:
    ctx->pc = 0x1F830Cu;
}
