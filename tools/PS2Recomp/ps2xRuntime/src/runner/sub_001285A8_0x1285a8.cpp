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

// Function: sub_001285A8
// Address: 0x1285a8 - 0x128fe8
void sub_001285A8_0x1285a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001285A8_0x1285a8");
#endif

    switch (ctx->pc) {
        case 0x1285dcu: goto label_1285dc;
        case 0x1285e8u: goto label_1285e8;
        case 0x1285fcu: goto label_1285fc;
        case 0x128620u: goto label_128620;
        case 0x128730u: goto label_128730;
        case 0x128864u: goto label_128864;
        case 0x1288b8u: goto label_1288b8;
        case 0x12890cu: goto label_12890c;
        case 0x1289bcu: goto label_1289bc;
        case 0x128a34u: goto label_128a34;
        case 0x128aacu: goto label_128aac;
        case 0x128c3cu: goto label_128c3c;
        case 0x128c54u: goto label_128c54;
        case 0x128c78u: goto label_128c78;
        case 0x128c8cu: goto label_128c8c;
        case 0x128ce0u: goto label_128ce0;
        case 0x128d04u: goto label_128d04;
        case 0x128d18u: goto label_128d18;
        case 0x128d6cu: goto label_128d6c;
        case 0x128d7cu: goto label_128d7c;
        case 0x128d88u: goto label_128d88;
        case 0x128d98u: goto label_128d98;
        case 0x128dccu: goto label_128dcc;
        case 0x128de4u: goto label_128de4;
        case 0x128dfcu: goto label_128dfc;
        case 0x128e14u: goto label_128e14;
        case 0x128e34u: goto label_128e34;
        case 0x128e60u: goto label_128e60;
        case 0x128ea0u: goto label_128ea0;
        case 0x128ee4u: goto label_128ee4;
        case 0x128f04u: goto label_128f04;
        case 0x128f24u: goto label_128f24;
        case 0x128f48u: goto label_128f48;
        case 0x128f60u: goto label_128f60;
        case 0x128f94u: goto label_128f94;
        case 0x128fbcu: goto label_128fbc;
        default: break;
    }

    ctx->pc = 0x1285a8u;

    // 0x1285a8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1285a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1285ac: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1285acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1285b0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1285b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1285b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1285b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1285b8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1285b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1285bc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1285bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1285c0: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1285c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x1285c4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1285c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1285c8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1285c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1285cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1285ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1285d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1285d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1285d4: 0xc061fca  jal         func_187F28
    ctx->pc = 0x1285D4u;
    SET_GPR_U32(ctx, 31, 0x1285DCu);
    ctx->pc = 0x1285D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1285D4u;
    // 0x1285d8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187F28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x187F28u, 0x1285D4u, 0x1285DCu)) {
        return;
    }
    ctx->pc = 0x1285DCu;
label_1285dc:
    // 0x1285dc: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x1285dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1285e0: 0xc048080  jal         func_120200
    ctx->pc = 0x1285E0u;
    SET_GPR_U32(ctx, 31, 0x1285E8u);
    ctx->pc = 0x1285E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1285E0u;
    // 0x1285e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x120200u, 0x1285E0u, 0x1285E8u)) {
        return;
    }
    ctx->pc = 0x1285E8u;
label_1285e8:
    // 0x1285e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1285e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1285ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1285ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1285f0: 0x8c464670  lw          $a2, 0x4670($v0)
    ctx->pc = 0x1285f0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4670u));
    // 0x1285f4: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1285F4u;
    SET_GPR_U32(ctx, 31, 0x1285FCu);
    ctx->pc = 0x1285F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1285F4u;
    // 0x1285f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1285F4u, 0x1285FCu)) {
        return;
    }
    ctx->pc = 0x1285FCu;
label_1285fc:
    // 0x1285fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1285fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128600: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x128600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x128604: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x128604u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x128608: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x128608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12860c: 0x106001b8  beqz        $v1, . + 4 + (0x1B8 << 2)
    ctx->pc = 0x12860Cu;
    {
        const bool branch_taken_0x12860c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x128610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12860Cu;
        // 0x128610: 0x27b70030  addiu       $s7, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12860c) {
            ctx->pc = 0x128CF0u;
            goto label_128cf0;
        }
    }
    ctx->pc = 0x128614u;
    // 0x128614: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128618: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x128618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12861c: 0x0  nop
    ctx->pc = 0x12861cu;
    // NOP
label_128620:
    // 0x128620: 0x2c830054  sltiu       $v1, $a0, 0x54
    ctx->pc = 0x128620u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)84) ? 1 : 0);
    // 0x128624: 0x106001a7  beqz        $v1, . + 4 + (0x1A7 << 2)
    ctx->pc = 0x128624u;
    {
        const bool branch_taken_0x128624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x128628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128624u;
        // 0x128628: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128624) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x12862Cu;
    // 0x12862c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x12862cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x128630: 0x2442c7f0  addiu       $v0, $v0, -0x3810
    ctx->pc = 0x128630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952944));
    // 0x128634: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x128634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128638: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x128638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12863c: 0x800008  jr          $a0
    ctx->pc = 0x12863Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x128644u: goto label_128644;
            case 0x128664u: goto label_128664;
            case 0x128678u: goto label_128678;
            case 0x12868Cu: goto label_12868c;
            case 0x1286A0u: goto label_1286a0;
            case 0x1286B4u: goto label_1286b4;
            case 0x1286C8u: goto label_1286c8;
            case 0x1286DCu: goto label_1286dc;
            case 0x1286F0u: goto label_1286f0;
            case 0x128704u: goto label_128704;
            case 0x128718u: goto label_128718;
            case 0x128738u: goto label_128738;
            case 0x128748u: goto label_128748;
            case 0x128758u: goto label_128758;
            case 0x128774u: goto label_128774;
            case 0x128784u: goto label_128784;
            case 0x128794u: goto label_128794;
            case 0x1287A4u: goto label_1287a4;
            case 0x1287B4u: goto label_1287b4;
            case 0x1287C4u: goto label_1287c4;
            case 0x1287D4u: goto label_1287d4;
            case 0x1287E4u: goto label_1287e4;
            case 0x1287F4u: goto label_1287f4;
            case 0x128804u: goto label_128804;
            case 0x128814u: goto label_128814;
            case 0x128834u: goto label_128834;
            case 0x128848u: goto label_128848;
            case 0x12886Cu: goto label_12886c;
            case 0x12887Cu: goto label_12887c;
            case 0x12888Cu: goto label_12888c;
            case 0x12889Cu: goto label_12889c;
            case 0x1288C0u: goto label_1288c0;
            case 0x1288D0u: goto label_1288d0;
            case 0x1288E0u: goto label_1288e0;
            case 0x1288F0u: goto label_1288f0;
            case 0x128914u: goto label_128914;
            case 0x128924u: goto label_128924;
            case 0x128934u: goto label_128934;
            case 0x128944u: goto label_128944;
            case 0x128954u: goto label_128954;
            case 0x128964u: goto label_128964;
            case 0x128978u: goto label_128978;
            case 0x12898Cu: goto label_12898c;
            case 0x1289A0u: goto label_1289a0;
            case 0x1289C4u: goto label_1289c4;
            case 0x1289D4u: goto label_1289d4;
            case 0x1289E4u: goto label_1289e4;
            case 0x1289F4u: goto label_1289f4;
            case 0x128A04u: goto label_128a04;
            case 0x128A18u: goto label_128a18;
            case 0x128A3Cu: goto label_128a3c;
            case 0x128A4Cu: goto label_128a4c;
            case 0x128A5Cu: goto label_128a5c;
            case 0x128A6Cu: goto label_128a6c;
            case 0x128A7Cu: goto label_128a7c;
            case 0x128A90u: goto label_128a90;
            case 0x128AB4u: goto label_128ab4;
            case 0x128AC4u: goto label_128ac4;
            case 0x128AD4u: goto label_128ad4;
            case 0x128AE4u: goto label_128ae4;
            case 0x128AF4u: goto label_128af4;
            case 0x128B04u: goto label_128b04;
            case 0x128B14u: goto label_128b14;
            case 0x128B24u: goto label_128b24;
            case 0x128B34u: goto label_128b34;
            case 0x128B44u: goto label_128b44;
            case 0x128B54u: goto label_128b54;
            case 0x128B64u: goto label_128b64;
            case 0x128B74u: goto label_128b74;
            case 0x128B84u: goto label_128b84;
            case 0x128B98u: goto label_128b98;
            case 0x128BA8u: goto label_128ba8;
            case 0x128BB8u: goto label_128bb8;
            case 0x128BCCu: goto label_128bcc;
            case 0x128BDCu: goto label_128bdc;
            case 0x128BECu: goto label_128bec;
            case 0x128BFCu: goto label_128bfc;
            case 0x128C0Cu: goto label_128c0c;
            case 0x128C1Cu: goto label_128c1c;
            case 0x128C44u: goto label_128c44;
            case 0x128C5Cu: goto label_128c5c;
            case 0x128C94u: goto label_128c94;
            case 0x128CA4u: goto label_128ca4;
            case 0x128CB4u: goto label_128cb4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12863Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x128644u;
label_128644:
    // 0x128644: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128648: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x128648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x12864c: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x12864cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x128650: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x128650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128654: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128658: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x128658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12865c: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x12865Cu;
    {
        const bool branch_taken_0x12865c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12865Cu;
        // 0x128660: 0xe620278c  swc1        $f0, 0x278C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12865c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128664u;
label_128664:
    // 0x128664: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x128664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128668: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x128668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x12866c: 0x24c6c7b0  addiu       $a2, $a2, -0x3850
    ctx->pc = 0x12866cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952880));
    // 0x128670: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x128670u;
    {
        const bool branch_taken_0x128670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128670u;
        // 0x128674: 0x262429cc  addiu       $a0, $s1, 0x29CC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128670) {
            ctx->pc = 0x128728u;
            goto label_128728;
        }
    }
    ctx->pc = 0x128678u;
label_128678:
    // 0x128678: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x128678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12867c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12867cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x128680: 0x24c6c7b0  addiu       $a2, $a2, -0x3850
    ctx->pc = 0x128680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952880));
    // 0x128684: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x128684u;
    {
        const bool branch_taken_0x128684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128684u;
        // 0x128688: 0x262429d4  addiu       $a0, $s1, 0x29D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128684) {
            ctx->pc = 0x128728u;
            goto label_128728;
        }
    }
    ctx->pc = 0x12868Cu;
label_12868c:
    // 0x12868c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12868cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128690: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x128690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x128694: 0x24c6c7b0  addiu       $a2, $a2, -0x3850
    ctx->pc = 0x128694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952880));
    // 0x128698: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x128698u;
    {
        const bool branch_taken_0x128698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128698u;
        // 0x12869c: 0x262429dc  addiu       $a0, $s1, 0x29DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10716));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128698) {
            ctx->pc = 0x128728u;
            goto label_128728;
        }
    }
    ctx->pc = 0x1286A0u;
label_1286a0:
    // 0x1286a0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1286a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1286a4: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1286a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1286a8: 0x24c6c7b0  addiu       $a2, $a2, -0x3850
    ctx->pc = 0x1286a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952880));
    // 0x1286ac: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1286ACu;
    {
        const bool branch_taken_0x1286ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286ACu;
        // 0x1286b0: 0x262429e4  addiu       $a0, $s1, 0x29E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10724));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286ac) {
            ctx->pc = 0x128728u;
            goto label_128728;
        }
    }
    ctx->pc = 0x1286B4u;
label_1286b4:
    // 0x1286b4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1286b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1286b8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1286b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1286bc: 0x24c6c7b0  addiu       $a2, $a2, -0x3850
    ctx->pc = 0x1286bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952880));
    // 0x1286c0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1286C0u;
    {
        const bool branch_taken_0x1286c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286C0u;
        // 0x1286c4: 0x262429ec  addiu       $a0, $s1, 0x29EC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10732));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286c0) {
            ctx->pc = 0x128728u;
            goto label_128728;
        }
    }
    ctx->pc = 0x1286C8u;
label_1286c8:
    // 0x1286c8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1286c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1286cc: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1286ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1286d0: 0x24c6c7b0  addiu       $a2, $a2, -0x3850
    ctx->pc = 0x1286d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952880));
    // 0x1286d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1286D4u;
    {
        const bool branch_taken_0x1286d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286D4u;
        // 0x1286d8: 0x262429fc  addiu       $a0, $s1, 0x29FC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10748));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286d4) {
            ctx->pc = 0x128728u;
            goto label_128728;
        }
    }
    ctx->pc = 0x1286DCu;
label_1286dc:
    // 0x1286dc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1286dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1286e0: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1286e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1286e4: 0x24c6c7b0  addiu       $a2, $a2, -0x3850
    ctx->pc = 0x1286e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952880));
    // 0x1286e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1286E8u;
    {
        const bool branch_taken_0x1286e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286E8u;
        // 0x1286ec: 0x26242a04  addiu       $a0, $s1, 0x2A04 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10756));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286e8) {
            ctx->pc = 0x128728u;
            goto label_128728;
        }
    }
    ctx->pc = 0x1286F0u;
label_1286f0:
    // 0x1286f0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1286f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1286f4: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1286f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1286f8: 0x24c6c7b0  addiu       $a2, $a2, -0x3850
    ctx->pc = 0x1286f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952880));
    // 0x1286fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1286FCu;
    {
        const bool branch_taken_0x1286fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286FCu;
        // 0x128700: 0x26242a0c  addiu       $a0, $s1, 0x2A0C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10764));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286fc) {
            ctx->pc = 0x128728u;
            goto label_128728;
        }
    }
    ctx->pc = 0x128704u;
label_128704:
    // 0x128704: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x128704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128708: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x128708u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x12870c: 0x24c6c7b0  addiu       $a2, $a2, -0x3850
    ctx->pc = 0x12870cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952880));
    // 0x128710: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128710u;
    {
        const bool branch_taken_0x128710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128710u;
        // 0x128714: 0x26242a14  addiu       $a0, $s1, 0x2A14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128710) {
            ctx->pc = 0x128728u;
            goto label_128728;
        }
    }
    ctx->pc = 0x128718u;
label_128718:
    // 0x128718: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x128718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12871c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x12871cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x128720: 0x24c6c7b0  addiu       $a2, $a2, -0x3850
    ctx->pc = 0x128720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952880));
    // 0x128724: 0x26242a1c  addiu       $a0, $s1, 0x2A1C
    ctx->pc = 0x128724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10780));
label_128728:
    // 0x128728: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x128728u;
    SET_GPR_U32(ctx, 31, 0x128730u);
    ctx->pc = 0x12872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128728u;
    // 0x12872c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x128728u, 0x128730u)) {
        return;
    }
    ctx->pc = 0x128730u;
label_128730:
    // 0x128730: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x128730u;
    {
        const bool branch_taken_0x128730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128730u;
        // 0x128734: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128730) {
            ctx->pc = 0x128CC8u;
            goto label_128cc8;
        }
    }
    ctx->pc = 0x128738u;
label_128738:
    // 0x128738: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12873c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x12873cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x128740: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x128740u;
    {
        const bool branch_taken_0x128740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128740u;
        // 0x128744: 0xae232bbc  sw          $v1, 0x2BBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128740) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128748u;
label_128748:
    // 0x128748: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12874c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x12874cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x128750: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x128750u;
    {
        const bool branch_taken_0x128750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128750u;
        // 0x128754: 0xae232bc0  sw          $v1, 0x2BC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128750) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128758u;
label_128758:
    // 0x128758: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12875c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x12875cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x128760: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x128760u;
    {
        const bool branch_taken_0x128760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x128764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128760u;
        // 0x128764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128760) {
            ctx->pc = 0x12876Cu;
            goto label_12876c;
        }
    }
    ctx->pc = 0x128768u;
    // 0x128768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12876c:
    // 0x12876c: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x12876Cu;
    {
        const bool branch_taken_0x12876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12876Cu;
        // 0x128770: 0xae222c60  sw          $v0, 0x2C60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12876c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128774u;
label_128774:
    // 0x128774: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128778: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x128778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12877c: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x12877Cu;
    {
        const bool branch_taken_0x12877c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12877Cu;
        // 0x128780: 0xae2328d0  sw          $v1, 0x28D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12877c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128784u;
label_128784:
    // 0x128784: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128788: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x128788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12878c: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x12878Cu;
    {
        const bool branch_taken_0x12878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12878Cu;
        // 0x128790: 0xae2328cc  sw          $v1, 0x28CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12878c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128794u;
label_128794:
    // 0x128794: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128798: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12879c: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x12879Cu;
    {
        const bool branch_taken_0x12879c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12879Cu;
        // 0x1287a0: 0xe62028dc  swc1        $f0, 0x28DC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12879c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x1287A4u;
label_1287a4:
    // 0x1287a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1287a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1287a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1287a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1287ac: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x1287ACu;
    {
        const bool branch_taken_0x1287ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287ACu;
        // 0x1287b0: 0xe62028e0  swc1        $f0, 0x28E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287ac) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x1287B4u;
label_1287b4:
    // 0x1287b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1287b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1287b8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1287b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1287bc: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x1287BCu;
    {
        const bool branch_taken_0x1287bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287BCu;
        // 0x1287c0: 0xe62028e4  swc1        $f0, 0x28E4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10468), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287bc) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x1287C4u;
label_1287c4:
    // 0x1287c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1287c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1287c8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1287c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1287cc: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x1287CCu;
    {
        const bool branch_taken_0x1287cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287CCu;
        // 0x1287d0: 0xe62028d4  swc1        $f0, 0x28D4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10452), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287cc) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x1287D4u;
label_1287d4:
    // 0x1287d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1287d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1287d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1287d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1287dc: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x1287DCu;
    {
        const bool branch_taken_0x1287dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287DCu;
        // 0x1287e0: 0xe62028d8  swc1        $f0, 0x28D8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10456), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287dc) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x1287E4u;
label_1287e4:
    // 0x1287e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1287e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1287e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1287e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1287ec: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x1287ECu;
    {
        const bool branch_taken_0x1287ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287ECu;
        // 0x1287f0: 0xe62028e8  swc1        $f0, 0x28E8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10472), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287ec) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x1287F4u;
label_1287f4:
    // 0x1287f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1287f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1287f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1287f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1287fc: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x1287FCu;
    {
        const bool branch_taken_0x1287fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287FCu;
        // 0x128800: 0xe62028ec  swc1        $f0, 0x28EC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287fc) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128804u;
label_128804:
    // 0x128804: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128808: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x128808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x12880c: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x12880Cu;
    {
        const bool branch_taken_0x12880c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12880Cu;
        // 0x128810: 0xae222cf4  sw          $v0, 0x2CF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12880c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128814u;
label_128814:
    // 0x128814: 0x26222d00  addiu       $v0, $s1, 0x2D00
    ctx->pc = 0x128814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 11520));
    // 0x128818: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x128818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x12881c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12881cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x128820: 0xae202d00  sw          $zero, 0x2D00($s1)
    ctx->pc = 0x128820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11520), GPR_U32(ctx, 0));
    // 0x128824: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128828: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12882c: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x12882Cu;
    {
        const bool branch_taken_0x12882c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12882Cu;
        // 0x128830: 0xe6202d08  swc1        $f0, 0x2D08($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11528), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12882c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128834u;
label_128834:
    // 0x128834: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x128834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128838: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x128838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12883c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12883cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128840: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x128840u;
    {
        const bool branch_taken_0x128840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128840u;
        // 0x128844: 0xae222d28  sw          $v0, 0x2D28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128840) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128848u;
label_128848:
    // 0x128848: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12884c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x12884cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x128850: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x128850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x128854: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128858: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x128858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12885c: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x12885Cu;
    SET_GPR_U32(ctx, 31, 0x128864u);
    ctx->pc = 0x128860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12885Cu;
    // 0x128860: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x12885Cu, 0x128864u)) {
        return;
    }
    ctx->pc = 0x128864u;
label_128864:
    // 0x128864: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x128864u;
    {
        const bool branch_taken_0x128864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128864u;
        // 0x128868: 0xe62027a8  swc1        $f0, 0x27A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128864) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x12886Cu;
label_12886c:
    // 0x12886c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12886cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128870: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128874: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x128874u;
    {
        const bool branch_taken_0x128874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128874u;
        // 0x128878: 0xe62027b4  swc1        $f0, 0x27B4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128874) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x12887Cu;
label_12887c:
    // 0x12887c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12887cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128880: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128884: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x128884u;
    {
        const bool branch_taken_0x128884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128884u;
        // 0x128888: 0xe62027c0  swc1        $f0, 0x27C0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128884) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x12888Cu;
label_12888c:
    // 0x12888c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12888cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128890: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128894: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x128894u;
    {
        const bool branch_taken_0x128894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128894u;
        // 0x128898: 0xe62027cc  swc1        $f0, 0x27CC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10188), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128894) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x12889Cu;
label_12889c:
    // 0x12889c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12889cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1288a0: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1288a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1288a4: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1288a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1288a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1288a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1288ac: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x1288acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1288b0: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x1288B0u;
    SET_GPR_U32(ctx, 31, 0x1288B8u);
    ctx->pc = 0x1288B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1288B0u;
    // 0x1288b4: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x1288B0u, 0x1288B8u)) {
        return;
    }
    ctx->pc = 0x1288B8u;
label_1288b8:
    // 0x1288b8: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x1288B8u;
    {
        const bool branch_taken_0x1288b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1288BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1288B8u;
        // 0x1288bc: 0xe62027ac  swc1        $f0, 0x27AC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1288b8) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x1288C0u;
label_1288c0:
    // 0x1288c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1288c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1288c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1288c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1288c8: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x1288C8u;
    {
        const bool branch_taken_0x1288c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1288CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1288C8u;
        // 0x1288cc: 0xe62027b8  swc1        $f0, 0x27B8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1288c8) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x1288D0u;
label_1288d0:
    // 0x1288d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1288d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1288d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1288d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1288d8: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x1288D8u;
    {
        const bool branch_taken_0x1288d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1288DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1288D8u;
        // 0x1288dc: 0xe62027c4  swc1        $f0, 0x27C4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1288d8) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x1288E0u;
label_1288e0:
    // 0x1288e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1288e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1288e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1288e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1288e8: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x1288E8u;
    {
        const bool branch_taken_0x1288e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1288ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1288E8u;
        // 0x1288ec: 0xe62027d0  swc1        $f0, 0x27D0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1288e8) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x1288F0u;
label_1288f0:
    // 0x1288f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1288f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1288f4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1288f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1288f8: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1288f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1288fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1288fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128900: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x128900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128904: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x128904u;
    SET_GPR_U32(ctx, 31, 0x12890Cu);
    ctx->pc = 0x128908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128904u;
    // 0x128908: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x128904u, 0x12890Cu)) {
        return;
    }
    ctx->pc = 0x12890Cu;
label_12890c:
    // 0x12890c: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x12890Cu;
    {
        const bool branch_taken_0x12890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12890Cu;
        // 0x128910: 0xe62027b0  swc1        $f0, 0x27B0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12890c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128914u;
label_128914:
    // 0x128914: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128918: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12891c: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x12891Cu;
    {
        const bool branch_taken_0x12891c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12891Cu;
        // 0x128920: 0xe62027bc  swc1        $f0, 0x27BC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12891c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128924u;
label_128924:
    // 0x128924: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128928: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12892c: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x12892Cu;
    {
        const bool branch_taken_0x12892c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12892Cu;
        // 0x128930: 0xe62027c8  swc1        $f0, 0x27C8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12892c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128934u;
label_128934:
    // 0x128934: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128938: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12893c: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x12893Cu;
    {
        const bool branch_taken_0x12893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12893Cu;
        // 0x128940: 0xe62027d4  swc1        $f0, 0x27D4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12893c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128944u;
label_128944:
    // 0x128944: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128948: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12894c: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x12894Cu;
    {
        const bool branch_taken_0x12894c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12894Cu;
        // 0x128950: 0xe62027d8  swc1        $f0, 0x27D8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12894c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128954u;
label_128954:
    // 0x128954: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128958: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12895c: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x12895Cu;
    {
        const bool branch_taken_0x12895c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12895Cu;
        // 0x128960: 0xe62028c0  swc1        $f0, 0x28C0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12895c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128964u;
label_128964:
    // 0x128964: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x128964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128968: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x128968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12896c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12896cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128970: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x128970u;
    {
        const bool branch_taken_0x128970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128970u;
        // 0x128974: 0xae222840  sw          $v0, 0x2840($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128970) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128978u;
label_128978:
    // 0x128978: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x128978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12897c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x12897cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x128980: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x128980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128984: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x128984u;
    {
        const bool branch_taken_0x128984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128984u;
        // 0x128988: 0xae2228a8  sw          $v0, 0x28A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128984) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x12898Cu;
label_12898c:
    // 0x12898c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12898cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128990: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x128990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x128994: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x128994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128998: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x128998u;
    {
        const bool branch_taken_0x128998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128998u;
        // 0x12899c: 0xae2227dc  sw          $v0, 0x27DC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128998) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x1289A0u;
label_1289a0:
    // 0x1289a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1289a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1289a4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1289a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1289a8: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1289a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1289ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1289acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1289b0: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x1289b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1289b4: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x1289B4u;
    SET_GPR_U32(ctx, 31, 0x1289BCu);
    ctx->pc = 0x1289B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1289B4u;
    // 0x1289b8: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x1289B4u, 0x1289BCu)) {
        return;
    }
    ctx->pc = 0x1289BCu;
label_1289bc:
    // 0x1289bc: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x1289BCu;
    {
        const bool branch_taken_0x1289bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1289C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289BCu;
        // 0x1289c0: 0xe62027e0  swc1        $f0, 0x27E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289bc) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x1289C4u;
label_1289c4:
    // 0x1289c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1289c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1289c8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1289c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1289cc: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x1289CCu;
    {
        const bool branch_taken_0x1289cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1289D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289CCu;
        // 0x1289d0: 0xe62027e4  swc1        $f0, 0x27E4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289cc) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x1289D4u;
label_1289d4:
    // 0x1289d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1289d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1289d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1289d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1289dc: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x1289DCu;
    {
        const bool branch_taken_0x1289dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1289E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289DCu;
        // 0x1289e0: 0xe62027e8  swc1        $f0, 0x27E8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289dc) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x1289E4u;
label_1289e4:
    // 0x1289e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1289e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1289e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1289e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1289ec: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x1289ECu;
    {
        const bool branch_taken_0x1289ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1289F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289ECu;
        // 0x1289f0: 0xe62027ec  swc1        $f0, 0x27EC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289ec) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x1289F4u;
label_1289f4:
    // 0x1289f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1289f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1289f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1289f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1289fc: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1289FCu;
    {
        const bool branch_taken_0x1289fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289FCu;
        // 0x128a00: 0xe62027f0  swc1        $f0, 0x27F0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289fc) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128A04u;
label_128a04:
    // 0x128a04: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x128a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128a08: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x128a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x128a0c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x128a0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128a10: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x128A10u;
    {
        const bool branch_taken_0x128a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A10u;
        // 0x128a14: 0xae2227f8  sw          $v0, 0x27F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a10) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128A18u;
label_128a18:
    // 0x128a18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128a1c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x128a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x128a20: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x128a20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x128a24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128a28: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x128a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128a2c: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x128A2Cu;
    SET_GPR_U32(ctx, 31, 0x128A34u);
    ctx->pc = 0x128A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A2Cu;
    // 0x128a30: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x128A2Cu, 0x128A34u)) {
        return;
    }
    ctx->pc = 0x128A34u;
label_128a34:
    // 0x128a34: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x128A34u;
    {
        const bool branch_taken_0x128a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A34u;
        // 0x128a38: 0xe62027fc  swc1        $f0, 0x27FC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a34) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128A3Cu;
label_128a3c:
    // 0x128a3c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128a40: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128a44: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x128A44u;
    {
        const bool branch_taken_0x128a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A44u;
        // 0x128a48: 0xe6202800  swc1        $f0, 0x2800($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a44) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128A4Cu;
label_128a4c:
    // 0x128a4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128a50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128a54: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x128A54u;
    {
        const bool branch_taken_0x128a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A54u;
        // 0x128a58: 0xe6202804  swc1        $f0, 0x2804($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a54) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128A5Cu;
label_128a5c:
    // 0x128a5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128a60: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128a64: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x128A64u;
    {
        const bool branch_taken_0x128a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A64u;
        // 0x128a68: 0xe6202808  swc1        $f0, 0x2808($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a64) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128A6Cu;
label_128a6c:
    // 0x128a6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128a70: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128a74: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x128A74u;
    {
        const bool branch_taken_0x128a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A74u;
        // 0x128a78: 0xe620280c  swc1        $f0, 0x280C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a74) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128A7Cu;
label_128a7c:
    // 0x128a7c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x128a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128a80: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x128a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x128a84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x128a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128a88: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x128A88u;
    {
        const bool branch_taken_0x128a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128A88u;
        // 0x128a8c: 0xae222814  sw          $v0, 0x2814($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128a88) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128A90u;
label_128a90:
    // 0x128a90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128a94: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x128a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x128a98: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x128a98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x128a9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128aa0: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x128aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128aa4: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x128AA4u;
    SET_GPR_U32(ctx, 31, 0x128AACu);
    ctx->pc = 0x128AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128AA4u;
    // 0x128aa8: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x128AA4u, 0x128AACu)) {
        return;
    }
    ctx->pc = 0x128AACu;
label_128aac:
    // 0x128aac: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x128AACu;
    {
        const bool branch_taken_0x128aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AACu;
        // 0x128ab0: 0xe6202818  swc1        $f0, 0x2818($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128aac) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128AB4u;
label_128ab4:
    // 0x128ab4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128ab8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128abc: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x128ABCu;
    {
        const bool branch_taken_0x128abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128ABCu;
        // 0x128ac0: 0xe620281c  swc1        $f0, 0x281C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10268), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128abc) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128AC4u;
label_128ac4:
    // 0x128ac4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128ac8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128acc: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x128ACCu;
    {
        const bool branch_taken_0x128acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128ACCu;
        // 0x128ad0: 0xe6202820  swc1        $f0, 0x2820($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128acc) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128AD4u;
label_128ad4:
    // 0x128ad4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128ad8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128adc: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x128ADCu;
    {
        const bool branch_taken_0x128adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128ADCu;
        // 0x128ae0: 0xe6202824  swc1        $f0, 0x2824($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128adc) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128AE4u;
label_128ae4:
    // 0x128ae4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128ae8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128aec: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x128AECu;
    {
        const bool branch_taken_0x128aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AECu;
        // 0x128af0: 0xe6202828  swc1        $f0, 0x2828($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128aec) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128AF4u;
label_128af4:
    // 0x128af4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128af8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128afc: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x128AFCu;
    {
        const bool branch_taken_0x128afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128AFCu;
        // 0x128b00: 0xe6202830  swc1        $f0, 0x2830($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128afc) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128B04u;
label_128b04:
    // 0x128b04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128b08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b0c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x128B0Cu;
    {
        const bool branch_taken_0x128b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B0Cu;
        // 0x128b10: 0xe6202834  swc1        $f0, 0x2834($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b0c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128B14u;
label_128b14:
    // 0x128b14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128b18: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b1c: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x128B1Cu;
    {
        const bool branch_taken_0x128b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B1Cu;
        // 0x128b20: 0xe6202838  swc1        $f0, 0x2838($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10296), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b1c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128B24u;
label_128b24:
    // 0x128b24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128b28: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b2c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x128B2Cu;
    {
        const bool branch_taken_0x128b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B2Cu;
        // 0x128b30: 0xe620283c  swc1        $f0, 0x283C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b2c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128B34u;
label_128b34:
    // 0x128b34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128b38: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b3c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x128B3Cu;
    {
        const bool branch_taken_0x128b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B3Cu;
        // 0x128b40: 0xe6202bd0  swc1        $f0, 0x2BD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b3c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128B44u;
label_128b44:
    // 0x128b44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128b48: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b4c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x128B4Cu;
    {
        const bool branch_taken_0x128b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B4Cu;
        // 0x128b50: 0xe6202bd4  swc1        $f0, 0x2BD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b4c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128B54u;
label_128b54:
    // 0x128b54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128b58: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b5c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x128B5Cu;
    {
        const bool branch_taken_0x128b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B5Cu;
        // 0x128b60: 0xe6202bd8  swc1        $f0, 0x2BD8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b5c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128B64u;
label_128b64:
    // 0x128b64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128b68: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b6c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x128B6Cu;
    {
        const bool branch_taken_0x128b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B6Cu;
        // 0x128b70: 0xe6202bdc  swc1        $f0, 0x2BDC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b6c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128B74u;
label_128b74:
    // 0x128b74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128b78: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x128b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x128b7c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x128B7Cu;
    {
        const bool branch_taken_0x128b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B7Cu;
        // 0x128b80: 0xae232be0  sw          $v1, 0x2BE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b7c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128B84u;
label_128b84:
    // 0x128b84: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x128b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128b88: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x128b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x128b8c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x128b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128b90: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x128B90u;
    {
        const bool branch_taken_0x128b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B90u;
        // 0x128b94: 0xae222d60  sw          $v0, 0x2D60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b90) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128B98u;
label_128b98:
    // 0x128b98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128b9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128ba0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x128BA0u;
    {
        const bool branch_taken_0x128ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BA0u;
        // 0x128ba4: 0xe6202d64  swc1        $f0, 0x2D64($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11620), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ba0) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128BA8u;
label_128ba8:
    // 0x128ba8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128bac: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x128bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x128bb0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x128BB0u;
    {
        const bool branch_taken_0x128bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BB0u;
        // 0x128bb4: 0xae232d24  sw          $v1, 0x2D24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bb0) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128BB8u;
label_128bb8:
    // 0x128bb8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x128bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128bbc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x128bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x128bc0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x128bc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128bc4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x128BC4u;
    {
        const bool branch_taken_0x128bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BC4u;
        // 0x128bc8: 0xae222d1c  sw          $v0, 0x2D1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bc4) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128BCCu;
label_128bcc:
    // 0x128bcc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128bd0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x128bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x128bd4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x128BD4u;
    {
        const bool branch_taken_0x128bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BD4u;
        // 0x128bd8: 0xae232d30  sw          $v1, 0x2D30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bd4) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128BDCu;
label_128bdc:
    // 0x128bdc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128be0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128be4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x128BE4u;
    {
        const bool branch_taken_0x128be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BE4u;
        // 0x128be8: 0xe6202d38  swc1        $f0, 0x2D38($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128be4) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128BECu;
label_128bec:
    // 0x128bec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128bf0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128bf4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x128BF4u;
    {
        const bool branch_taken_0x128bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BF4u;
        // 0x128bf8: 0xe6202d3c  swc1        $f0, 0x2D3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11580), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bf4) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128BFCu;
label_128bfc:
    // 0x128bfc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128c00: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128c04: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x128C04u;
    {
        const bool branch_taken_0x128c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C04u;
        // 0x128c08: 0xe6202d34  swc1        $f0, 0x2D34($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c04) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128C0Cu;
label_128c0c:
    // 0x128c0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128c10: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128c14: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x128C14u;
    {
        const bool branch_taken_0x128c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C14u;
        // 0x128c18: 0xe6202d40  swc1        $f0, 0x2D40($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11584), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c14) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128C1Cu;
label_128c1c:
    // 0x128c1c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128c20: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x128c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x128c24: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x128c24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x128c28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x128c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x128c2c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128c30: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x128c30u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x128c34: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x128C34u;
    SET_GPR_U32(ctx, 31, 0x128C3Cu);
    ctx->pc = 0x128C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C34u;
    // 0x128c38: 0xe6202d44  swc1        $f0, 0x2D44($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11588), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x128C34u, 0x128C3Cu)) {
        return;
    }
    ctx->pc = 0x128C3Cu;
label_128c3c:
    // 0x128c3c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x128C3Cu;
    {
        const bool branch_taken_0x128c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C3Cu;
        // 0x128c40: 0xe6202d44  swc1        $f0, 0x2D44($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c3c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128C44u;
label_128c44:
    // 0x128c44: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x128c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128c48: 0x26240350  addiu       $a0, $s1, 0x350
    ctx->pc = 0x128c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
    // 0x128c4c: 0xc043ce6  jal         func_10F398
    ctx->pc = 0x128C4Cu;
    SET_GPR_U32(ctx, 31, 0x128C54u);
    ctx->pc = 0x128C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C4Cu;
    // 0x128c50: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F398u, 0x128C4Cu, 0x128C54u)) {
        return;
    }
    ctx->pc = 0x128C54u;
label_128c54:
    // 0x128c54: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x128C54u;
    {
        const bool branch_taken_0x128c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C54u;
        // 0x128c58: 0xae222d68  sw          $v0, 0x2D68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c54) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128C5Cu;
label_128c5c:
    // 0x128c5c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x128c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128c60: 0x26302d74  addiu       $s0, $s1, 0x2D74
    ctx->pc = 0x128c60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 11636));
    // 0x128c64: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x128c64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x128c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c6c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x128c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x128c70: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x128C70u;
    SET_GPR_U32(ctx, 31, 0x128C78u);
    ctx->pc = 0x128C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C70u;
    // 0x128c74: 0x24c6c7c0  addiu       $a2, $a2, -0x3840 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x128C70u, 0x128C78u)) {
        return;
    }
    ctx->pc = 0x128C78u;
label_128c78:
    // 0x128c78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c7c: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x128c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x128c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c84: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x128C84u;
    SET_GPR_U32(ctx, 31, 0x128C8Cu);
    ctx->pc = 0x128C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C84u;
    // 0x128c88: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x128C84u, 0x128C8Cu)) {
        return;
    }
    ctx->pc = 0x128C8Cu;
label_128c8c:
    // 0x128c8c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x128C8Cu;
    {
        const bool branch_taken_0x128c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C8Cu;
        // 0x128c90: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c8c) {
            ctx->pc = 0x128CC8u;
            goto label_128cc8;
        }
    }
    ctx->pc = 0x128C94u;
label_128c94:
    // 0x128c94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128c98: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128c9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x128C9Cu;
    {
        const bool branch_taken_0x128c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C9Cu;
        // 0x128ca0: 0xe6202d6c  swc1        $f0, 0x2D6C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11628), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c9c) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128CA4u;
label_128ca4:
    // 0x128ca4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128ca8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x128ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128cac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128CACu;
    {
        const bool branch_taken_0x128cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128CACu;
        // 0x128cb0: 0xe6202d70  swc1        $f0, 0x2D70($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11632), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128cac) {
            ctx->pc = 0x128CC4u;
            goto label_128cc4;
        }
    }
    ctx->pc = 0x128CB4u;
label_128cb4:
    // 0x128cb4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x128cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128cb8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x128cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x128cbc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x128cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128cc0: 0xae222d84  sw          $v0, 0x2D84($s1)
    ctx->pc = 0x128cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11652), GPR_U32(ctx, 2));
label_128cc4:
    // 0x128cc4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x128cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_128cc8:
    // 0x128cc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ccc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128cd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x128cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128cd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x128cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128cd8: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x128CD8u;
    SET_GPR_U32(ctx, 31, 0x128CE0u);
    ctx->pc = 0x128CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128CD8u;
    // 0x128cdc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x128CD8u, 0x128CE0u)) {
        return;
    }
    ctx->pc = 0x128CE0u;
label_128ce0:
    // 0x128ce0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x128ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128ce4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x128ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128ce8: 0x5460fe4d  bnel        $v1, $zero, . + 4 + (-0x1B3 << 2)
    ctx->pc = 0x128CE8u;
    {
        const bool branch_taken_0x128ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x128ce8) {
            ctx->pc = 0x128CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128CE8u;
            // 0x128cec: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128620;
        }
    }
    ctx->pc = 0x128CF0u;
label_128cf0:
    // 0x128cf0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x128cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x128cf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x128cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cf8: 0x8c46ee88  lw          $a2, -0x1178($v0)
    ctx->pc = 0x128cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BEE88u));
    // 0x128cfc: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x128CFCu;
    SET_GPR_U32(ctx, 31, 0x128D04u);
    ctx->pc = 0x128D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128CFCu;
    // 0x128d00: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x128CFCu, 0x128D04u)) {
        return;
    }
    ctx->pc = 0x128D04u;
label_128d04:
    // 0x128d04: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x128d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128d08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x128d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128d0c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x128D0Cu;
    {
        const bool branch_taken_0x128d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D0Cu;
        // 0x128d10: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d0c) {
            ctx->pc = 0x128E50u;
            goto label_128e50;
        }
    }
    ctx->pc = 0x128D14u;
    // 0x128d14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x128d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_128d18:
    // 0x128d18: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x128d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x128d1c: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x128d1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x128d20: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x128D20u;
    {
        const bool branch_taken_0x128d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D20u;
        // 0x128d24: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d20) {
            ctx->pc = 0x128E18u;
            goto label_128e18;
        }
    }
    ctx->pc = 0x128D28u;
    // 0x128d28: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x128d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x128d2c: 0x2442c940  addiu       $v0, $v0, -0x36C0
    ctx->pc = 0x128d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953280));
    // 0x128d30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x128d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128d34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x128d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128d38: 0x800008  jr          $a0
    ctx->pc = 0x128D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x128D40u: goto label_128d40;
            case 0x128D50u: goto label_128d50;
            case 0x128DA0u: goto label_128da0;
            case 0x128DB4u: goto label_128db4;
            case 0x128DD4u: goto label_128dd4;
            case 0x128DECu: goto label_128dec;
            case 0x128E04u: goto label_128e04;
            case 0x128E18u: goto label_128e18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128D38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x128D40u;
label_128d40:
    // 0x128d40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x128d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128d44: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x128d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x128d48: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x128D48u;
    {
        const bool branch_taken_0x128d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D48u;
        // 0x128d4c: 0xae2327a0  sw          $v1, 0x27A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d48) {
            ctx->pc = 0x128E18u;
            goto label_128e18;
        }
    }
    ctx->pc = 0x128D50u;
label_128d50:
    // 0x128d50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x128d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128d54: 0x26321510  addiu       $s2, $s1, 0x1510
    ctx->pc = 0x128d54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 5392));
    // 0x128d58: 0x8e441294  lw          $a0, 0x1294($s2)
    ctx->pc = 0x128d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4756)));
    // 0x128d5c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128D5Cu;
    {
        const bool branch_taken_0x128d5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D5Cu;
        // 0x128d60: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d5c) {
            ctx->pc = 0x128D6Cu;
            goto label_128d6c;
        }
    }
    ctx->pc = 0x128D64u;
    // 0x128d64: 0xc0808d4  jal         func_202350
    ctx->pc = 0x128D64u;
    SET_GPR_U32(ctx, 31, 0x128D6Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x128D64u, 0x128D6Cu)) {
        return;
    }
    ctx->pc = 0x128D6Cu;
label_128d6c:
    // 0x128d6c: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x128D6Cu;
    {
        const bool branch_taken_0x128d6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D6Cu;
        // 0x128d70: 0xae401294  sw          $zero, 0x1294($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d6c) {
            ctx->pc = 0x128E18u;
            goto label_128e18;
        }
    }
    ctx->pc = 0x128D74u;
    // 0x128d74: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x128D74u;
    SET_GPR_U32(ctx, 31, 0x128D7Cu);
    ctx->pc = 0x128D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D74u;
    // 0x128d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x128D74u, 0x128D7Cu)) {
        return;
    }
    ctx->pc = 0x128D7Cu;
label_128d7c:
    // 0x128d7c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x128d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x128d80: 0xc080924  jal         func_202490
    ctx->pc = 0x128D80u;
    SET_GPR_U32(ctx, 31, 0x128D88u);
    ctx->pc = 0x128D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D80u;
    // 0x128d84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x128D80u, 0x128D88u)) {
        return;
    }
    ctx->pc = 0x128D88u;
label_128d88:
    // 0x128d88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d8c: 0xae421294  sw          $v0, 0x1294($s2)
    ctx->pc = 0x128d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4756), GPR_U32(ctx, 2));
    // 0x128d90: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x128D90u;
    SET_GPR_U32(ctx, 31, 0x128D98u);
    ctx->pc = 0x128D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128D90u;
    // 0x128d94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x128D90u, 0x128D98u)) {
        return;
    }
    ctx->pc = 0x128D98u;
label_128d98:
    // 0x128d98: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x128D98u;
    {
        const bool branch_taken_0x128d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D98u;
        // 0x128d9c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d98) {
            ctx->pc = 0x128E1Cu;
            goto label_128e1c;
        }
    }
    ctx->pc = 0x128DA0u;
label_128da0:
    // 0x128da0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x128da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128da4: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x128da4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x128da8: 0x24c6c7d0  addiu       $a2, $a2, -0x3830
    ctx->pc = 0x128da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952912));
    // 0x128dac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128DACu;
    {
        const bool branch_taken_0x128dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DACu;
        // 0x128db0: 0x26240c30  addiu       $a0, $s1, 0xC30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dac) {
            ctx->pc = 0x128DC4u;
            goto label_128dc4;
        }
    }
    ctx->pc = 0x128DB4u;
label_128db4:
    // 0x128db4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x128db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128db8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x128db8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x128dbc: 0x24c6c7d0  addiu       $a2, $a2, -0x3830
    ctx->pc = 0x128dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952912));
    // 0x128dc0: 0x26240c38  addiu       $a0, $s1, 0xC38
    ctx->pc = 0x128dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3128));
label_128dc4:
    // 0x128dc4: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x128DC4u;
    SET_GPR_U32(ctx, 31, 0x128DCCu);
    ctx->pc = 0x128DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DC4u;
    // 0x128dc8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x128DC4u, 0x128DCCu)) {
        return;
    }
    ctx->pc = 0x128DCCu;
label_128dcc:
    // 0x128dcc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x128DCCu;
    {
        const bool branch_taken_0x128dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DCCu;
        // 0x128dd0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dcc) {
            ctx->pc = 0x128E1Cu;
            goto label_128e1c;
        }
    }
    ctx->pc = 0x128DD4u;
label_128dd4:
    // 0x128dd4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x128dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128dd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x128dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ddc: 0xc081b56  jal         func_206D58
    ctx->pc = 0x128DDCu;
    SET_GPR_U32(ctx, 31, 0x128DE4u);
    ctx->pc = 0x128DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DDCu;
    // 0x128de0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x128DDCu, 0x128DE4u)) {
        return;
    }
    ctx->pc = 0x128DE4u;
label_128de4:
    // 0x128de4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x128DE4u;
    {
        const bool branch_taken_0x128de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DE4u;
        // 0x128de8: 0xae222c30  sw          $v0, 0x2C30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128de4) {
            ctx->pc = 0x128E18u;
            goto label_128e18;
        }
    }
    ctx->pc = 0x128DECu;
label_128dec:
    // 0x128dec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x128decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128df0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x128df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128df4: 0xc081b56  jal         func_206D58
    ctx->pc = 0x128DF4u;
    SET_GPR_U32(ctx, 31, 0x128DFCu);
    ctx->pc = 0x128DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128DF4u;
    // 0x128df8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x128DF4u, 0x128DFCu)) {
        return;
    }
    ctx->pc = 0x128DFCu;
label_128dfc:
    // 0x128dfc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x128DFCu;
    {
        const bool branch_taken_0x128dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DFCu;
        // 0x128e00: 0xae2228c4  sw          $v0, 0x28C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dfc) {
            ctx->pc = 0x128E18u;
            goto label_128e18;
        }
    }
    ctx->pc = 0x128E04u;
label_128e04:
    // 0x128e04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x128e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128e08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x128e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e0c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x128E0Cu;
    SET_GPR_U32(ctx, 31, 0x128E14u);
    ctx->pc = 0x128E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E0Cu;
    // 0x128e10: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x128E0Cu, 0x128E14u)) {
        return;
    }
    ctx->pc = 0x128E14u;
label_128e14:
    // 0x128e14: 0xae2228c8  sw          $v0, 0x28C8($s1)
    ctx->pc = 0x128e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10440), GPR_U32(ctx, 2));
label_128e18:
    // 0x128e18: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x128e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_128e1c:
    // 0x128e1c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x128e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x128e20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128e24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x128e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128e28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x128e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128e2c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x128E2Cu;
    SET_GPR_U32(ctx, 31, 0x128E34u);
    ctx->pc = 0x128E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E2Cu;
    // 0x128e30: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x128E2Cu, 0x128E34u)) {
        return;
    }
    ctx->pc = 0x128E34u;
label_128e34:
    // 0x128e34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x128e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128e38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x128e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128e3c: 0xae231500  sw          $v1, 0x1500($s1)
    ctx->pc = 0x128e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5376), GPR_U32(ctx, 3));
    // 0x128e40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x128e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x128e44: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x128E44u;
    {
        const bool branch_taken_0x128e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128E44u;
        // 0x128e48: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e44) {
            ctx->pc = 0x128D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128d18;
        }
    }
    ctx->pc = 0x128E4Cu;
    // 0x128e4c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x128e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_128e50:
    // 0x128e50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128e54: 0x8c46ee90  lw          $a2, -0x1170($v0)
    ctx->pc = 0x128e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962832)));
    // 0x128e58: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x128E58u;
    SET_GPR_U32(ctx, 31, 0x128E60u);
    ctx->pc = 0x128E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128E58u;
    // 0x128e5c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x128E58u, 0x128E60u)) {
        return;
    }
    ctx->pc = 0x128E60u;
label_128e60:
    // 0x128e60: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x128e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128e64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x128e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128e68: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x128E68u;
    {
        const bool branch_taken_0x128e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128e68) {
            ctx->pc = 0x128E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128E68u;
            // 0x128e6c: 0xae342c50  sw          $s4, 0x2C50($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 11344), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128E70u;
            goto label_128e70;
        }
    }
    ctx->pc = 0x128E70u;
label_128e70:
    // 0x128e70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x128e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128e74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x128e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128e78: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x128E78u;
    {
        const bool branch_taken_0x128e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x128E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128E78u;
        // 0x128e7c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128e78) {
            ctx->pc = 0x128F38u;
            goto label_128f38;
        }
    }
    ctx->pc = 0x128E80u;
    // 0x128e80: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x128e80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128e84: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x128e84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128e88: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x128e88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128e8c: 0x3c120069  lui         $s2, 0x69
    ctx->pc = 0x128e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)105 << 16));
    // 0x128e90: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x128e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x128e94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x128e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128e98: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x128e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x128e9c: 0x0  nop
    ctx->pc = 0x128e9cu;
    // NOP
label_128ea0:
    // 0x128ea0: 0x5073000b  beql        $v1, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x128EA0u;
    {
        const bool branch_taken_0x128ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x128ea0) {
            ctx->pc = 0x128EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128EA0u;
            // 0x128ea4: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128ED0u;
            goto label_128ed0;
        }
    }
    ctx->pc = 0x128EA8u;
    // 0x128ea8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x128EA8u;
    {
        const bool branch_taken_0x128ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x128ea8) {
            ctx->pc = 0x128EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128EA8u;
            // 0x128eac: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128EC8u;
            goto label_128ec8;
        }
    }
    ctx->pc = 0x128EB0u;
    // 0x128eb0: 0x50760009  beql        $v1, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x128EB0u;
    {
        const bool branch_taken_0x128eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        if (branch_taken_0x128eb0) {
            ctx->pc = 0x128EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128EB0u;
            // 0x128eb4: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128ED8u;
            goto label_128ed8;
        }
    }
    ctx->pc = 0x128EB8u;
    // 0x128eb8: 0x1075000c  beq         $v1, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x128EB8u;
    {
        const bool branch_taken_0x128eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x128EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EB8u;
        // 0x128ebc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128eb8) {
            ctx->pc = 0x128EECu;
            goto label_128eec;
        }
    }
    ctx->pc = 0x128EC0u;
    // 0x128ec0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x128EC0u;
    {
        const bool branch_taken_0x128ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EC0u;
        // 0x128ec4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ec0) {
            ctx->pc = 0x128F10u;
            goto label_128f10;
        }
    }
    ctx->pc = 0x128EC8u;
label_128ec8:
    // 0x128ec8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x128EC8u;
    {
        const bool branch_taken_0x128ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EC8u;
        // 0x128ecc: 0xae222c6c  sw          $v0, 0x2C6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ec8) {
            ctx->pc = 0x128F08u;
            goto label_128f08;
        }
    }
    ctx->pc = 0x128ED0u;
label_128ed0:
    // 0x128ed0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x128ED0u;
    {
        const bool branch_taken_0x128ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128ED0u;
        // 0x128ed4: 0x26242d48  addiu       $a0, $s1, 0x2D48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ed0) {
            ctx->pc = 0x128EDCu;
            goto label_128edc;
        }
    }
    ctx->pc = 0x128ED8u;
label_128ed8:
    // 0x128ed8: 0x26242d50  addiu       $a0, $s1, 0x2D50
    ctx->pc = 0x128ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11600));
label_128edc:
    // 0x128edc: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x128EDCu;
    SET_GPR_U32(ctx, 31, 0x128EE4u);
    ctx->pc = 0x128EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128EDCu;
    // 0x128ee0: 0x2646c7e8  addiu       $a2, $s2, -0x3818 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x128EDCu, 0x128EE4u)) {
        return;
    }
    ctx->pc = 0x128EE4u;
label_128ee4:
    // 0x128ee4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x128EE4u;
    {
        const bool branch_taken_0x128ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EE4u;
        // 0x128ee8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ee4) {
            ctx->pc = 0x128F0Cu;
            goto label_128f0c;
        }
    }
    ctx->pc = 0x128EECu;
label_128eec:
    // 0x128eec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x128eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x128ef0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128EF0u;
    {
        const bool branch_taken_0x128ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EF0u;
        // 0x128ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128ef0) {
            ctx->pc = 0x128F08u;
            goto label_128f08;
        }
    }
    ctx->pc = 0x128EF8u;
    // 0x128ef8: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x128ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x128efc: 0xc04eef0  jal         func_13BBC0
    ctx->pc = 0x128EFCu;
    SET_GPR_U32(ctx, 31, 0x128F04u);
    ctx->pc = 0x128F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128EFCu;
    // 0x128f00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x128EFCu, 0x128F04u)) {
        return;
    }
    ctx->pc = 0x128F04u;
label_128f04:
    // 0x128f04: 0xae332d7c  sw          $s3, 0x2D7C($s1)
    ctx->pc = 0x128f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11644), GPR_U32(ctx, 19));
label_128f08:
    // 0x128f08: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x128f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_128f0c:
    // 0x128f0c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x128f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_128f10:
    // 0x128f10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128f14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x128f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128f18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x128f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128f1c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x128F1Cu;
    SET_GPR_U32(ctx, 31, 0x128F24u);
    ctx->pc = 0x128F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F1Cu;
    // 0x128f20: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x128F1Cu, 0x128F24u)) {
        return;
    }
    ctx->pc = 0x128F24u;
label_128f24:
    // 0x128f24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x128f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128f28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x128f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128f2c: 0x5460ffdc  bnel        $v1, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x128F2Cu;
    {
        const bool branch_taken_0x128f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x128f2c) {
            ctx->pc = 0x128F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128F2Cu;
            // 0x128f30: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128ea0;
        }
    }
    ctx->pc = 0x128F34u;
    // 0x128f34: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x128f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_128f38:
    // 0x128f38: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x128f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128f3c: 0x8c4647bc  lw          $a2, 0x47BC($v0)
    ctx->pc = 0x128f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18364)));
    // 0x128f40: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x128F40u;
    SET_GPR_U32(ctx, 31, 0x128F48u);
    ctx->pc = 0x128F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F40u;
    // 0x128f44: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x128F40u, 0x128F48u)) {
        return;
    }
    ctx->pc = 0x128F48u;
label_128f48:
    // 0x128f48: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x128f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128f4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x128f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128f50: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x128F50u;
    {
        const bool branch_taken_0x128f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128f50) {
            ctx->pc = 0x128F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128F50u;
            // 0x128f54: 0x8e221500  lw          $v0, 0x1500($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128FA8u;
            goto label_128fa8;
        }
    }
    ctx->pc = 0x128F58u;
    // 0x128f58: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x128f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128f5c: 0x0  nop
    ctx->pc = 0x128f5cu;
    // NOP
label_128f60:
    // 0x128f60: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x128f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x128f64: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128F64u;
    {
        const bool branch_taken_0x128f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F64u;
        // 0x128f68: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f64) {
            ctx->pc = 0x128F80u;
            goto label_128f80;
        }
    }
    ctx->pc = 0x128F6Cu;
    // 0x128f6c: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x128f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x128f70: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x128F70u;
    {
        const bool branch_taken_0x128f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128f70) {
            ctx->pc = 0x128F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128F70u;
            // 0x128f74: 0xae222c70  sw          $v0, 0x2C70($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 11376), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128F78u;
            goto label_128f78;
        }
    }
    ctx->pc = 0x128F78u;
label_128f78:
    // 0x128f78: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x128f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128f7c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x128f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_128f80:
    // 0x128f80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128f84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x128f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128f88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x128f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128f8c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x128F8Cu;
    SET_GPR_U32(ctx, 31, 0x128F94u);
    ctx->pc = 0x128F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128F8Cu;
    // 0x128f90: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x128F8Cu, 0x128F94u)) {
        return;
    }
    ctx->pc = 0x128F94u;
label_128f94:
    // 0x128f94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x128f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128f98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x128f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128f9c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x128F9Cu;
    {
        const bool branch_taken_0x128f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128F9Cu;
        // 0x128fa0: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128f9c) {
            ctx->pc = 0x128F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128f60;
        }
    }
    ctx->pc = 0x128FA4u;
    // 0x128fa4: 0x8e221500  lw          $v0, 0x1500($s1)
    ctx->pc = 0x128fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5376)));
label_128fa8:
    // 0x128fa8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x128FA8u;
    {
        const bool branch_taken_0x128fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128FA8u;
        // 0x128fac: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128fa8) {
            ctx->pc = 0x128FBCu;
            goto label_128fbc;
        }
    }
    ctx->pc = 0x128FB0u;
    // 0x128fb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fb4: 0xc04eef0  jal         func_13BBC0
    ctx->pc = 0x128FB4u;
    SET_GPR_U32(ctx, 31, 0x128FBCu);
    ctx->pc = 0x128FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128FB4u;
    // 0x128fb8: 0x8c8500c4  lw          $a1, 0xC4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x128FB4u, 0x128FBCu)) {
        return;
    }
    ctx->pc = 0x128FBCu;
label_128fbc:
    // 0x128fbc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x128fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x128fc0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x128fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x128fc4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x128fc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x128fc8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x128fc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x128fcc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x128fccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x128fd0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x128fd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x128fd4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x128fd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x128fd8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x128fd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x128fdc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x128fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x128fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x128FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128FE0u;
        // 0x128fe4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128FE8u;
}
