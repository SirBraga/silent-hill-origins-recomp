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

// Function: sub_0020F1E0
// Address: 0x20f1e0 - 0x20f2b0
void sub_0020F1E0_0x20f1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F1E0_0x20f1e0");
#endif

    switch (ctx->pc) {
        case 0x20f1e0u: goto label_20f1e0;
        case 0x20f1e4u: goto label_20f1e4;
        case 0x20f1e8u: goto label_20f1e8;
        case 0x20f1ecu: goto label_20f1ec;
        case 0x20f1f0u: goto label_20f1f0;
        case 0x20f1f4u: goto label_20f1f4;
        case 0x20f1f8u: goto label_20f1f8;
        case 0x20f1fcu: goto label_20f1fc;
        case 0x20f200u: goto label_20f200;
        case 0x20f204u: goto label_20f204;
        case 0x20f208u: goto label_20f208;
        case 0x20f20cu: goto label_20f20c;
        case 0x20f210u: goto label_20f210;
        case 0x20f214u: goto label_20f214;
        case 0x20f218u: goto label_20f218;
        case 0x20f21cu: goto label_20f21c;
        case 0x20f220u: goto label_20f220;
        case 0x20f224u: goto label_20f224;
        case 0x20f228u: goto label_20f228;
        case 0x20f22cu: goto label_20f22c;
        case 0x20f230u: goto label_20f230;
        case 0x20f234u: goto label_20f234;
        case 0x20f238u: goto label_20f238;
        case 0x20f23cu: goto label_20f23c;
        case 0x20f240u: goto label_20f240;
        case 0x20f244u: goto label_20f244;
        case 0x20f248u: goto label_20f248;
        case 0x20f24cu: goto label_20f24c;
        case 0x20f250u: goto label_20f250;
        case 0x20f254u: goto label_20f254;
        case 0x20f258u: goto label_20f258;
        case 0x20f25cu: goto label_20f25c;
        case 0x20f260u: goto label_20f260;
        case 0x20f264u: goto label_20f264;
        case 0x20f268u: goto label_20f268;
        case 0x20f26cu: goto label_20f26c;
        case 0x20f270u: goto label_20f270;
        case 0x20f274u: goto label_20f274;
        case 0x20f278u: goto label_20f278;
        case 0x20f27cu: goto label_20f27c;
        case 0x20f280u: goto label_20f280;
        case 0x20f284u: goto label_20f284;
        case 0x20f288u: goto label_20f288;
        case 0x20f28cu: goto label_20f28c;
        case 0x20f290u: goto label_20f290;
        case 0x20f294u: goto label_20f294;
        case 0x20f298u: goto label_20f298;
        case 0x20f29cu: goto label_20f29c;
        case 0x20f2a0u: goto label_20f2a0;
        case 0x20f2a4u: goto label_20f2a4;
        case 0x20f2a8u: goto label_20f2a8;
        case 0x20f2acu: goto label_20f2ac;
        default: break;
    }

    ctx->pc = 0x20f1e0u;

label_20f1e0:
    // 0x20f1e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20f1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_20f1e4:
    // 0x20f1e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f1e8:
    // 0x20f1e8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x20f1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_20f1ec:
    // 0x20f1ec: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x20f1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_20f1f0:
    // 0x20f1f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f1f4:
    // 0x20f1f4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x20f1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_20f1f8:
    // 0x20f1f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20f1f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20f1fc:
    // 0x20f1fc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x20f1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_20f200:
    // 0x20f200: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x20f200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_20f204:
    // 0x20f204: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x20f204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_20f208:
    // 0x20f208: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x20f208u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_20f20c:
    // 0x20f20c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x20f20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_20f210:
    // 0x20f210: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x20f210u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20f214:
    // 0x20f214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20f218:
    // 0x20f218: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x20f218u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20f21c:
    // 0x20f21c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20f21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_20f220:
    // 0x20f220: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
label_20f224:
    if (ctx->pc == 0x20F224u) {
        ctx->pc = 0x20F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F220u;
        // 0x20f224: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F228u;
        goto label_20f228;
    }
    ctx->pc = 0x20F220u;
    {
        const bool branch_taken_0x20f220 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F220u;
        // 0x20f224: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f220) {
            ctx->pc = 0x20F24Cu;
            goto label_20f24c;
        }
    }
    ctx->pc = 0x20F228u;
label_20f228:
    // 0x20f228: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x20f228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f22c:
    // 0x20f22c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x20f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_20f230:
    // 0x20f230: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20f230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20f234:
    // 0x20f234: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20f234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f238:
    // 0x20f238: 0xac510018  sw          $s1, 0x18($v0)
    ctx->pc = 0x20f238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 17));
label_20f23c:
    // 0x20f23c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f240:
    // 0x20f240: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20f240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f244:
    // 0x20f244: 0x40f809  jalr        $v0
label_20f248:
    if (ctx->pc == 0x20F248u) {
        ctx->pc = 0x20F24Cu;
        goto label_20f24c;
    }
    ctx->pc = 0x20F244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F24Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F244u, 0x20F24Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F24Cu;
label_20f24c:
    // 0x20f24c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f250:
    // 0x20f250: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20f250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f254:
    // 0x20f254: 0xc08371a  jal         func_20DC68
label_20f258:
    if (ctx->pc == 0x20F258u) {
        ctx->pc = 0x20F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F254u;
        // 0x20f258: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F25Cu;
        goto label_20f25c;
    }
    ctx->pc = 0x20F254u;
    SET_GPR_U32(ctx, 31, 0x20F25Cu);
    ctx->pc = 0x20F258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F254u;
    // 0x20f258: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DC68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20DC68u, 0x20F254u, 0x20F25Cu)) {
        return;
    }
    ctx->pc = 0x20F25Cu;
label_20f25c:
    // 0x20f25c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20f25cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f260:
    // 0x20f260: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x20f260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20f264:
    // 0x20f264: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x20f264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
label_20f268:
    // 0x20f268: 0xac750008  sw          $s5, 0x8($v1)
    ctx->pc = 0x20f268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 21));
label_20f26c:
    // 0x20f26c: 0xac74000c  sw          $s4, 0xC($v1)
    ctx->pc = 0x20f26cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 20));
label_20f270:
    // 0x20f270: 0xac760020  sw          $s6, 0x20($v1)
    ctx->pc = 0x20f270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 22));
label_20f274:
    // 0x20f274: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x20f274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_20f278:
    // 0x20f278: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x20f278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_20f27c:
    // 0x20f27c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x20f27cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20f280:
    // 0x20f280: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x20f280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_20f284:
    // 0x20f284: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x20f284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20f288:
    // 0x20f288: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x20f288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
label_20f28c:
    // 0x20f28c: 0xae630050  sw          $v1, 0x50($s3)
    ctx->pc = 0x20f28cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 3));
label_20f290:
    // 0x20f290: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20f290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20f294:
    // 0x20f294: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x20f294u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20f298:
    // 0x20f298: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x20f298u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20f29c:
    // 0x20f29c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x20f29cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20f2a0:
    // 0x20f2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20f2a4:
    // 0x20f2a4: 0x3e00008  jr          $ra
label_20f2a8:
    if (ctx->pc == 0x20F2A8u) {
        ctx->pc = 0x20F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2A4u;
        // 0x20f2a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F2ACu;
        goto label_20f2ac;
    }
    ctx->pc = 0x20F2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2A4u;
        // 0x20f2a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F2ACu;
label_20f2ac:
    // 0x20f2ac: 0x0  nop
    ctx->pc = 0x20f2acu;
    // NOP
    ctx->pc = 0x20f2b0u;
}
