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

// Function: sub_00207F80
// Address: 0x207f80 - 0x208168
void sub_00207F80_0x207f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207F80_0x207f80");
#endif

    switch (ctx->pc) {
        case 0x207f80u: goto label_207f80;
        case 0x207f84u: goto label_207f84;
        case 0x207f88u: goto label_207f88;
        case 0x207f8cu: goto label_207f8c;
        case 0x207f90u: goto label_207f90;
        case 0x207f94u: goto label_207f94;
        case 0x207f98u: goto label_207f98;
        case 0x207f9cu: goto label_207f9c;
        case 0x207fa0u: goto label_207fa0;
        case 0x207fa4u: goto label_207fa4;
        case 0x207fa8u: goto label_207fa8;
        case 0x207facu: goto label_207fac;
        case 0x207fb0u: goto label_207fb0;
        case 0x207fb4u: goto label_207fb4;
        case 0x207fb8u: goto label_207fb8;
        case 0x207fbcu: goto label_207fbc;
        case 0x207fc0u: goto label_207fc0;
        case 0x207fc4u: goto label_207fc4;
        case 0x207fc8u: goto label_207fc8;
        case 0x207fccu: goto label_207fcc;
        case 0x207fd0u: goto label_207fd0;
        case 0x207fd4u: goto label_207fd4;
        case 0x207fd8u: goto label_207fd8;
        case 0x207fdcu: goto label_207fdc;
        case 0x207fe0u: goto label_207fe0;
        case 0x207fe4u: goto label_207fe4;
        case 0x207fe8u: goto label_207fe8;
        case 0x207fecu: goto label_207fec;
        case 0x207ff0u: goto label_207ff0;
        case 0x207ff4u: goto label_207ff4;
        case 0x207ff8u: goto label_207ff8;
        case 0x207ffcu: goto label_207ffc;
        case 0x208000u: goto label_208000;
        case 0x208004u: goto label_208004;
        case 0x208008u: goto label_208008;
        case 0x20800cu: goto label_20800c;
        case 0x208010u: goto label_208010;
        case 0x208014u: goto label_208014;
        case 0x208018u: goto label_208018;
        case 0x20801cu: goto label_20801c;
        case 0x208020u: goto label_208020;
        case 0x208024u: goto label_208024;
        case 0x208028u: goto label_208028;
        case 0x20802cu: goto label_20802c;
        case 0x208030u: goto label_208030;
        case 0x208034u: goto label_208034;
        case 0x208038u: goto label_208038;
        case 0x20803cu: goto label_20803c;
        case 0x208040u: goto label_208040;
        case 0x208044u: goto label_208044;
        case 0x208048u: goto label_208048;
        case 0x20804cu: goto label_20804c;
        case 0x208050u: goto label_208050;
        case 0x208054u: goto label_208054;
        case 0x208058u: goto label_208058;
        case 0x20805cu: goto label_20805c;
        case 0x208060u: goto label_208060;
        case 0x208064u: goto label_208064;
        case 0x208068u: goto label_208068;
        case 0x20806cu: goto label_20806c;
        case 0x208070u: goto label_208070;
        case 0x208074u: goto label_208074;
        case 0x208078u: goto label_208078;
        case 0x20807cu: goto label_20807c;
        case 0x208080u: goto label_208080;
        case 0x208084u: goto label_208084;
        case 0x208088u: goto label_208088;
        case 0x20808cu: goto label_20808c;
        case 0x208090u: goto label_208090;
        case 0x208094u: goto label_208094;
        case 0x208098u: goto label_208098;
        case 0x20809cu: goto label_20809c;
        case 0x2080a0u: goto label_2080a0;
        case 0x2080a4u: goto label_2080a4;
        case 0x2080a8u: goto label_2080a8;
        case 0x2080acu: goto label_2080ac;
        case 0x2080b0u: goto label_2080b0;
        case 0x2080b4u: goto label_2080b4;
        case 0x2080b8u: goto label_2080b8;
        case 0x2080bcu: goto label_2080bc;
        case 0x2080c0u: goto label_2080c0;
        case 0x2080c4u: goto label_2080c4;
        case 0x2080c8u: goto label_2080c8;
        case 0x2080ccu: goto label_2080cc;
        case 0x2080d0u: goto label_2080d0;
        case 0x2080d4u: goto label_2080d4;
        case 0x2080d8u: goto label_2080d8;
        case 0x2080dcu: goto label_2080dc;
        case 0x2080e0u: goto label_2080e0;
        case 0x2080e4u: goto label_2080e4;
        case 0x2080e8u: goto label_2080e8;
        case 0x2080ecu: goto label_2080ec;
        case 0x2080f0u: goto label_2080f0;
        case 0x2080f4u: goto label_2080f4;
        case 0x2080f8u: goto label_2080f8;
        case 0x2080fcu: goto label_2080fc;
        case 0x208100u: goto label_208100;
        case 0x208104u: goto label_208104;
        case 0x208108u: goto label_208108;
        case 0x20810cu: goto label_20810c;
        case 0x208110u: goto label_208110;
        case 0x208114u: goto label_208114;
        case 0x208118u: goto label_208118;
        case 0x20811cu: goto label_20811c;
        case 0x208120u: goto label_208120;
        case 0x208124u: goto label_208124;
        case 0x208128u: goto label_208128;
        case 0x20812cu: goto label_20812c;
        case 0x208130u: goto label_208130;
        case 0x208134u: goto label_208134;
        case 0x208138u: goto label_208138;
        case 0x20813cu: goto label_20813c;
        case 0x208140u: goto label_208140;
        case 0x208144u: goto label_208144;
        case 0x208148u: goto label_208148;
        case 0x20814cu: goto label_20814c;
        case 0x208150u: goto label_208150;
        case 0x208154u: goto label_208154;
        case 0x208158u: goto label_208158;
        case 0x20815cu: goto label_20815c;
        case 0x208160u: goto label_208160;
        case 0x208164u: goto label_208164;
        default: break;
    }

    ctx->pc = 0x207f80u;

label_207f80:
    // 0x207f80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x207f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_207f84:
    // 0x207f84: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x207f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_207f88:
    // 0x207f88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x207f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207f8c:
    // 0x207f8c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x207f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_207f90:
    // 0x207f90: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x207f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_207f94:
    // 0x207f94: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x207f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_207f98:
    // 0x207f98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x207f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_207f9c:
    // 0x207f9c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x207f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_207fa0:
    // 0x207fa0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x207fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_207fa4:
    // 0x207fa4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x207fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_207fa8:
    // 0x207fa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_207fac:
    // 0x207fac: 0xc081f56  jal         func_207D58
label_207fb0:
    if (ctx->pc == 0x207FB0u) {
        ctx->pc = 0x207FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FACu;
        // 0x207fb0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207FB4u;
        goto label_207fb4;
    }
    ctx->pc = 0x207FACu;
    SET_GPR_U32(ctx, 31, 0x207FB4u);
    ctx->pc = 0x207FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207FACu;
    // 0x207fb0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x207D58u, 0x207FACu, 0x207FB4u)) {
        return;
    }
    ctx->pc = 0x207FB4u;
label_207fb4:
    // 0x207fb4: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x207fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_207fb8:
    // 0x207fb8: 0x18400054  blez        $v0, . + 4 + (0x54 << 2)
label_207fbc:
    if (ctx->pc == 0x207FBCu) {
        ctx->pc = 0x207FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FB8u;
        // 0x207fbc: 0x2637014c  addiu       $s7, $s1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207FC0u;
        goto label_207fc0;
    }
    ctx->pc = 0x207FB8u;
    {
        const bool branch_taken_0x207fb8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x207FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FB8u;
        // 0x207fbc: 0x2637014c  addiu       $s7, $s1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fb8) {
            ctx->pc = 0x20810Cu;
            goto label_20810c;
        }
    }
    ctx->pc = 0x207FC0u;
label_207fc0:
    // 0x207fc0: 0x263600a4  addiu       $s6, $s1, 0xA4
    ctx->pc = 0x207fc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
label_207fc4:
    // 0x207fc4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x207fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_207fc8:
    // 0x207fc8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x207fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_207fcc:
    // 0x207fcc: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x207fccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207fd0:
    // 0x207fd0: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x207fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_207fd4:
    // 0x207fd4: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
label_207fd8:
    if (ctx->pc == 0x207FD8u) {
        ctx->pc = 0x207FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FD4u;
        // 0x207fd8: 0x26460001  addiu       $a2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207FDCu;
        goto label_207fdc;
    }
    ctx->pc = 0x207FD4u;
    {
        const bool branch_taken_0x207fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x207FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FD4u;
        // 0x207fd8: 0x26460001  addiu       $a2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fd4) {
            ctx->pc = 0x2080F8u;
            goto label_2080f8;
        }
    }
    ctx->pc = 0x207FDCu;
label_207fdc:
    // 0x207fdc: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x207fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_207fe0:
    // 0x207fe0: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x207fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_207fe4:
    // 0x207fe4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_207fe8:
    if (ctx->pc == 0x207FE8u) {
        ctx->pc = 0x207FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FE4u;
        // 0x207fe8: 0x263500a4  addiu       $s5, $s1, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207FECu;
        goto label_207fec;
    }
    ctx->pc = 0x207FE4u;
    {
        const bool branch_taken_0x207fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FE4u;
        // 0x207fe8: 0x263500a4  addiu       $s5, $s1, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207fe4) {
            ctx->pc = 0x208000u;
            goto label_208000;
        }
    }
    ctx->pc = 0x207FECu;
label_207fec:
    // 0x207fec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x207fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_207ff0:
    // 0x207ff0: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x207ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_207ff4:
    // 0x207ff4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x207ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_207ff8:
    // 0x207ff8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_207ffc:
    if (ctx->pc == 0x207FFCu) {
        ctx->pc = 0x207FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FF8u;
        // 0x207ffc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208000u;
        goto label_208000;
    }
    ctx->pc = 0x207FF8u;
    {
        const bool branch_taken_0x207ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x207FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FF8u;
        // 0x207ffc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ff8) {
            ctx->pc = 0x208028u;
            goto label_208028;
        }
    }
    ctx->pc = 0x208000u;
label_208000:
    // 0x208000: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x208000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208004:
    // 0x208004: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x208004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_208008:
    // 0x208008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20800c:
    // 0x20800c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x20800cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_208010:
    // 0x208010: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x208010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208014:
    // 0x208014: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x208014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
label_208018:
    // 0x208018: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x208018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20801c:
    // 0x20801c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_208020:
    // 0x208020: 0x40f809  jalr        $v0
label_208024:
    if (ctx->pc == 0x208024u) {
        ctx->pc = 0x208024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208020u;
        // 0x208024: 0x109880  sll         $s3, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208028u;
        goto label_208028;
    }
    ctx->pc = 0x208020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208028u);
        ctx->pc = 0x208024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208020u;
        // 0x208024: 0x109880  sll         $s3, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208020u, 0x208028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208028u;
label_208028:
    // 0x208028: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x208028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20802c:
    // 0x20802c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20802cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_208030:
    // 0x208030: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208034:
    // 0x208034: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x208034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_208038:
    // 0x208038: 0x40f809  jalr        $v0
label_20803c:
    if (ctx->pc == 0x20803Cu) {
        ctx->pc = 0x20803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208038u;
        // 0x20803c: 0x24060084  addiu       $a2, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208040u;
        goto label_208040;
    }
    ctx->pc = 0x208038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208040u);
        ctx->pc = 0x20803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208038u;
        // 0x20803c: 0x24060084  addiu       $a2, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208038u, 0x208040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208040u;
label_208040:
    // 0x208040: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x208040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208044:
    // 0x208044: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x208044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_208048:
    // 0x208048: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x208048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20804c:
    // 0x20804c: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x20804cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_208050:
    // 0x208050: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x208050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_208054:
    // 0x208054: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_208058:
    if (ctx->pc == 0x208058u) {
        ctx->pc = 0x208058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208054u;
        // 0x208058: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20805Cu;
        goto label_20805c;
    }
    ctx->pc = 0x208054u;
    {
        const bool branch_taken_0x208054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208054u;
        // 0x208058: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208054) {
            ctx->pc = 0x2080B8u;
            goto label_2080b8;
        }
    }
    ctx->pc = 0x20805Cu;
label_20805c:
    // 0x20805c: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x20805cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_208060:
    // 0x208060: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x208060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_208064:
    // 0x208064: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x208064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_208068:
    // 0x208068: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x208068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_20806c:
    // 0x20806c: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x20806cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_208070:
    // 0x208070: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x208070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_208074:
    // 0x208074: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x208074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_208078:
    // 0x208078: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x208078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_20807c:
    // 0x20807c: 0x686a001f  ldl         $t2, 0x1F($v1)
    ctx->pc = 0x20807cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_208080:
    // 0x208080: 0x6c6a0018  ldr         $t2, 0x18($v1)
    ctx->pc = 0x208080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_208084:
    // 0x208084: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x208084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_208088:
    // 0x208088: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x208088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_20808c:
    // 0x20808c: 0xb088000f  sdl         $t0, 0xF($a0)
    ctx->pc = 0x20808cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_208090:
    // 0x208090: 0xb4880008  sdr         $t0, 0x8($a0)
    ctx->pc = 0x208090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_208094:
    // 0x208094: 0xb0890017  sdl         $t1, 0x17($a0)
    ctx->pc = 0x208094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_208098:
    // 0x208098: 0xb4890010  sdr         $t1, 0x10($a0)
    ctx->pc = 0x208098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_20809c:
    // 0x20809c: 0xb08a001f  sdl         $t2, 0x1F($a0)
    ctx->pc = 0x20809cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2080a0:
    // 0x2080a0: 0xb48a0018  sdr         $t2, 0x18($a0)
    ctx->pc = 0x2080a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2080a4:
    // 0x2080a4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2080a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2080a8:
    // 0x2080a8: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
label_2080ac:
    if (ctx->pc == 0x2080ACu) {
        ctx->pc = 0x2080ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080A8u;
        // 0x2080ac: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2080B0u;
        goto label_2080b0;
    }
    ctx->pc = 0x2080A8u;
    {
        const bool branch_taken_0x2080a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2080ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080A8u;
        // 0x2080ac: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080a8) {
            ctx->pc = 0x208064u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208064;
        }
    }
    ctx->pc = 0x2080B0u;
label_2080b0:
    // 0x2080b0: 0x1000000e  b           . + 4 + (0xE << 2)
label_2080b4:
    if (ctx->pc == 0x2080B4u) {
        ctx->pc = 0x2080B8u;
        goto label_2080b8;
    }
    ctx->pc = 0x2080B0u;
    {
        const bool branch_taken_0x2080b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2080b0) {
            ctx->pc = 0x2080ECu;
            goto label_2080ec;
        }
    }
    ctx->pc = 0x2080B8u;
label_2080b8:
    // 0x2080b8: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x2080b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2080bc:
    // 0x2080bc: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x2080bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_2080c0:
    // 0x2080c0: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x2080c0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_2080c4:
    // 0x2080c4: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x2080c4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_2080c8:
    // 0x2080c8: 0xdc690010  ld          $t1, 0x10($v1)
    ctx->pc = 0x2080c8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_2080cc:
    // 0x2080cc: 0xdc6a0018  ld          $t2, 0x18($v1)
    ctx->pc = 0x2080ccu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_2080d0:
    // 0x2080d0: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x2080d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
label_2080d4:
    // 0x2080d4: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x2080d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
label_2080d8:
    // 0x2080d8: 0xfc890010  sd          $t1, 0x10($a0)
    ctx->pc = 0x2080d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 9));
label_2080dc:
    // 0x2080dc: 0xfc8a0018  sd          $t2, 0x18($a0)
    ctx->pc = 0x2080dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 10));
label_2080e0:
    // 0x2080e0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2080e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2080e4:
    // 0x2080e4: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
label_2080e8:
    if (ctx->pc == 0x2080E8u) {
        ctx->pc = 0x2080E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080E4u;
        // 0x2080e8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2080ECu;
        goto label_2080ec;
    }
    ctx->pc = 0x2080E4u;
    {
        const bool branch_taken_0x2080e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2080E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080E4u;
        // 0x2080e8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080e4) {
            ctx->pc = 0x2080C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2080c0;
        }
    }
    ctx->pc = 0x2080ECu;
label_2080ec:
    // 0x2080ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2080ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2080f0:
    // 0x2080f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2080f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2080f4:
    // 0x2080f4: 0xae85004c  sw          $a1, 0x4C($s4)
    ctx->pc = 0x2080f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 5));
label_2080f8:
    // 0x2080f8: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x2080f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_2080fc:
    // 0x2080fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2080fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_208100:
    // 0x208100: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x208100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_208104:
    // 0x208104: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
label_208108:
    if (ctx->pc == 0x208108u) {
        ctx->pc = 0x208108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208104u;
        // 0x208108: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20810Cu;
        goto label_20810c;
    }
    ctx->pc = 0x208104u;
    {
        const bool branch_taken_0x208104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208104u;
        // 0x208108: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208104) {
            ctx->pc = 0x207FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207fc8;
        }
    }
    ctx->pc = 0x20810Cu;
label_20810c:
    // 0x20810c: 0x8e2301bc  lw          $v1, 0x1BC($s1)
    ctx->pc = 0x20810cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_208110:
    // 0x208110: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x208110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_208114:
    // 0x208114: 0x40f809  jalr        $v0
label_208118:
    if (ctx->pc == 0x208118u) {
        ctx->pc = 0x208118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208114u;
        // 0x208118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20811Cu;
        goto label_20811c;
    }
    ctx->pc = 0x208114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20811Cu);
        ctx->pc = 0x208118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208114u;
        // 0x208118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208114u, 0x20811Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20811Cu;
label_20811c:
    // 0x20811c: 0x8e2301ac  lw          $v1, 0x1AC($s1)
    ctx->pc = 0x20811cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
label_208120:
    // 0x208120: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x208120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_208124:
    // 0x208124: 0x40f809  jalr        $v0
label_208128:
    if (ctx->pc == 0x208128u) {
        ctx->pc = 0x208128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208124u;
        // 0x208128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20812Cu;
        goto label_20812c;
    }
    ctx->pc = 0x208124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20812Cu);
        ctx->pc = 0x208128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208124u;
        // 0x208128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208124u, 0x20812Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20812Cu;
label_20812c:
    // 0x20812c: 0x8e2301ac  lw          $v1, 0x1AC($s1)
    ctx->pc = 0x20812cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
label_208130:
    // 0x208130: 0x8e2401b4  lw          $a0, 0x1B4($s1)
    ctx->pc = 0x208130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_208134:
    // 0x208134: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x208134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_208138:
    // 0x208138: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x208138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20813c:
    // 0x20813c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x20813cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_208140:
    // 0x208140: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x208140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_208144:
    // 0x208144: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x208144u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_208148:
    // 0x208148: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x208148u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20814c:
    // 0x20814c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x20814cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_208150:
    // 0x208150: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x208150u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_208154:
    // 0x208154: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x208154u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_208158:
    // 0x208158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20815c:
    // 0x20815c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20815cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_208160:
    // 0x208160: 0x3e00008  jr          $ra
label_208164:
    if (ctx->pc == 0x208164u) {
        ctx->pc = 0x208164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208160u;
        // 0x208164: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208168u;
        goto label_fallthrough_0x208160;
    }
    ctx->pc = 0x208160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208160u;
        // 0x208164: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x208160:
    ctx->pc = 0x208168u;
}
