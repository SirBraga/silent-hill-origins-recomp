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

// Function: sub_00156818
// Address: 0x156818 - 0x156a08
void sub_00156818_0x156818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156818_0x156818");
#endif

    switch (ctx->pc) {
        case 0x156834u: goto label_156834;
        case 0x156848u: goto label_156848;
        case 0x156860u: goto label_156860;
        case 0x156894u: goto label_156894;
        case 0x1569a4u: goto label_1569a4;
        case 0x1569c4u: goto label_1569c4;
        case 0x1569e0u: goto label_1569e0;
        default: break;
    }

    ctx->pc = 0x156818u;

    // 0x156818: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x156818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15681c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15681cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x156820: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x156820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x156824: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x156824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x156828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15682c: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x15682Cu;
    SET_GPR_U32(ctx, 31, 0x156834u);
    ctx->pc = 0x156830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15682Cu;
    // 0x156830: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x15682Cu, 0x156834u)) {
        return;
    }
    ctx->pc = 0x156834u;
label_156834:
    // 0x156834: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x156834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x156838: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15683c: 0x8c46f068  lw          $a2, -0xF98($v0)
    ctx->pc = 0x15683cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF068u));
    // 0x156840: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x156840u;
    SET_GPR_U32(ctx, 31, 0x156848u);
    ctx->pc = 0x156844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156840u;
    // 0x156844: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x156840u, 0x156848u)) {
        return;
    }
    ctx->pc = 0x156848u;
label_156848:
    // 0x156848: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x156848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15684c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156850: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x156850u;
    {
        const bool branch_taken_0x156850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156850u;
        // 0x156854: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156850) {
            ctx->pc = 0x1569F4u;
            goto label_1569f4;
        }
    }
    ctx->pc = 0x156858u;
    // 0x156858: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x156858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15685c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x15685cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_156860:
    // 0x156860: 0x2c830012  sltiu       $v1, $a0, 0x12
    ctx->pc = 0x156860u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x156864: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x156864u;
    {
        const bool branch_taken_0x156864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x156868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156864u;
        // 0x156868: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156864) {
            ctx->pc = 0x1569C4u;
            goto label_1569c4;
        }
    }
    ctx->pc = 0x15686Cu;
    // 0x15686c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15686cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x156870: 0x24422a60  addiu       $v0, $v0, 0x2A60
    ctx->pc = 0x156870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10848));
    // 0x156874: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x156874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x156878: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x156878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15687c: 0x800008  jr          $a0
    ctx->pc = 0x15687Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156884u: goto label_156884;
            case 0x15689Cu: goto label_15689c;
            case 0x1568ACu: goto label_1568ac;
            case 0x1568BCu: goto label_1568bc;
            case 0x1568CCu: goto label_1568cc;
            case 0x1568DCu: goto label_1568dc;
            case 0x1568ECu: goto label_1568ec;
            case 0x1568FCu: goto label_1568fc;
            case 0x15690Cu: goto label_15690c;
            case 0x15691Cu: goto label_15691c;
            case 0x15692Cu: goto label_15692c;
            case 0x15693Cu: goto label_15693c;
            case 0x15694Cu: goto label_15694c;
            case 0x15695Cu: goto label_15695c;
            case 0x15696Cu: goto label_15696c;
            case 0x15697Cu: goto label_15697c;
            case 0x15698Cu: goto label_15698c;
            case 0x1569ACu: goto label_1569ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15687Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x156884u;
label_156884:
    // 0x156884: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x156884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156888: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x156888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15688c: 0xc055b5e  jal         func_156D78
    ctx->pc = 0x15688Cu;
    SET_GPR_U32(ctx, 31, 0x156894u);
    ctx->pc = 0x156890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15688Cu;
    // 0x156890: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x156D78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x156D78u, 0x15688Cu, 0x156894u)) {
        return;
    }
    ctx->pc = 0x156894u;
label_156894:
    // 0x156894: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x156894u;
    {
        const bool branch_taken_0x156894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156894u;
        // 0x156898: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156894) {
            ctx->pc = 0x1569C8u;
            goto label_1569c8;
        }
    }
    ctx->pc = 0x15689Cu;
label_15689c:
    // 0x15689c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15689cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1568a0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1568a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1568a4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1568A4u;
    {
        const bool branch_taken_0x1568a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1568A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568A4u;
        // 0x1568a8: 0xe6200054  swc1        $f0, 0x54($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568a4) {
            ctx->pc = 0x1569C4u;
            goto label_1569c4;
        }
    }
    ctx->pc = 0x1568ACu;
label_1568ac:
    // 0x1568ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1568acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1568b0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1568b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1568b4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1568B4u;
    {
        const bool branch_taken_0x1568b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1568B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568B4u;
        // 0x1568b8: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568b4) {
            ctx->pc = 0x1569C4u;
            goto label_1569c4;
        }
    }
    ctx->pc = 0x1568BCu;
label_1568bc:
    // 0x1568bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1568bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1568c0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1568c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1568c4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1568C4u;
    {
        const bool branch_taken_0x1568c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1568C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568C4u;
        // 0x1568c8: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568c4) {
            ctx->pc = 0x1569C4u;
            goto label_1569c4;
        }
    }
    ctx->pc = 0x1568CCu;
label_1568cc:
    // 0x1568cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1568ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1568d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1568d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1568d4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1568D4u;
    {
        const bool branch_taken_0x1568d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1568D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568D4u;
        // 0x1568d8: 0xe6200060  swc1        $f0, 0x60($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568d4) {
            ctx->pc = 0x1569C4u;
            goto label_1569c4;
        }
    }
    ctx->pc = 0x1568DCu;
label_1568dc:
    // 0x1568dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1568dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1568e0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1568e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1568e4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1568E4u;
    {
        const bool branch_taken_0x1568e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1568E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568E4u;
        // 0x1568e8: 0xe6200064  swc1        $f0, 0x64($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568e4) {
            ctx->pc = 0x1569C4u;
            goto label_1569c4;
        }
    }
    ctx->pc = 0x1568ECu;
label_1568ec:
    // 0x1568ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1568ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1568f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1568f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1568f4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1568F4u;
    {
        const bool branch_taken_0x1568f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1568F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568F4u;
        // 0x1568f8: 0xe6200088  swc1        $f0, 0x88($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568f4) {
            ctx->pc = 0x1569C4u;
            goto label_1569c4;
        }
    }
    ctx->pc = 0x1568FCu;
label_1568fc:
    // 0x1568fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1568fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156900: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x156900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156904: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x156904u;
    {
        const bool branch_taken_0x156904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156904u;
        // 0x156908: 0xe620008c  swc1        $f0, 0x8C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156904) {
            ctx->pc = 0x1569C4u;
            goto label_1569c4;
        }
    }
    ctx->pc = 0x15690Cu;
label_15690c:
    // 0x15690c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15690cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156910: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x156910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156914: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x156914u;
    {
        const bool branch_taken_0x156914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156914u;
        // 0x156918: 0xe6200090  swc1        $f0, 0x90($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156914) {
            ctx->pc = 0x1569C4u;
            goto label_1569c4;
        }
    }
    ctx->pc = 0x15691Cu;
label_15691c:
    // 0x15691c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15691cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156920: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x156920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156924: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x156924u;
    {
        const bool branch_taken_0x156924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156924u;
        // 0x156928: 0xe6200094  swc1        $f0, 0x94($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156924) {
            ctx->pc = 0x1569C4u;
            goto label_1569c4;
        }
    }
    ctx->pc = 0x15692Cu;
label_15692c:
    // 0x15692c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156930: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x156930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156934: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x156934u;
    {
        const bool branch_taken_0x156934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156934u;
        // 0x156938: 0xe6200078  swc1        $f0, 0x78($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156934) {
            ctx->pc = 0x1569C4u;
            goto label_1569c4;
        }
    }
    ctx->pc = 0x15693Cu;
label_15693c:
    // 0x15693c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156940: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x156940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156944: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x156944u;
    {
        const bool branch_taken_0x156944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156944u;
        // 0x156948: 0xe620007c  swc1        $f0, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156944) {
            ctx->pc = 0x1569C4u;
            goto label_1569c4;
        }
    }
    ctx->pc = 0x15694Cu;
label_15694c:
    // 0x15694c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156950: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x156950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156954: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x156954u;
    {
        const bool branch_taken_0x156954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156954u;
        // 0x156958: 0xe6200080  swc1        $f0, 0x80($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156954) {
            ctx->pc = 0x1569C4u;
            goto label_1569c4;
        }
    }
    ctx->pc = 0x15695Cu;
label_15695c:
    // 0x15695c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15695cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156960: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x156960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156964: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x156964u;
    {
        const bool branch_taken_0x156964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156964u;
        // 0x156968: 0xe6200084  swc1        $f0, 0x84($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156964) {
            ctx->pc = 0x1569C4u;
            goto label_1569c4;
        }
    }
    ctx->pc = 0x15696Cu;
label_15696c:
    // 0x15696c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15696cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156970: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x156970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156974: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x156974u;
    {
        const bool branch_taken_0x156974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156974u;
        // 0x156978: 0xe6200098  swc1        $f0, 0x98($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156974) {
            ctx->pc = 0x1569C4u;
            goto label_1569c4;
        }
    }
    ctx->pc = 0x15697Cu;
label_15697c:
    // 0x15697c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15697cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156980: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x156980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156984: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x156984u;
    {
        const bool branch_taken_0x156984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156984u;
        // 0x156988: 0xe620009c  swc1        $f0, 0x9C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156984) {
            ctx->pc = 0x1569C4u;
            goto label_1569c4;
        }
    }
    ctx->pc = 0x15698Cu;
label_15698c:
    // 0x15698c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x15698cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156990: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x156990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x156994: 0x262500a8  addiu       $a1, $s1, 0xA8
    ctx->pc = 0x156994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
    // 0x156998: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x156998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15699c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x15699Cu;
    SET_GPR_U32(ctx, 31, 0x1569A4u);
    ctx->pc = 0x1569A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15699Cu;
    // 0x1569a0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x15699Cu, 0x1569A4u)) {
        return;
    }
    ctx->pc = 0x1569A4u;
label_1569a4:
    // 0x1569a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1569A4u;
    {
        const bool branch_taken_0x1569a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1569A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1569A4u;
        // 0x1569a8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1569a4) {
            ctx->pc = 0x1569C8u;
            goto label_1569c8;
        }
    }
    ctx->pc = 0x1569ACu;
label_1569ac:
    // 0x1569ac: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1569acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1569b0: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x1569b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x1569b4: 0x262500b0  addiu       $a1, $s1, 0xB0
    ctx->pc = 0x1569b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x1569b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1569b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1569bc: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x1569BCu;
    SET_GPR_U32(ctx, 31, 0x1569C4u);
    ctx->pc = 0x1569C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1569BCu;
    // 0x1569c0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x1569BCu, 0x1569C4u)) {
        return;
    }
    ctx->pc = 0x1569C4u;
label_1569c4:
    // 0x1569c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1569c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1569c8:
    // 0x1569c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1569c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1569cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1569ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1569d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1569d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1569d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1569d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1569d8: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1569D8u;
    SET_GPR_U32(ctx, 31, 0x1569E0u);
    ctx->pc = 0x1569DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1569D8u;
    // 0x1569dc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1569D8u, 0x1569E0u)) {
        return;
    }
    ctx->pc = 0x1569E0u;
label_1569e0:
    // 0x1569e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1569e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1569e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1569e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1569e8: 0x5460ff9d  bnel        $v1, $zero, . + 4 + (-0x63 << 2)
    ctx->pc = 0x1569E8u;
    {
        const bool branch_taken_0x1569e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1569e8) {
            ctx->pc = 0x1569ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1569E8u;
            // 0x1569ec: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156860;
        }
    }
    ctx->pc = 0x1569F0u;
    // 0x1569f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1569f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1569f4:
    // 0x1569f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1569f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1569f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1569f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1569fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1569FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1569FCu;
        // 0x156a00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1569FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156A04u;
    // 0x156a04: 0x0  nop
    ctx->pc = 0x156a04u;
    // NOP
    ctx->pc = 0x156a08u;
}
