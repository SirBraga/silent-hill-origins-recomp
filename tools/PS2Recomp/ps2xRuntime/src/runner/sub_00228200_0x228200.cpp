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

// Function: sub_00228200
// Address: 0x228200 - 0x2282c0
void sub_00228200_0x228200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228200_0x228200");
#endif

    switch (ctx->pc) {
        case 0x228200u: goto label_228200;
        case 0x228204u: goto label_228204;
        case 0x228208u: goto label_228208;
        case 0x22820cu: goto label_22820c;
        case 0x228210u: goto label_228210;
        case 0x228214u: goto label_228214;
        case 0x228218u: goto label_228218;
        case 0x22821cu: goto label_22821c;
        case 0x228220u: goto label_228220;
        case 0x228224u: goto label_228224;
        case 0x228228u: goto label_228228;
        case 0x22822cu: goto label_22822c;
        case 0x228230u: goto label_228230;
        case 0x228234u: goto label_228234;
        case 0x228238u: goto label_228238;
        case 0x22823cu: goto label_22823c;
        case 0x228240u: goto label_228240;
        case 0x228244u: goto label_228244;
        case 0x228248u: goto label_228248;
        case 0x22824cu: goto label_22824c;
        case 0x228250u: goto label_228250;
        case 0x228254u: goto label_228254;
        case 0x228258u: goto label_228258;
        case 0x22825cu: goto label_22825c;
        case 0x228260u: goto label_228260;
        case 0x228264u: goto label_228264;
        case 0x228268u: goto label_228268;
        case 0x22826cu: goto label_22826c;
        case 0x228270u: goto label_228270;
        case 0x228274u: goto label_228274;
        case 0x228278u: goto label_228278;
        case 0x22827cu: goto label_22827c;
        case 0x228280u: goto label_228280;
        case 0x228284u: goto label_228284;
        case 0x228288u: goto label_228288;
        case 0x22828cu: goto label_22828c;
        case 0x228290u: goto label_228290;
        case 0x228294u: goto label_228294;
        case 0x228298u: goto label_228298;
        case 0x22829cu: goto label_22829c;
        case 0x2282a0u: goto label_2282a0;
        case 0x2282a4u: goto label_2282a4;
        case 0x2282a8u: goto label_2282a8;
        case 0x2282acu: goto label_2282ac;
        case 0x2282b0u: goto label_2282b0;
        case 0x2282b4u: goto label_2282b4;
        case 0x2282b8u: goto label_2282b8;
        case 0x2282bcu: goto label_2282bc;
        default: break;
    }

    ctx->pc = 0x228200u;

label_228200:
    // 0x228200: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x228200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_228204:
    // 0x228204: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x228204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_228208:
    // 0x228208: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x228208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_22820c:
    // 0x22820c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x22820cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_228210:
    // 0x228210: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x228210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_228214:
    // 0x228214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_228218:
    // 0x228218: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x228218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_22821c:
    // 0x22821c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x22821cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_228220:
    // 0x228220: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x228220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_228224:
    // 0x228224: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x228224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_228228:
    // 0x228228: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x228228u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22822c:
    // 0x22822c: 0x8c621034  lw          $v0, 0x1034($v1)
    ctx->pc = 0x22822cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4148)));
label_228230:
    // 0x228230: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x228230u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_228234:
    // 0x228234: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x228234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_228238:
    // 0x228238: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x228238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_22823c:
    // 0x22823c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22823cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_228240:
    // 0x228240: 0x40f809  jalr        $v0
label_228244:
    if (ctx->pc == 0x228244u) {
        ctx->pc = 0x228244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228240u;
        // 0x228244: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228248u;
        goto label_228248;
    }
    ctx->pc = 0x228240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228248u);
        ctx->pc = 0x228244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228240u;
        // 0x228244: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228240u, 0x228248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228248u;
label_228248:
    // 0x228248: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_22824c:
    if (ctx->pc == 0x22824Cu) {
        ctx->pc = 0x22824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228248u;
        // 0x22824c: 0x93a30023  lbu         $v1, 0x23($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228250u;
        goto label_228250;
    }
    ctx->pc = 0x228248u;
    {
        const bool branch_taken_0x228248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228248u;
        // 0x22824c: 0x93a30023  lbu         $v1, 0x23($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228248) {
            ctx->pc = 0x228280u;
            goto label_228280;
        }
    }
    ctx->pc = 0x228250u;
label_228250:
    // 0x228250: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x228250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_228254:
    // 0x228254: 0x93a40020  lbu         $a0, 0x20($sp)
    ctx->pc = 0x228254u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_228258:
    // 0x228258: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x228258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_22825c:
    // 0x22825c: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x22825cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_228260:
    // 0x228260: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x228260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_228264:
    // 0x228264: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x228264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_228268:
    // 0x228268: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x228268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_22826c:
    // 0x22826c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x22826cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_228270:
    // 0x228270: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x228270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_228274:
    // 0x228274: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x228274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
label_228278:
    // 0x228278: 0x10000002  b           . + 4 + (0x2 << 2)
label_22827c:
    if (ctx->pc == 0x22827Cu) {
        ctx->pc = 0x22827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228278u;
        // 0x22827c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228280u;
        goto label_228280;
    }
    ctx->pc = 0x228278u;
    {
        const bool branch_taken_0x228278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228278u;
        // 0x22827c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228278) {
            ctx->pc = 0x228284u;
            goto label_228284;
        }
    }
    ctx->pc = 0x228280u;
label_228280:
    // 0x228280: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x228280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228284:
    // 0x228284: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x228284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_228288:
    // 0x228288: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x228288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_22828c:
    // 0x22828c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x22828cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_228290:
    // 0x228290: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x228290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_228294:
    // 0x228294: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x228294u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_228298:
    // 0x228298: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x228298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22829c:
    // 0x22829c: 0x3e00008  jr          $ra
label_2282a0:
    if (ctx->pc == 0x2282A0u) {
        ctx->pc = 0x2282A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22829Cu;
        // 0x2282a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2282A4u;
        goto label_2282a4;
    }
    ctx->pc = 0x22829Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2282A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22829Cu;
        // 0x2282a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22829Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2282A4u;
label_2282a4:
    // 0x2282a4: 0x0  nop
    ctx->pc = 0x2282a4u;
    // NOP
label_2282a8:
    // 0x2282a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2282a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2282ac:
    // 0x2282ac: 0x0  nop
    ctx->pc = 0x2282acu;
    // NOP
label_2282b0:
    // 0x2282b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2282b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2282b4:
    // 0x2282b4: 0x0  nop
    ctx->pc = 0x2282b4u;
    // NOP
label_2282b8:
    // 0x2282b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2282b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2282bc:
    // 0x2282bc: 0x0  nop
    ctx->pc = 0x2282bcu;
    // NOP
    ctx->pc = 0x2282c0u;
}
