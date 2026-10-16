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

// Function: sub_00231788
// Address: 0x231788 - 0x232240
void sub_00231788_0x231788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231788_0x231788");
#endif

    switch (ctx->pc) {
        case 0x2317f4u: goto label_2317f4;
        case 0x231800u: goto label_231800;
        case 0x231810u: goto label_231810;
        case 0x2318e8u: goto label_2318e8;
        case 0x2318f8u: goto label_2318f8;
        case 0x231990u: goto label_231990;
        case 0x231b6cu: goto label_231b6c;
        case 0x231ee0u: goto label_231ee0;
        case 0x231fb8u: goto label_231fb8;
        case 0x2320a8u: goto label_2320a8;
        case 0x232180u: goto label_232180;
        default: break;
    }

    ctx->pc = 0x231788u;

    // 0x231788: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x231788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x23178c: 0x8f868428  lw          $a2, -0x7BD8($gp)
    ctx->pc = 0x23178cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935592)));
    // 0x231790: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x231790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x231794: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x231794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x231798: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x231798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x23179c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23179cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2317a0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2317a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2317a4: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x2317a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2317a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2317a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2317ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2317acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2317b0: 0x8c424170  lw          $v0, 0x4170($v0)
    ctx->pc = 0x2317b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4170u));
    // 0x2317b4: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x2317b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x2317b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2317b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2317bc: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x2317bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2317c0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2317c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2317c4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2317C4u;
    {
        const bool branch_taken_0x2317c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2317C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317C4u;
        // 0x2317c8: 0x2428821  addu        $s1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2317c4) {
            ctx->pc = 0x2317E0u;
            goto label_2317e0;
        }
    }
    ctx->pc = 0x2317CCu;
    // 0x2317cc: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2317ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2317d0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2317d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2317d4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2317d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2317d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2317D8u;
    {
        const bool branch_taken_0x2317d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2317d8) {
            ctx->pc = 0x231808u;
            goto label_231808;
        }
    }
    ctx->pc = 0x2317E0u;
label_2317e0:
    // 0x2317e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2317e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2317e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2317e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2317e8: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2317e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x2317ec: 0xc092848  jal         func_24A120
    ctx->pc = 0x2317ECu;
    SET_GPR_U32(ctx, 31, 0x2317F4u);
    ctx->pc = 0x2317F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317ECu;
    // 0x2317f0: 0x34840010  ori         $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2317ECu, 0x2317F4u)) {
        return;
    }
    ctx->pc = 0x2317F4u;
label_2317f4:
    // 0x2317f4: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x2317f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x2317f8: 0xc09281a  jal         func_24A068
    ctx->pc = 0x2317F8u;
    SET_GPR_U32(ctx, 31, 0x231800u);
    ctx->pc = 0x2317FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317F8u;
    // 0x2317fc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2317F8u, 0x231800u)) {
        return;
    }
    ctx->pc = 0x231800u;
label_231800:
    // 0x231800: 0x10000287  b           . + 4 + (0x287 << 2)
    ctx->pc = 0x231800u;
    {
        const bool branch_taken_0x231800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231800u;
        // 0x231804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231800) {
            ctx->pc = 0x232220u;
            goto label_232220;
        }
    }
    ctx->pc = 0x231808u;
label_231808:
    // 0x231808: 0xc08ba10  jal         func_22E840
    ctx->pc = 0x231808u;
    SET_GPR_U32(ctx, 31, 0x231810u);
    ctx->pc = 0x22E840u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E840u, 0x231808u, 0x231810u)) {
        return;
    }
    ctx->pc = 0x231810u;
label_231810:
    // 0x231810: 0x8f828448  lw          $v0, -0x7BB8($gp)
    ctx->pc = 0x231810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
    // 0x231814: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x231814u;
    {
        const bool branch_taken_0x231814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231814) {
            ctx->pc = 0x231818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231814u;
            // 0x231818: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231828u;
            goto label_231828;
        }
    }
    ctx->pc = 0x23181Cu;
    // 0x23181c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23181cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231820: 0xaf828448  sw          $v0, -0x7BB8($gp)
    ctx->pc = 0x231820u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935624), GPR_U32(ctx, 2));
    // 0x231824: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x231824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_231828:
    // 0x231828: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x231828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23182c: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x23182cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x231830: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x231830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x231834: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x231834u;
    {
        const bool branch_taken_0x231834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x231838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231834u;
        // 0x231838: 0x8f8284b4  lw          $v0, -0x7B4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231834) {
            ctx->pc = 0x2318B4u;
            goto label_2318b4;
        }
    }
    ctx->pc = 0x23183Cu;
    // 0x23183c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23183cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231840: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x231840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x231844: 0x8c63416c  lw          $v1, 0x416C($v1)
    ctx->pc = 0x231844u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x231848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x231848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23184c: 0x90440017  lbu         $a0, 0x17($v0)
    ctx->pc = 0x23184cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23)));
    // 0x231850: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x231850u;
    {
        const bool branch_taken_0x231850 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x231850) {
            ctx->pc = 0x231854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231850u;
            // 0x231854: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231860u;
            goto label_231860;
        }
    }
    ctx->pc = 0x231858u;
    // 0x231858: 0x10000271  b           . + 4 + (0x271 << 2)
    ctx->pc = 0x231858u;
    {
        const bool branch_taken_0x231858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231858u;
        // 0x23185c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231858) {
            ctx->pc = 0x232220u;
            goto label_232220;
        }
    }
    ctx->pc = 0x231860u;
label_231860:
    // 0x231860: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x231860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x231864: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x231864u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x231868: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x231868u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x23186c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x23186cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231870: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x231870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x231874: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x231874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x231878: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x231878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x23187c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23187cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x231880: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x231880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x231884: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x231884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x231888: 0xff828458  sd          $v0, -0x7BA8($gp)
    ctx->pc = 0x231888u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935640), GPR_U64(ctx, 2));
    // 0x23188c: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x23188cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x231890: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x231890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
    // 0x231894: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x231894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x231898: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x231898u;
    {
        const bool branch_taken_0x231898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231898u;
        // 0x23189c: 0x8f8284b4  lw          $v0, -0x7B4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231898) {
            ctx->pc = 0x2318D4u;
            goto label_2318d4;
        }
    }
    ctx->pc = 0x2318A0u;
    // 0x2318a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2318a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2318a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2318A4u;
    {
        const bool branch_taken_0x2318a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318A4u;
        // 0x2318a8: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318a4) {
            ctx->pc = 0x2318C8u;
            goto label_2318c8;
        }
    }
    ctx->pc = 0x2318ACu;
    // 0x2318ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2318ACu;
    {
        const bool branch_taken_0x2318ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318ACu;
        // 0x2318b0: 0xdc435120  ld          $v1, 0x5120($v0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 20768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318ac) {
            ctx->pc = 0x2318D0u;
            goto label_2318d0;
        }
    }
    ctx->pc = 0x2318B4u;
label_2318b4:
    // 0x2318b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2318b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2318b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2318B8u;
    {
        const bool branch_taken_0x2318b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318B8u;
        // 0x2318bc: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318b8) {
            ctx->pc = 0x2318C8u;
            goto label_2318c8;
        }
    }
    ctx->pc = 0x2318C0u;
    // 0x2318c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2318C0u;
    {
        const bool branch_taken_0x2318c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2318C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2318C0u;
        // 0x2318c4: 0xdc435120  ld          $v1, 0x5120($v0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 20768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2318c0) {
            ctx->pc = 0x2318D0u;
            goto label_2318d0;
        }
    }
    ctx->pc = 0x2318C8u;
label_2318c8:
    // 0x2318c8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2318c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x2318cc: 0xdc435290  ld          $v1, 0x5290($v0)
    ctx->pc = 0x2318ccu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x735290u));
label_2318d0:
    // 0x2318d0: 0xff838458  sd          $v1, -0x7BA8($gp)
    ctx->pc = 0x2318d0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935640), GPR_U64(ctx, 3));
label_2318d4:
    // 0x2318d4: 0x8f8284d4  lw          $v0, -0x7B2C($gp)
    ctx->pc = 0x2318d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935764)));
    // 0x2318d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2318D8u;
    {
        const bool branch_taken_0x2318d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2318d8) {
            ctx->pc = 0x2318ECu;
            goto label_2318ec;
        }
    }
    ctx->pc = 0x2318E0u;
    // 0x2318e0: 0xc091d3a  jal         func_2474E8
    ctx->pc = 0x2318E0u;
    SET_GPR_U32(ctx, 31, 0x2318E8u);
    ctx->pc = 0x2474E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2474E8u, 0x2318E0u, 0x2318E8u)) {
        return;
    }
    ctx->pc = 0x2318E8u;
label_2318e8:
    // 0x2318e8: 0xaf8084d4  sw          $zero, -0x7B2C($gp)
    ctx->pc = 0x2318e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935764), GPR_U32(ctx, 0));
label_2318ec:
    // 0x2318ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2318ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2318f0: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x2318F0u;
    SET_GPR_U32(ctx, 31, 0x2318F8u);
    ctx->pc = 0x2318F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2318F0u;
    // 0x2318f4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x2318F0u, 0x2318F8u)) {
        return;
    }
    ctx->pc = 0x2318F8u;
label_2318f8:
    // 0x2318f8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2318f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2318fc: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x2318fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x231900: 0x34a58009  ori         $a1, $a1, 0x8009
    ctx->pc = 0x231900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32777);
    // 0x231904: 0x240a000e  addiu       $t2, $zero, 0xE
    ctx->pc = 0x231904u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x231908: 0x71452389  pcpyld      $a0, $t2, $a1
    ctx->pc = 0x231908u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 5)));
    // 0x23190c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23190cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x231910: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x231910u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x231914: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x231914u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x231918: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x231918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x23191c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23191cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x231920: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x231920u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x231924: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x231924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x231928: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x231928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23192c: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x23192cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x231930: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x231930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x231934: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x231934u;
    {
        const bool branch_taken_0x231934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x231938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231934u;
        // 0x231938: 0xdf8284b8  ld          $v0, -0x7B48($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231934) {
            ctx->pc = 0x231970u;
            goto label_231970;
        }
    }
    ctx->pc = 0x23193Cu;
    // 0x23193c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x23193cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x231940: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x231940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x231944: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x231944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x231948: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x231948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x23194c: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x23194cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x231950: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x231950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x231954: 0x4207b  dsra        $a0, $a0, 1
    ctx->pc = 0x231954u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 1);
    // 0x231958: 0x64182f  dsubu       $v1, $v1, $a0
    ctx->pc = 0x231958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
    // 0x23195c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x23195cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x231960: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x231960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x231964: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x231964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x231968: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x231968u;
    {
        const bool branch_taken_0x231968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231968u;
        // 0x23196c: 0xff838468  sd          $v1, -0x7B98($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935656), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231968) {
            ctx->pc = 0x2319E4u;
            goto label_2319e4;
        }
    }
    ctx->pc = 0x231970u;
label_231970:
    // 0x231970: 0xdf8384c0  ld          $v1, -0x7B40($gp)
    ctx->pc = 0x231970u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935744)));
    // 0x231974: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x231974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x231978: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x231978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x23197c: 0x90844131  lbu         $a0, 0x4131($a0)
    ctx->pc = 0x23197cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x6B4131u));
    // 0x231980: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x231980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x231984: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x231984u;
    {
        const bool branch_taken_0x231984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x231988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231984u;
        // 0x231988: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231984) {
            ctx->pc = 0x2319E0u;
            goto label_2319e0;
        }
    }
    ctx->pc = 0x23198Cu;
    // 0x23198c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x23198cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_231990:
    // 0x231990: 0x42000039  di
    ctx->pc = 0x231990u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x231994: 0x40f  sync.p
    ctx->pc = 0x231994u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x231998: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x231998u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x23199c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23199cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2319a0: 0x0  nop
    ctx->pc = 0x2319a0u;
    // NOP
    // 0x2319a4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2319A4u;
    {
        const bool branch_taken_0x2319a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2319a4) {
            ctx->pc = 0x231990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231990;
        }
    }
    ctx->pc = 0x2319ACu;
    // 0x2319ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2319acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2319b0: 0x9063415d  lbu         $v1, 0x415D($v1)
    ctx->pc = 0x2319b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6B415Du));
    // 0x2319b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2319b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2319b8: 0x90424132  lbu         $v0, 0x4132($v0)
    ctx->pc = 0x2319b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B4132u));
    // 0x2319bc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2319bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2319c0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2319c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2319c4: 0x9084415c  lbu         $a0, 0x415C($a0)
    ctx->pc = 0x2319c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x6B415Cu));
    // 0x2319c8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2319c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2319cc: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2319ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2319d0: 0x42000038  ei
    ctx->pc = 0x2319d0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2319d4: 0x210fc  dsll32      $v0, $v0, 3
    ctx->pc = 0x2319d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 3));
    // 0x2319d8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2319d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2319dc: 0x0  nop
    ctx->pc = 0x2319dcu;
    // NOP
label_2319e0:
    // 0x2319e0: 0xff858468  sd          $a1, -0x7B98($gp)
    ctx->pc = 0x2319e0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935656), GPR_U64(ctx, 5));
label_2319e4:
    // 0x2319e4: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x2319e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2319e8: 0xdf828468  ld          $v0, -0x7B98($gp)
    ctx->pc = 0x2319e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935656)));
    // 0x2319ec: 0x71422389  pcpyld      $a0, $t2, $v0
    ctx->pc = 0x2319ecu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x2319f0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2319f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2319f4: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x2319f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2319f8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2319f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2319fc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2319fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x231a00: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x231a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x231a04: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x231a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x231a08: 0x240a0019  addiu       $t2, $zero, 0x19
    ctx->pc = 0x231a08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x231a0c: 0xdf828468  ld          $v0, -0x7B98($gp)
    ctx->pc = 0x231a0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935656)));
    // 0x231a10: 0x71422389  pcpyld      $a0, $t2, $v0
    ctx->pc = 0x231a10u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x231a14: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x231a14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x231a18: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x231a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x231a1c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x231a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x231a20: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x231a20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x231a24: 0x8e480060  lw          $t0, 0x60($s2)
    ctx->pc = 0x231a24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x231a28: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x231a28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x231a2c: 0x9506001c  lhu         $a2, 0x1C($t0)
    ctx->pc = 0x231a2cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x231a30: 0x9509001e  lhu         $t1, 0x1E($t0)
    ctx->pc = 0x231a30u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 30)));
    // 0x231a34: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x231a34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x231a38: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x231a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x231a3c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x231a3cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x231a40: 0x8d070010  lw          $a3, 0x10($t0)
    ctx->pc = 0x231a40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x231a44: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x231a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x231a48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x231a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x231a4c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x231a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x231a50: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x231a50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x231a54: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x231a54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x231a58: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x231a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x231a5c: 0x30c607ff  andi        $a2, $a2, 0x7FF
    ctx->pc = 0x231a5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2047);
    // 0x231a60: 0x312907ff  andi        $t1, $t1, 0x7FF
    ctx->pc = 0x231a60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2047);
    // 0x231a64: 0x863025  or          $a2, $a0, $a2
    ctx->pc = 0x231a64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x231a68: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x231a68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x231a6c: 0x64e7ffff  daddiu      $a3, $a3, -0x1
    ctx->pc = 0x231a6cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4294967295);
    // 0x231a70: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x231a70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x231a74: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x231a74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x231a78: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x231a78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x231a7c: 0x71462389  pcpyld      $a0, $t2, $a2
    ctx->pc = 0x231a7cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 6)));
    // 0x231a80: 0xff868470  sd          $a2, -0x7B90($gp)
    ctx->pc = 0x231a80u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935664), GPR_U64(ctx, 6));
    // 0x231a84: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x231a84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x231a88: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x231a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x231a8c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x231a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x231a90: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x231a90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x231a94: 0x240a0041  addiu       $t2, $zero, 0x41
    ctx->pc = 0x231a94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x231a98: 0xdf828470  ld          $v0, -0x7B90($gp)
    ctx->pc = 0x231a98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935664)));
    // 0x231a9c: 0x71422389  pcpyld      $a0, $t2, $v0
    ctx->pc = 0x231a9cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x231aa0: 0x7c640020  sq          $a0, 0x20($v1)
    ctx->pc = 0x231aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 4));
    // 0x231aa4: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x231aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x231aa8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x231aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x231aac: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x231aacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x231ab0: 0x240a0047  addiu       $t2, $zero, 0x47
    ctx->pc = 0x231ab0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x231ab4: 0xdf828460  ld          $v0, -0x7BA0($gp)
    ctx->pc = 0x231ab4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x231ab8: 0x71422389  pcpyld      $a0, $t2, $v0
    ctx->pc = 0x231ab8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x231abc: 0x7c640030  sq          $a0, 0x30($v1)
    ctx->pc = 0x231abcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 4));
    // 0x231ac0: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x231ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x231ac4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x231ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x231ac8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x231ac8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x231acc: 0x240a0048  addiu       $t2, $zero, 0x48
    ctx->pc = 0x231accu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x231ad0: 0xdf828460  ld          $v0, -0x7BA0($gp)
    ctx->pc = 0x231ad0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x231ad4: 0x71422389  pcpyld      $a0, $t2, $v0
    ctx->pc = 0x231ad4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x231ad8: 0x7c640040  sq          $a0, 0x40($v1)
    ctx->pc = 0x231ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 4));
    // 0x231adc: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x231adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x231ae0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x231ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x231ae4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x231ae4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x231ae8: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x231ae8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x231aec: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x231aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x231af0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x231af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x231af4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x231af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x231af8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231AF8u;
    {
        const bool branch_taken_0x231af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x231AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231AF8u;
        // 0x231afc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231af8) {
            ctx->pc = 0x231B10u;
            goto label_231b10;
        }
    }
    ctx->pc = 0x231B00u;
    // 0x231b00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x231b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x231b04: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x231B04u;
    {
        const bool branch_taken_0x231b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x231b04) {
            ctx->pc = 0x231B14u;
            goto label_231b14;
        }
    }
    ctx->pc = 0x231B0Cu;
    // 0x231b0c: 0x0  nop
    ctx->pc = 0x231b0cu;
    // NOP
label_231b10:
    // 0x231b10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x231b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231b14:
    // 0x231b14: 0x71442389  pcpyld      $a0, $t2, $a0
    ctx->pc = 0x231b14u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 4)));
    // 0x231b18: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x231b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x231b1c: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x231b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x231b20: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x231b20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x231b24: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x231b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x231b28: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x231b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x231b2c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x231b2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x231b30: 0xdf858458  ld          $a1, -0x7BA8($gp)
    ctx->pc = 0x231b30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294935640)));
    // 0x231b34: 0x240a004c  addiu       $t2, $zero, 0x4C
    ctx->pc = 0x231b34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x231b38: 0x71452389  pcpyld      $a0, $t2, $a1
    ctx->pc = 0x231b38u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 5)));
    // 0x231b3c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x231b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x231b40: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x231b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x231b44: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x231b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x231b48: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x231b48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x231b4c: 0x240a004d  addiu       $t2, $zero, 0x4D
    ctx->pc = 0x231b4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x231b50: 0x71452389  pcpyld      $a0, $t2, $a1
    ctx->pc = 0x231b50u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 5)));
    // 0x231b54: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x231b54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x231b58: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x231b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x231b5c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x231b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x231b60: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x231b60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x231b64: 0xc091258  jal         func_244960
    ctx->pc = 0x231B64u;
    SET_GPR_U32(ctx, 31, 0x231B6Cu);
    ctx->pc = 0x231B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B64u;
    // 0x231b68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x244960u, 0x231B64u, 0x231B6Cu)) {
        return;
    }
    ctx->pc = 0x231B6Cu;
label_231b6c:
    // 0x231b6c: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x231b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x231b70: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x231b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x231b74: 0x3c0144ff  lui         $at, 0x44FF
    ctx->pc = 0x231b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17663 << 16));
    // 0x231b78: 0x3421fdff  ori         $at, $at, 0xFDFF
    ctx->pc = 0x231b78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65023);
    // 0x231b7c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x231b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x231b80: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x231b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x231b84: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x231b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x231b88: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x231b88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x231b8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x231b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x231b90: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x231b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x231b94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231b98: 0x0  nop
    ctx->pc = 0x231b98u;
    // NOP
    // 0x231b9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231b9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x231ba0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x231ba0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x231ba4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x231ba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231ba8: 0x0  nop
    ctx->pc = 0x231ba8u;
    // NOP
    // 0x231bac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x231bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x231bb0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x231bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x231bb4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x231bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x231bb8: 0x46004a81  sub.s       $f10, $f9, $f0
    ctx->pc = 0x231bb8u;
    ctx->f[10] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x231bbc: 0x46014a41  sub.s       $f9, $f9, $f1
    ctx->pc = 0x231bbcu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x231bc0: 0x46005283  div.s       $f10, $f10, $f0
    ctx->pc = 0x231bc0u;
    ctx->f[10] = FPU_DIV_S(ctx, ctx->f[10], ctx->f[0]);
    // 0x231bc4: 0x46014a43  div.s       $f9, $f9, $f1
    ctx->pc = 0x231bc4u;
    ctx->f[9] = FPU_DIV_S(ctx, ctx->f[9], ctx->f[1]);
    // 0x231bc8: 0x46035281  sub.s       $f10, $f10, $f3
    ctx->pc = 0x231bc8u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[3]);
    // 0x231bcc: 0x46034a41  sub.s       $f9, $f9, $f3
    ctx->pc = 0x231bccu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
    // 0x231bd0: 0x46025282  mul.s       $f10, $f10, $f2
    ctx->pc = 0x231bd0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x231bd4: 0x46024a42  mul.s       $f9, $f9, $f2
    ctx->pc = 0x231bd4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x231bd8: 0xc6440130  lwc1        $f4, 0x130($s2)
    ctx->pc = 0x231bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x231bdc: 0xc647013c  lwc1        $f7, 0x13C($s2)
    ctx->pc = 0x231bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x231be0: 0xc6450134  lwc1        $f5, 0x134($s2)
    ctx->pc = 0x231be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x231be4: 0xc6480140  lwc1        $f8, 0x140($s2)
    ctx->pc = 0x231be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x231be8: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x231be8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x231bec: 0xc6460138  lwc1        $f6, 0x138($s2)
    ctx->pc = 0x231becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x231bf0: 0xc6430144  lwc1        $f3, 0x144($s2)
    ctx->pc = 0x231bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231bf4: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x231bf4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x231bf8: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x231bf8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x231bfc: 0xc6400148  lwc1        $f0, 0x148($s2)
    ctx->pc = 0x231bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231c00: 0xc642014c  lwc1        $f2, 0x14C($s2)
    ctx->pc = 0x231c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231c04: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x231c04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x231c08: 0xc6410150  lwc1        $f1, 0x150($s2)
    ctx->pc = 0x231c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231c0c: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x231c0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x231c10: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x231c10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x231c14: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x231c14u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x231c18: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x231c18u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x231c1c: 0x46093182  mul.s       $f6, $f6, $f9
    ctx->pc = 0x231c1cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x231c20: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x231c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x231c24: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x231c24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x231c28: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x231c28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x231c2c: 0x460020c0  add.s       $f3, $f4, $f0
    ctx->pc = 0x231c2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x231c30: 0x460229c0  add.s       $f7, $f5, $f2
    ctx->pc = 0x231c30u;
    ctx->f[7] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x231c34: 0x46013200  add.s       $f8, $f6, $f1
    ctx->pc = 0x231c34u;
    ctx->f[8] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x231c38: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x231c38u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x231c3c: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x231c3cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x231c40: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x231c40u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x231c44: 0xc6400124  lwc1        $f0, 0x124($s2)
    ctx->pc = 0x231c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231c48: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x231c48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x231c4c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x231c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x231c50: 0xc6410128  lwc1        $f1, 0x128($s2)
    ctx->pc = 0x231c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231c54: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x231c54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x231c58: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x231c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x231c5c: 0xc640012c  lwc1        $f0, 0x12C($s2)
    ctx->pc = 0x231c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231c60: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x231c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x231c64: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x231c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x231c68: 0xc6410130  lwc1        $f1, 0x130($s2)
    ctx->pc = 0x231c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231c6c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x231c6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x231c70: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x231c70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x231c74: 0xc6400134  lwc1        $f0, 0x134($s2)
    ctx->pc = 0x231c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231c78: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x231c78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x231c7c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x231c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x231c80: 0xc6410138  lwc1        $f1, 0x138($s2)
    ctx->pc = 0x231c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231c84: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x231c84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x231c88: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x231c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x231c8c: 0xc640013c  lwc1        $f0, 0x13C($s2)
    ctx->pc = 0x231c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231c90: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x231c90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x231c94: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x231c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x231c98: 0xc6410140  lwc1        $f1, 0x140($s2)
    ctx->pc = 0x231c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231c9c: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x231c9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x231ca0: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x231ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x231ca4: 0xc6400144  lwc1        $f0, 0x144($s2)
    ctx->pc = 0x231ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231ca8: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x231ca8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x231cac: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x231cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x231cb0: 0xc6410148  lwc1        $f1, 0x148($s2)
    ctx->pc = 0x231cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231cb4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x231cb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x231cb8: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x231cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x231cbc: 0xc640014c  lwc1        $f0, 0x14C($s2)
    ctx->pc = 0x231cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231cc0: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x231cc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x231cc4: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x231cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x231cc8: 0xc6410150  lwc1        $f1, 0x150($s2)
    ctx->pc = 0x231cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231ccc: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x231cccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x231cd0: 0xe621002c  swc1        $f1, 0x2C($s1)
    ctx->pc = 0x231cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x231cd4: 0xc6440160  lwc1        $f4, 0x160($s2)
    ctx->pc = 0x231cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x231cd8: 0xc647016c  lwc1        $f7, 0x16C($s2)
    ctx->pc = 0x231cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x231cdc: 0xc6450164  lwc1        $f5, 0x164($s2)
    ctx->pc = 0x231cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x231ce0: 0xc6480170  lwc1        $f8, 0x170($s2)
    ctx->pc = 0x231ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x231ce4: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x231ce4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x231ce8: 0xc6460168  lwc1        $f6, 0x168($s2)
    ctx->pc = 0x231ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x231cec: 0xc6430174  lwc1        $f3, 0x174($s2)
    ctx->pc = 0x231cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231cf0: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x231cf0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x231cf4: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x231cf4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x231cf8: 0xc6400178  lwc1        $f0, 0x178($s2)
    ctx->pc = 0x231cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231cfc: 0xc641017c  lwc1        $f1, 0x17C($s2)
    ctx->pc = 0x231cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231d00: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x231d00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x231d04: 0xc6420180  lwc1        $f2, 0x180($s2)
    ctx->pc = 0x231d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231d08: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x231d08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x231d0c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x231d0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x231d10: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x231d10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x231d14: 0x46093182  mul.s       $f6, $f6, $f9
    ctx->pc = 0x231d14u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x231d18: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x231d18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x231d1c: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x231d1cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
    // 0x231d20: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x231d20u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x231d24: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x231d24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x231d28: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x231d28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x231d2c: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x231d2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x231d30: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x231d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x231d34: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x231d34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x231d38: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x231d38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x231d3c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x231d3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x231d40: 0x460020c0  add.s       $f3, $f4, $f0
    ctx->pc = 0x231d40u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x231d44: 0x460129c0  add.s       $f7, $f5, $f1
    ctx->pc = 0x231d44u;
    ctx->f[7] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x231d48: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x231d48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x231d4c: 0x46023200  add.s       $f8, $f6, $f2
    ctx->pc = 0x231d4cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x231d50: 0xe7a70024  swc1        $f7, 0x24($sp)
    ctx->pc = 0x231d50u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x231d54: 0xe7a80028  swc1        $f8, 0x28($sp)
    ctx->pc = 0x231d54u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x231d58: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x231d58u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x231d5c: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x231d5cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x231d60: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x231d60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x231d64: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x231d64u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x231d68: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x231d68u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x231d6c: 0xe7a60038  swc1        $f6, 0x38($sp)
    ctx->pc = 0x231d6cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x231d70: 0xc6400154  lwc1        $f0, 0x154($s2)
    ctx->pc = 0x231d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231d74: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x231d74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x231d78: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x231d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x231d7c: 0xc6410158  lwc1        $f1, 0x158($s2)
    ctx->pc = 0x231d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231d80: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x231d80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x231d84: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x231d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x231d88: 0xc640015c  lwc1        $f0, 0x15C($s2)
    ctx->pc = 0x231d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231d8c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x231d8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x231d90: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x231d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x231d94: 0xc6410160  lwc1        $f1, 0x160($s2)
    ctx->pc = 0x231d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231d98: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x231d98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x231d9c: 0xe621003c  swc1        $f1, 0x3C($s1)
    ctx->pc = 0x231d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x231da0: 0xc6400164  lwc1        $f0, 0x164($s2)
    ctx->pc = 0x231da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231da4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x231da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x231da8: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x231da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x231dac: 0xc6410168  lwc1        $f1, 0x168($s2)
    ctx->pc = 0x231dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231db0: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x231db0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x231db4: 0xe6210044  swc1        $f1, 0x44($s1)
    ctx->pc = 0x231db4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x231db8: 0xc640016c  lwc1        $f0, 0x16C($s2)
    ctx->pc = 0x231db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231dbc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x231dbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x231dc0: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x231dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x231dc4: 0xc6410170  lwc1        $f1, 0x170($s2)
    ctx->pc = 0x231dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231dc8: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x231dc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x231dcc: 0xe621004c  swc1        $f1, 0x4C($s1)
    ctx->pc = 0x231dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x231dd0: 0xc6400174  lwc1        $f0, 0x174($s2)
    ctx->pc = 0x231dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231dd4: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x231dd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x231dd8: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x231dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x231ddc: 0xc6410178  lwc1        $f1, 0x178($s2)
    ctx->pc = 0x231ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231de0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x231de0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x231de4: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x231de4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x231de8: 0xc640017c  lwc1        $f0, 0x17C($s2)
    ctx->pc = 0x231de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231dec: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x231decu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x231df0: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x231df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x231df4: 0xc6410180  lwc1        $f1, 0x180($s2)
    ctx->pc = 0x231df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231df8: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x231df8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x231dfc: 0xe621005c  swc1        $f1, 0x5C($s1)
    ctx->pc = 0x231dfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x231e00: 0x6a64009b  ldl         $a0, 0x9B($s3)
    ctx->pc = 0x231e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x231e04: 0x6e640094  ldr         $a0, 0x94($s3)
    ctx->pc = 0x231e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x231e08: 0x6a6500a3  ldl         $a1, 0xA3($s3)
    ctx->pc = 0x231e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 163); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x231e0c: 0x6e65009c  ldr         $a1, 0x9C($s3)
    ctx->pc = 0x231e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 156); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x231e10: 0x8e6200a4  lw          $v0, 0xA4($s3)
    ctx->pc = 0x231e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
    // 0x231e14: 0xb2240067  sdl         $a0, 0x67($s1)
    ctx->pc = 0x231e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x231e18: 0xb6240060  sdr         $a0, 0x60($s1)
    ctx->pc = 0x231e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x231e1c: 0xb225006f  sdl         $a1, 0x6F($s1)
    ctx->pc = 0x231e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x231e20: 0xb6250068  sdr         $a1, 0x68($s1)
    ctx->pc = 0x231e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x231e24: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x231e24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x231e28: 0x6a6400af  ldl         $a0, 0xAF($s3)
    ctx->pc = 0x231e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x231e2c: 0x6e6400a8  ldr         $a0, 0xA8($s3)
    ctx->pc = 0x231e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x231e30: 0x6a6500b7  ldl         $a1, 0xB7($s3)
    ctx->pc = 0x231e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x231e34: 0x6e6500b0  ldr         $a1, 0xB0($s3)
    ctx->pc = 0x231e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x231e38: 0x8e6200b8  lw          $v0, 0xB8($s3)
    ctx->pc = 0x231e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    // 0x231e3c: 0xb204001b  sdl         $a0, 0x1B($s0)
    ctx->pc = 0x231e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x231e40: 0xb6040014  sdr         $a0, 0x14($s0)
    ctx->pc = 0x231e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x231e44: 0xb2050023  sdl         $a1, 0x23($s0)
    ctx->pc = 0x231e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x231e48: 0xb605001c  sdr         $a1, 0x1C($s0)
    ctx->pc = 0x231e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x231e4c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x231e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x231e50: 0xc626000c  lwc1        $f6, 0xC($s1)
    ctx->pc = 0x231e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x231e54: 0xc627003c  lwc1        $f7, 0x3C($s1)
    ctx->pc = 0x231e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x231e58: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x231e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x231e5c: 0xc6280040  lwc1        $f8, 0x40($s1)
    ctx->pc = 0x231e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x231e60: 0x46073181  sub.s       $f6, $f6, $f7
    ctx->pc = 0x231e60u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x231e64: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x231e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x231e68: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x231e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231e6c: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x231e6cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x231e70: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x231e70u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x231e74: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x231e74u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x231e78: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x231e78u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x231e7c: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x231e7cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x231e80: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x231e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231e84: 0xc623004c  lwc1        $f3, 0x4C($s1)
    ctx->pc = 0x231e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231e88: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x231e88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x231e8c: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x231e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231e90: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x231e90u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x231e94: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x231e94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x231e98: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x231e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x231e9c: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x231e9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x231ea0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x231ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x231ea4: 0x460129c2  mul.s       $f7, $f5, $f1
    ctx->pc = 0x231ea4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x231ea8: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x231ea8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x231eac: 0x46033082  mul.s       $f2, $f6, $f3
    ctx->pc = 0x231eacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x231eb0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x231eb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x231eb4: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x231eb4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x231eb8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x231eb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x231ebc: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x231ebcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x231ec0: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x231ec0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x231ec4: 0x460439c1  sub.s       $f7, $f7, $f4
    ctx->pc = 0x231ec4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x231ec8: 0xe6020030  swc1        $f2, 0x30($s0)
    ctx->pc = 0x231ec8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x231ecc: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x231eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x231ed0: 0xe6070028  swc1        $f7, 0x28($s0)
    ctx->pc = 0x231ed0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x231ed4: 0x26240088  addiu       $a0, $s1, 0x88
    ctx->pc = 0x231ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x231ed8: 0xc093a66  jal         func_24E998
    ctx->pc = 0x231ED8u;
    SET_GPR_U32(ctx, 31, 0x231EE0u);
    ctx->pc = 0x231EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231ED8u;
    // 0x231edc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E998u, 0x231ED8u, 0x231EE0u)) {
        return;
    }
    ctx->pc = 0x231EE0u;
label_231ee0:
    // 0x231ee0: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x231ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231ee4: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x231ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231ee8: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x231ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231eec: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x231eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231ef0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x231ef0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x231ef4: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x231ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x231ef8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x231ef8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x231efc: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x231efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231f00: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x231f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x231f04: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x231f04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x231f08: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x231f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x231f0c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x231f0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x231f10: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x231f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x231f14: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x231f14u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x231f18: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x231f18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x231f1c: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x231f1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x231f20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x231f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x231f24: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x231f24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x231f28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x231f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x231f2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x231f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x231f30: 0xa2040038  sb          $a0, 0x38($s0)
    ctx->pc = 0x231f30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x231f34: 0xa2020039  sb          $v0, 0x39($s0)
    ctx->pc = 0x231f34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 2));
    // 0x231f38: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x231f38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x231f3c: 0xa203003a  sb          $v1, 0x3A($s0)
    ctx->pc = 0x231f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x231f40: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x231f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231f44: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x231f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231f48: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x231f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231f4c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x231f4cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x231f50: 0xc6240040  lwc1        $f4, 0x40($s1)
    ctx->pc = 0x231f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x231f54: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x231f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231f58: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x231f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231f5c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x231f5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x231f60: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x231f60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x231f64: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x231f64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x231f68: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x231f68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x231f6c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x231f6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x231f70: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x231f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x231f74: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x231f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231f78: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x231f78u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x231f7c: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x231f7cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x231f80: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x231f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x231f84: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x231f84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x231f88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x231f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x231f8c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x231f8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x231f90: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x231f90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x231f94: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x231f94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x231f98: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x231f98u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x231f9c: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x231f9cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x231fa0: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x231fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x231fa4: 0xe6030044  swc1        $f3, 0x44($s0)
    ctx->pc = 0x231fa4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x231fa8: 0xe604003c  swc1        $f4, 0x3C($s0)
    ctx->pc = 0x231fa8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x231fac: 0x2624009c  addiu       $a0, $s1, 0x9C
    ctx->pc = 0x231facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
    // 0x231fb0: 0xc093a66  jal         func_24E998
    ctx->pc = 0x231FB0u;
    SET_GPR_U32(ctx, 31, 0x231FB8u);
    ctx->pc = 0x231FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231FB0u;
    // 0x231fb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E998u, 0x231FB0u, 0x231FB8u)) {
        return;
    }
    ctx->pc = 0x231FB8u;
label_231fb8:
    // 0x231fb8: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x231fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231fbc: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x231fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231fc0: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x231fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231fc4: 0xc6030040  lwc1        $f3, 0x40($s0)
    ctx->pc = 0x231fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231fc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x231fc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x231fcc: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x231fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x231fd0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x231fd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x231fd4: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x231fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231fd8: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x231fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x231fdc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x231fdcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x231fe0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x231fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x231fe4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x231fe4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x231fe8: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x231fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x231fec: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x231fecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x231ff0: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x231ff0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x231ff4: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x231ff4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x231ff8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x231ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x231ffc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x231ffcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x232000: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x232000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x232004: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x232004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x232008: 0xa204004c  sb          $a0, 0x4C($s0)
    ctx->pc = 0x232008u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x23200c: 0xa202004d  sb          $v0, 0x4D($s0)
    ctx->pc = 0x23200cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 2));
    // 0x232010: 0xe6010048  swc1        $f1, 0x48($s0)
    ctx->pc = 0x232010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x232014: 0xa203004e  sb          $v1, 0x4E($s0)
    ctx->pc = 0x232014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x232018: 0xc6260024  lwc1        $f6, 0x24($s1)
    ctx->pc = 0x232018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x23201c: 0xc6270054  lwc1        $f7, 0x54($s1)
    ctx->pc = 0x23201cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x232020: 0xc6250028  lwc1        $f5, 0x28($s1)
    ctx->pc = 0x232020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x232024: 0xc6280058  lwc1        $f8, 0x58($s1)
    ctx->pc = 0x232024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x232028: 0x46073181  sub.s       $f6, $f6, $f7
    ctx->pc = 0x232028u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x23202c: 0xc624002c  lwc1        $f4, 0x2C($s1)
    ctx->pc = 0x23202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x232030: 0xc622005c  lwc1        $f2, 0x5C($s1)
    ctx->pc = 0x232030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232034: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x232034u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x232038: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x232038u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23203c: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x23203cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x232040: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x232040u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x232044: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x232044u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x232048: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x232048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23204c: 0xc6230034  lwc1        $f3, 0x34($s1)
    ctx->pc = 0x23204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x232050: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x232050u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x232054: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x232054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232058: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x232058u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x23205c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x23205cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x232060: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x232060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x232064: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x232064u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x232068: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x232068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x23206c: 0x460129c2  mul.s       $f7, $f5, $f1
    ctx->pc = 0x23206cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x232070: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x232070u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x232074: 0x46033082  mul.s       $f2, $f6, $f3
    ctx->pc = 0x232074u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x232078: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x232078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x23207c: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x23207cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x232080: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x232080u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x232084: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x232084u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x232088: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x232088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x23208c: 0x460439c1  sub.s       $f7, $f7, $f4
    ctx->pc = 0x23208cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x232090: 0xe6020058  swc1        $f2, 0x58($s0)
    ctx->pc = 0x232090u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x232094: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x232094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x232098: 0xe6070050  swc1        $f7, 0x50($s0)
    ctx->pc = 0x232098u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x23209c: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x23209cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x2320a0: 0xc093a66  jal         func_24E998
    ctx->pc = 0x2320A0u;
    SET_GPR_U32(ctx, 31, 0x2320A8u);
    ctx->pc = 0x2320A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2320A0u;
    // 0x2320a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E998u, 0x2320A0u, 0x2320A8u)) {
        return;
    }
    ctx->pc = 0x2320A8u;
label_2320a8:
    // 0x2320a8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2320a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2320ac: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x2320acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2320b0: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x2320b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2320b4: 0xc6030054  lwc1        $f3, 0x54($s0)
    ctx->pc = 0x2320b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2320b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2320b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2320bc: 0xc624002c  lwc1        $f4, 0x2C($s1)
    ctx->pc = 0x2320bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2320c0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2320c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2320c4: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x2320c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2320c8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2320c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2320cc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2320ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2320d0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2320d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2320d4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2320d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2320d8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2320d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2320dc: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x2320dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x2320e0: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x2320e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x2320e4: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x2320e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x2320e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2320e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2320ec: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2320ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2320f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2320f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2320f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2320f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2320f8: 0xa2040060  sb          $a0, 0x60($s0)
    ctx->pc = 0x2320f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 4));
    // 0x2320fc: 0xa2020061  sb          $v0, 0x61($s0)
    ctx->pc = 0x2320fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x232100: 0xe601005c  swc1        $f1, 0x5C($s0)
    ctx->pc = 0x232100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x232104: 0xa2030062  sb          $v1, 0x62($s0)
    ctx->pc = 0x232104u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 3));
    // 0x232108: 0xc6230048  lwc1        $f3, 0x48($s1)
    ctx->pc = 0x232108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23210c: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x23210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232110: 0xc622004c  lwc1        $f2, 0x4C($s1)
    ctx->pc = 0x232110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232114: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x232114u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x232118: 0xc6240058  lwc1        $f4, 0x58($s1)
    ctx->pc = 0x232118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23211c: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x23211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232120: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x232120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232124: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x232124u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x232128: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x232128u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23212c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x23212cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x232130: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x232130u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x232134: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x232134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x232138: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x232138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23213c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x23213cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232140: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x232140u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x232144: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x232144u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x232148: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x232148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x23214c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x23214cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x232150: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x232150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x232154: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x232154u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x232158: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x232158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x23215c: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x23215cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x232160: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x232160u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x232164: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x232164u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x232168: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x232168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x23216c: 0xe603006c  swc1        $f3, 0x6C($s0)
    ctx->pc = 0x23216cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x232170: 0xe6040064  swc1        $f4, 0x64($s0)
    ctx->pc = 0x232170u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x232174: 0x262400c4  addiu       $a0, $s1, 0xC4
    ctx->pc = 0x232174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x232178: 0xc093a66  jal         func_24E998
    ctx->pc = 0x232178u;
    SET_GPR_U32(ctx, 31, 0x232180u);
    ctx->pc = 0x23217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232178u;
    // 0x23217c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E998u, 0x232178u, 0x232180u)) {
        return;
    }
    ctx->pc = 0x232180u;
label_232180:
    // 0x232180: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x232180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232184: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x232184u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x232188: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x232188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23218c: 0x24c65580  addiu       $a2, $a2, 0x5580
    ctx->pc = 0x23218cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21888));
    // 0x232190: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x232190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232198: 0xc6030068  lwc1        $f3, 0x68($s0)
    ctx->pc = 0x232198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23219c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x23219cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2321a0: 0xc624002c  lwc1        $f4, 0x2C($s1)
    ctx->pc = 0x2321a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2321a4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2321a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2321a8: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x2321a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2321ac: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x2321acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2321b0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2321b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2321b4: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x2321b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2321b8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2321b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2321bc: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x2321bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2321c0: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x2321c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x2321c4: 0x52fc3  sra         $a1, $a1, 31
    ctx->pc = 0x2321c4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 31));
    // 0x2321c8: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x2321c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x2321cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2321ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2321d0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2321d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2321d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2321d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2321d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2321d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2321dc: 0xa2040074  sb          $a0, 0x74($s0)
    ctx->pc = 0x2321dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 116), (uint8_t)GPR_U32(ctx, 4));
    // 0x2321e0: 0xa2030076  sb          $v1, 0x76($s0)
    ctx->pc = 0x2321e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 118), (uint8_t)GPR_U32(ctx, 3));
    // 0x2321e4: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x2321e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2321e8: 0xa2050075  sb          $a1, 0x75($s0)
    ctx->pc = 0x2321e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 117), (uint8_t)GPR_U32(ctx, 5));
    // 0x2321ec: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x2321ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2321f0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2321f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2321f4: 0x8ca54174  lw          $a1, 0x4174($a1)
    ctx->pc = 0x2321f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4174u));
    // 0x2321f8: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x2321f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x2321fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2321fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x232200: 0x7a430030  lq          $v1, 0x30($s2)
    ctx->pc = 0x232200u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x232204: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x232204u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x232208: 0x7a440040  lq          $a0, 0x40($s2)
    ctx->pc = 0x232208u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x23220c: 0x7cc40020  sq          $a0, 0x20($a2)
    ctx->pc = 0x23220cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 4));
    // 0x232210: 0x7a430050  lq          $v1, 0x50($s2)
    ctx->pc = 0x232210u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x232214: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232218: 0xac254174  sw          $a1, 0x4174($at)
    ctx->pc = 0x232218u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B4174u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4174u, _value); } while (0);
    // 0x23221c: 0x7cc30030  sq          $v1, 0x30($a2)
    ctx->pc = 0x23221cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 3));
label_232220:
    // 0x232220: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x232220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x232224: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x232224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x232228: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x232228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23222c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x23222cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x232230: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x232230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x232234: 0x3e00008  jr          $ra
    ctx->pc = 0x232234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232234u;
        // 0x232238: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23223Cu;
    // 0x23223c: 0x0  nop
    ctx->pc = 0x23223cu;
    // NOP
    ctx->pc = 0x232240u;
}
