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

// Function: sub_00210390
// Address: 0x210390 - 0x2104e8
void sub_00210390_0x210390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210390_0x210390");
#endif

    switch (ctx->pc) {
        case 0x2103e0u: goto label_2103e0;
        case 0x2103f4u: goto label_2103f4;
        case 0x210418u: goto label_210418;
        case 0x210450u: goto label_210450;
        default: break;
    }

    ctx->pc = 0x210390u;

    // 0x210390: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x210390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x210394: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x210394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x210398: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x210398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x21039c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21039cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103a0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2103a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2103a4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2103a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103a8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2103a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2103ac: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2103acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103b0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2103b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2103b4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2103b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103b8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2103b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2103bc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2103bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2103c0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2103c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2103c4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2103c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2103c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2103c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2103cc: 0x8c950070  lw          $s5, 0x70($a0)
    ctx->pc = 0x2103ccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2103d0: 0x8c9401cc  lw          $s4, 0x1CC($a0)
    ctx->pc = 0x2103d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x2103d4: 0x1ac00038  blez        $s6, . + 4 + (0x38 << 2)
    ctx->pc = 0x2103D4u;
    {
        const bool branch_taken_0x2103d4 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x2103D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103D4u;
        // 0x2103d8: 0x8c930078  lw          $s3, 0x78($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103d4) {
            ctx->pc = 0x2104B8u;
            goto label_2104b8;
        }
    }
    ctx->pc = 0x2103DCu;
    // 0x2103dc: 0x0  nop
    ctx->pc = 0x2103dcu;
    // NOP
label_2103e0:
    // 0x2103e0: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x2103e0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2103e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2103e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103e8: 0x2578821  addu        $s1, $s2, $s7
    ctx->pc = 0x2103e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x2103ec: 0xc08489c  jal         func_212270
    ctx->pc = 0x2103ECu;
    SET_GPR_U32(ctx, 31, 0x2103F4u);
    ctx->pc = 0x2103F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2103ECu;
    // 0x2103f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212270u, 0x2103ECu, 0x2103F4u)) {
        return;
    }
    ctx->pc = 0x2103F4u;
label_2103f4:
    // 0x2103f4: 0x26180001  addiu       $t8, $s0, 0x1
    ctx->pc = 0x2103f4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2103f8: 0x8e8b0030  lw          $t3, 0x30($s4)
    ctx->pc = 0x2103f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x2103fc: 0x1a600028  blez        $s3, . + 4 + (0x28 << 2)
    ctx->pc = 0x2103FCu;
    {
        const bool branch_taken_0x2103fc = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x210400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103FCu;
        // 0x210400: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103fc) {
            ctx->pc = 0x2104A0u;
            goto label_2104a0;
        }
    }
    ctx->pc = 0x210404u;
    // 0x210404: 0x25e9021  addu        $s2, $s2, $fp
    ctx->pc = 0x210404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x210408: 0x26900034  addiu       $s0, $s4, 0x34
    ctx->pc = 0x210408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
    // 0x21040c: 0xb7980  sll         $t7, $t3, 6
    ctx->pc = 0x21040cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 11), 6));
    // 0x210410: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x210410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x210414: 0x0  nop
    ctx->pc = 0x210414u;
    // NOP
label_210418:
    // 0x210418: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x210418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x21041c: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x21041cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x210420: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x210420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x210424: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x210424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210428: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x210428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21042c: 0xa74821  addu        $t1, $a1, $a3
    ctx->pc = 0x21042cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x210430: 0x24ee0001  addiu       $t6, $a3, 0x1
    ctx->pc = 0x210430u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x210434: 0x8c4d0000  lw          $t5, 0x0($v0)
    ctx->pc = 0x210434u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210438: 0xcf6021  addu        $t4, $a2, $t7
    ctx->pc = 0x210438u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
    // 0x21043c: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x21043cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x210440: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x210440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210444: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x210444u;
    {
        const bool branch_taken_0x210444 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x210448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210444u;
        // 0x210448: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210444) {
            ctx->pc = 0x210490u;
            goto label_210490;
        }
    }
    ctx->pc = 0x21044Cu;
    // 0x21044c: 0x0  nop
    ctx->pc = 0x21044cu;
    // NOP
label_210450:
    // 0x210450: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x210450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x210454: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x210454u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x210458: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x210458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x21045c: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x21045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x210460: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x210460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210464: 0x304a000f  andi        $t2, $v0, 0xF
    ctx->pc = 0x210464u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x210468: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x210468u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21046c: 0x1334821  addu        $t1, $t1, $s3
    ctx->pc = 0x21046cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x210470: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x210470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x210474: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x210474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x210478: 0x1a42021  addu        $a0, $t5, $a0
    ctx->pc = 0x210478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x21047c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x21047cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x210480: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x210480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x210484: 0xa1050000  sb          $a1, 0x0($t0)
    ctx->pc = 0x210484u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x210488: 0x14e0fff1  bnez        $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x210488u;
    {
        const bool branch_taken_0x210488 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210488u;
        // 0x21048c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210488) {
            ctx->pc = 0x210450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210450;
        }
    }
    ctx->pc = 0x210490u;
label_210490:
    // 0x210490: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x210490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210494: 0xf3102a  slt         $v0, $a3, $s3
    ctx->pc = 0x210494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x210498: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x210498u;
    {
        const bool branch_taken_0x210498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210498u;
        // 0x21049c: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210498) {
            ctx->pc = 0x210418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210418;
        }
    }
    ctx->pc = 0x2104A0u;
label_2104a0:
    // 0x2104a0: 0x25620001  addiu       $v0, $t3, 0x1
    ctx->pc = 0x2104a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2104a4: 0x300802d  daddu       $s0, $t8, $zero
    ctx->pc = 0x2104a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2104a8: 0x304b000f  andi        $t3, $v0, 0xF
    ctx->pc = 0x2104a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2104ac: 0x216182a  slt         $v1, $s0, $s6
    ctx->pc = 0x2104acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2104b0: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2104B0u;
    {
        const bool branch_taken_0x2104b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2104B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104B0u;
        // 0x2104b4: 0xae8b0030  sw          $t3, 0x30($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104b0) {
            ctx->pc = 0x2103E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2103e0;
        }
    }
    ctx->pc = 0x2104B8u;
label_2104b8:
    // 0x2104b8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2104b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2104bc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2104bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2104c0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2104c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2104c4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2104c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2104c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2104c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2104cc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2104ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2104d0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2104d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2104d4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2104d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2104d8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2104d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2104dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2104dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2104e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2104E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2104E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104E0u;
        // 0x2104e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2104E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2104E8u;
}
