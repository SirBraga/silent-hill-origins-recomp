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

// Function: sub_002AA240
// Address: 0x2aa240 - 0x2aa350
void sub_002AA240_0x2aa240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA240_0x2aa240");
#endif

    switch (ctx->pc) {
        case 0x2aa240u: goto label_2aa240;
        case 0x2aa244u: goto label_2aa244;
        case 0x2aa248u: goto label_2aa248;
        case 0x2aa24cu: goto label_2aa24c;
        case 0x2aa250u: goto label_2aa250;
        case 0x2aa254u: goto label_2aa254;
        case 0x2aa258u: goto label_2aa258;
        case 0x2aa25cu: goto label_2aa25c;
        case 0x2aa260u: goto label_2aa260;
        case 0x2aa264u: goto label_2aa264;
        case 0x2aa268u: goto label_2aa268;
        case 0x2aa26cu: goto label_2aa26c;
        case 0x2aa270u: goto label_2aa270;
        case 0x2aa274u: goto label_2aa274;
        case 0x2aa278u: goto label_2aa278;
        case 0x2aa27cu: goto label_2aa27c;
        case 0x2aa280u: goto label_2aa280;
        case 0x2aa284u: goto label_2aa284;
        case 0x2aa288u: goto label_2aa288;
        case 0x2aa28cu: goto label_2aa28c;
        case 0x2aa290u: goto label_2aa290;
        case 0x2aa294u: goto label_2aa294;
        case 0x2aa298u: goto label_2aa298;
        case 0x2aa29cu: goto label_2aa29c;
        case 0x2aa2a0u: goto label_2aa2a0;
        case 0x2aa2a4u: goto label_2aa2a4;
        case 0x2aa2a8u: goto label_2aa2a8;
        case 0x2aa2acu: goto label_2aa2ac;
        case 0x2aa2b0u: goto label_2aa2b0;
        case 0x2aa2b4u: goto label_2aa2b4;
        case 0x2aa2b8u: goto label_2aa2b8;
        case 0x2aa2bcu: goto label_2aa2bc;
        case 0x2aa2c0u: goto label_2aa2c0;
        case 0x2aa2c4u: goto label_2aa2c4;
        case 0x2aa2c8u: goto label_2aa2c8;
        case 0x2aa2ccu: goto label_2aa2cc;
        case 0x2aa2d0u: goto label_2aa2d0;
        case 0x2aa2d4u: goto label_2aa2d4;
        case 0x2aa2d8u: goto label_2aa2d8;
        case 0x2aa2dcu: goto label_2aa2dc;
        case 0x2aa2e0u: goto label_2aa2e0;
        case 0x2aa2e4u: goto label_2aa2e4;
        case 0x2aa2e8u: goto label_2aa2e8;
        case 0x2aa2ecu: goto label_2aa2ec;
        case 0x2aa2f0u: goto label_2aa2f0;
        case 0x2aa2f4u: goto label_2aa2f4;
        case 0x2aa2f8u: goto label_2aa2f8;
        case 0x2aa2fcu: goto label_2aa2fc;
        case 0x2aa300u: goto label_2aa300;
        case 0x2aa304u: goto label_2aa304;
        case 0x2aa308u: goto label_2aa308;
        case 0x2aa30cu: goto label_2aa30c;
        case 0x2aa310u: goto label_2aa310;
        case 0x2aa314u: goto label_2aa314;
        case 0x2aa318u: goto label_2aa318;
        case 0x2aa31cu: goto label_2aa31c;
        case 0x2aa320u: goto label_2aa320;
        case 0x2aa324u: goto label_2aa324;
        case 0x2aa328u: goto label_2aa328;
        case 0x2aa32cu: goto label_2aa32c;
        case 0x2aa330u: goto label_2aa330;
        case 0x2aa334u: goto label_2aa334;
        case 0x2aa338u: goto label_2aa338;
        case 0x2aa33cu: goto label_2aa33c;
        case 0x2aa340u: goto label_2aa340;
        case 0x2aa344u: goto label_2aa344;
        case 0x2aa348u: goto label_2aa348;
        case 0x2aa34cu: goto label_2aa34c;
        default: break;
    }

    ctx->pc = 0x2aa240u;

label_2aa240:
    // 0x2aa240: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2aa240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2aa244:
    // 0x2aa244: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2aa244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2aa248:
    // 0x2aa248: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2aa248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2aa24c:
    // 0x2aa24c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2aa24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2aa250:
    // 0x2aa250: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2aa250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2aa254:
    // 0x2aa254: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aa254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2aa258:
    // 0x2aa258: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2aa258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2aa25c:
    // 0x2aa25c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2aa25cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2aa260:
    // 0x2aa260: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aa260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2aa264:
    // 0x2aa264: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2aa264u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2aa268:
    // 0x2aa268: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x2aa268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2aa26c:
    // 0x2aa26c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2aa26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2aa270:
    // 0x2aa270: 0x40f809  jalr        $v0
label_2aa274:
    if (ctx->pc == 0x2AA274u) {
        ctx->pc = 0x2AA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA270u;
        // 0x2aa274: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA278u;
        goto label_2aa278;
    }
    ctx->pc = 0x2AA270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AA278u);
        ctx->pc = 0x2AA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA270u;
        // 0x2aa274: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA270u, 0x2AA278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AA278u;
label_2aa278:
    // 0x2aa278: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2aa278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2aa27c:
    // 0x2aa27c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_2aa280:
    if (ctx->pc == 0x2AA280u) {
        ctx->pc = 0x2AA280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA27Cu;
        // 0x2aa280: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA284u;
        goto label_2aa284;
    }
    ctx->pc = 0x2AA27Cu;
    {
        const bool branch_taken_0x2aa27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA27Cu;
        // 0x2aa280: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa27c) {
            ctx->pc = 0x2AA328u;
            goto label_2aa328;
        }
    }
    ctx->pc = 0x2AA284u;
label_2aa284:
    // 0x2aa284: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2aa284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2aa288:
    // 0x2aa288: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x2aa288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2aa28c:
    // 0x2aa28c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2aa28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2aa290:
    // 0x2aa290: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aa290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2aa294:
    // 0x2aa294: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2aa294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2aa298:
    // 0x2aa298: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2aa298u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_2aa29c:
    // 0x2aa29c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2aa29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2aa2a0:
    // 0x2aa2a0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2aa2a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2aa2a4:
    // 0x2aa2a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2aa2a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2aa2a8:
    // 0x2aa2a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa2a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2aa2ac:
    // 0x2aa2ac: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2aa2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2aa2b0:
    // 0x2aa2b0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2aa2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2aa2b4:
    // 0x2aa2b4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2aa2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2aa2b8:
    // 0x2aa2b8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2aa2b8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2aa2bc:
    // 0x2aa2bc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2aa2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2aa2c0:
    // 0x2aa2c0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2aa2c0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2aa2c4:
    // 0x2aa2c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2aa2c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2aa2c8:
    // 0x2aa2c8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2aa2c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2aa2cc:
    // 0x2aa2cc: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2aa2ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2aa2d0:
    // 0x2aa2d0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2aa2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2aa2d4:
    // 0x2aa2d4: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x2aa2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2aa2d8:
    // 0x2aa2d8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2aa2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2aa2dc:
    // 0x2aa2dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aa2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aa2e0:
    // 0x2aa2e0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2aa2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2aa2e4:
    // 0x2aa2e4: 0x40f809  jalr        $v0
label_2aa2e8:
    if (ctx->pc == 0x2AA2E8u) {
        ctx->pc = 0x2AA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2E4u;
        // 0x2aa2e8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA2ECu;
        goto label_2aa2ec;
    }
    ctx->pc = 0x2AA2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AA2ECu);
        ctx->pc = 0x2AA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2E4u;
        // 0x2aa2e8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA2E4u, 0x2AA2ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AA2ECu;
label_2aa2ec:
    // 0x2aa2ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2aa2ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2aa2f0:
    // 0x2aa2f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2aa2f4:
    if (ctx->pc == 0x2AA2F4u) {
        ctx->pc = 0x2AA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2F0u;
        // 0x2aa2f4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA2F8u;
        goto label_2aa2f8;
    }
    ctx->pc = 0x2AA2F0u;
    {
        const bool branch_taken_0x2aa2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2F0u;
        // 0x2aa2f4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2f0) {
            ctx->pc = 0x2AA328u;
            goto label_2aa328;
        }
    }
    ctx->pc = 0x2AA2F8u;
label_2aa2f8:
    // 0x2aa2f8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2aa2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2aa2fc:
    // 0x2aa2fc: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x2aa2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2aa300:
    // 0x2aa300: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2aa300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2aa304:
    // 0x2aa304: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aa304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2aa308:
    // 0x2aa308: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2aa308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2aa30c:
    // 0x2aa30c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2aa30cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_2aa310:
    // 0x2aa310: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2aa310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2aa314:
    // 0x2aa314: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2aa314u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2aa318:
    // 0x2aa318: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2aa318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2aa31c:
    // 0x2aa31c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aa31cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2aa320:
    // 0x2aa320: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2aa320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_2aa324:
    // 0x2aa324: 0x0  nop
    ctx->pc = 0x2aa324u;
    // NOP
label_2aa328:
    // 0x2aa328: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2aa328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2aa32c:
    // 0x2aa32c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2aa32cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2aa330:
    // 0x2aa330: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2aa330u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2aa334:
    // 0x2aa334: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2aa334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2aa338:
    // 0x2aa338: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aa338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2aa33c:
    // 0x2aa33c: 0x3e00008  jr          $ra
label_2aa340:
    if (ctx->pc == 0x2AA340u) {
        ctx->pc = 0x2AA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA33Cu;
        // 0x2aa340: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA344u;
        goto label_2aa344;
    }
    ctx->pc = 0x2AA33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA33Cu;
        // 0x2aa340: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA344u;
label_2aa344:
    // 0x2aa344: 0x0  nop
    ctx->pc = 0x2aa344u;
    // NOP
label_2aa348:
    // 0x2aa348: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2aa348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2aa34c:
    // 0x2aa34c: 0x0  nop
    ctx->pc = 0x2aa34cu;
    // NOP
    ctx->pc = 0x2aa350u;
}
